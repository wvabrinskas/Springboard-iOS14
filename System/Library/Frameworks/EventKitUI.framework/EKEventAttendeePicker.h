/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNComposeRecipientTextViewDelegate.h>
#import <libobjc.A.dylib/CNAutocompleteResultsTableViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerPrivateDelegate.h>
#import <libobjc.A.dylib/CNAutocompleteSearchConsumer.h>

@protocol EKEventAttendeePickerDelegate;
@class NSArray, CNComposeRecipientTextView, UIScrollView, UITableView, UIKeyboard, NSNumber, NSOperationQueue, NSMutableDictionary, EKEvent, NSDate, CNAutocompleteSearchManager, NSMutableArray, CNAutocompleteResultsTableViewController, CNAutocompleteFetchContext, CNComposeRecipient, NSString;

@interface EKEventAttendeePicker : UIViewController <CNComposeRecipientTextViewDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNContactPickerDelegate, CNContactViewControllerPrivateDelegate, CNAutocompleteSearchConsumer> {

	NSArray* _recipients;
	CNComposeRecipientTextView* _composeRecipientView;
	UIScrollView* _recipientScrollView;
	UITableView* _searchResultsView;
	BOOL _showingSearchField;
	UIKeyboard* _keyboard;
	NSNumber* _lastSearchId;
	BOOL _ABAccessDenied;
	BOOL _shouldReenableAutomaticKeyboard;
	CGRect _initialFrame;
	NSOperationQueue* _availabilityQueue;
	NSMutableDictionary* _recipientAddressesToRecipients;
	EKEvent* _event;
	NSMutableDictionary* _atomPresentationOptionsByRecipient;
	BOOL _suppressAvailabilityRequests;
	NSDate* _overriddenEventStartDate;
	NSDate* _overriddenEventEndDate;
	CNAutocompleteSearchManager* _searchManager;
	NSMutableArray* _searchResults;
	CNAutocompleteResultsTableViewController* _autocompleteTableViewController;
	CNAutocompleteFetchContext* _fetchContext;
	CNComposeRecipient* _displayedRecipient;
	BOOL _hasChanges;
	NSString* _searchAccountID;
	id<EKEventAttendeePickerDelegate> _addressValidationDelegate;

}

@property (nonatomic,copy) NSString * searchAccountID;                                                        //@synthesize searchAccountID=_searchAccountID - In the implementation block
@property (nonatomic,readonly) NSArray * addresses; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,readonly) NSString * remainingText; 
@property (assign,nonatomic,__weak) id<EKEventAttendeePickerDelegate> addressValidationDelegate;              //@synthesize addressValidationDelegate=_addressValidationDelegate - In the implementation block
@property (assign,nonatomic) BOOL hasChanges;                                                                 //@synthesize hasChanges=_hasChanges - In the implementation block
@property (nonatomic,readonly) BOOL showAvailability; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_addressForRecipient:(id)arg1 ;
+(BOOL)_participantHasResponded:(id)arg1 ;
-(BOOL)hasChanges;
-(NSArray *)recipients;
-(void)contactViewControllerDidExecuteClearRecentsDataAction:(id)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)searchWithText:(id)arg1 ;
-(id)_searchManager;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(unsigned long long)presentationOptionsForRecipient:(id)arg1 ;
-(BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1 ;
-(NSArray *)addresses;
-(id)initWithFrame:(CGRect)arg1 event:(id)arg2 calendar:(id)arg3 overriddenEventStartDate:(id)arg4 overriddenEventEndDate:(id)arg5 ;
-(void)commitRemainingText;
-(void)setHasChanges:(BOOL)arg1 ;
-(id)peoplePickerPrompt;
-(BOOL)showAvailability;
-(void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_setRecipientsOnComposeView;
-(BOOL)_zeroKeyworkSearchEnabled;
-(void)searchForCorecipients;
-(void)scrollComposeViewToEnd;
-(void)_requestAvailabilityForRecipients:(id)arg1 ;
-(void)_setAtomPresentationOption:(unsigned long long)arg1 forRecipient:(id)arg2 ;
-(id)_lookUpRecipientForAddress:(id)arg1 ;
-(void)_adjustLayoutOfSubviews;
-(id)_searchResultsView;
-(void)_showSearchResultsView;
-(void)_refreshSearchResults;
-(void)_updateFetchContextChosenAddresses;
-(void)_hideSearchResultsViewAndCancelOutstandingSearches:(BOOL)arg1 ;
-(double)_maxScrollerHeight;
-(Class)_CNContactPickerViewController;
-(Class)_CNContactViewController;
-(NSString *)remainingText;
-(void)_copyRecipientsFromComposeView;
-(NSString *)searchAccountID;
-(id<EKEventAttendeePickerDelegate>)addressValidationDelegate;
-(void)finishedSearchingForCorecipients;
-(void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)finishedTaskWithID:(id)arg1 ;
-(void)finishedSearchingForAutocompleteResults;
-(void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)setAddressValidationDelegate:(id<EKEventAttendeePickerDelegate>)arg1 ;
-(void)viewLayoutMarginsDidChange;
-(void)setSearchAccountID:(NSString *)arg1 ;
-(void)loadView;
-(void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)dealloc;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
@end

