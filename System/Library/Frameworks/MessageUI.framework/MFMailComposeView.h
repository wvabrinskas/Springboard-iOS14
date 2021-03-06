/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UITransitionView.h>
#import <libobjc.A.dylib/CNComposeHeaderViewDelegate.h>
#import <libobjc.A.dylib/CNAutocompleteResultsTableViewControllerDelegate.h>
#import <libobjc.A.dylib/CNComposeDragSourceDelegate.h>
#import <libobjc.A.dylib/CNComposeDropTargetDelegate.h>
#import <libobjc.A.dylib/MFComposeMultiViewDelegate.h>
#import <libobjc.A.dylib/MFComposeWebViewDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <libobjc.A.dylib/MFComposeFromViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/MFMailComposeContactsSearchControllerDelegate.h>

@protocol MFMailComposeViewDelegate, MFMailComposeRecipientTextViewDelegate, MFMailComposeToFieldDelegate;
@class UIScrollView, UIView, MFMailComposeToField, MFMailComposeRecipientTextView, MFComposeSubjectView, MFComposeFromView, MFComposeMultiView, MFComposeImageSizeView, MFComposeWebContentVariationView, MFComposeWebView, MFMessageContentLoadingView, NSMutableArray, UIResponder, NSInvocation, MFMailComposeContactsSearchController, CNAutocompleteResultsTableViewController, UIViewController, MFComposeDisplayMetrics, NSString;

@interface MFMailComposeView : UITransitionView <CNComposeHeaderViewDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNComposeDragSourceDelegate, CNComposeDropTargetDelegate, MFComposeMultiViewDelegate, MFComposeWebViewDelegate, UIPopoverControllerDelegate, MFComposeFromViewDelegate, UIScrollViewDelegate, MFMailComposeContactsSearchControllerDelegate> {

	UIScrollView* _bodyScroller;
	UIView* _headerView;
	UIView* _contentView;
	UIView* _shadowView;
	MFMailComposeToField* _toField;
	MFMailComposeRecipientTextView* _ccField;
	MFMailComposeRecipientTextView* _bccField;
	MFMailComposeRecipientTextView* _lastChangedRecipientView;
	MFMailComposeRecipientTextView* _activeRecipientView;
	BOOL _completedCCAndBCCFieldSetup;
	MFComposeSubjectView* _subjectField;
	MFComposeFromView* _fromField;
	MFComposeMultiView* _multiField;
	MFComposeImageSizeView* _imageSizeField;
	MFComposeWebContentVariationView* _webContentVariationField;
	MFComposeWebView* _webView;
	MFMessageContentLoadingView* _loadingView;
	BOOL _isDragging;
	NSMutableArray* _pendingDropRecipients;
	UIResponder* _firstResponderBeforeSheet;
	UIResponder* _pinningResponder;
	NSInvocation* _delayedPopoverInvocation;
	MFMailComposeContactsSearchController* _searchController;
	CNAutocompleteResultsTableViewController* _searchViewController;
	CNAutocompleteResultsTableViewController* _corecipientsSearchViewController;
	UIView* _corecipientsSearchTableViewSeparator;
	double _offsetBeforeSearch;
	double _keyboardIntersection;
	unsigned long long _options;
	CGSize _currentContentSize;
	unsigned long long _notifyingBodyField;
	unsigned _isChangingRecipients : 1;
	unsigned _isLoading : 1;
	unsigned _isShowingPeoplePicker : 1;
	unsigned _isRotating : 1;
	unsigned _isClosing : 1;
	unsigned _isForEditing : 1;
	unsigned _isAnimationDisabled : 1;
	unsigned _isDisambiguating : 1;
	unsigned _shouldShowOptionalHeaders : 1;
	unsigned _hasAppeared : 1;
	unsigned _corecipientsTableVisible : 1;
	id<MFMailComposeViewDelegate> _mailComposeViewDelegate;
	id<MFMailComposeRecipientTextViewDelegate> _composeRecipientViewDelegate;
	UIViewController* _popoverOwner;
	id<MFMailComposeToFieldDelegate> _toFieldDelegate;
	MFComposeDisplayMetrics* _displayMetrics;

}

@property (nonatomic,retain) MFComposeDisplayMetrics * displayMetrics;                                                //@synthesize displayMetrics=_displayMetrics - In the implementation block
@property (assign,nonatomic,__weak) id<MFMailComposeViewDelegate> composeViewDelegate;                                //@synthesize mailComposeViewDelegate=_mailComposeViewDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MFMailComposeRecipientTextViewDelegate> composeRecipientDelegate;              //@synthesize composeRecipientViewDelegate=_composeRecipientViewDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * popoverOwner;                                                  //@synthesize popoverOwner=_popoverOwner - In the implementation block
@property (assign,nonatomic,__weak) id<MFMailComposeToFieldDelegate> toFieldDelegate;                                 //@synthesize toFieldDelegate=_toFieldDelegate - In the implementation block
@property (assign,nonatomic) BOOL isForEditing; 
@property (assign,getter=isAnimationDisabled,nonatomic) BOOL animationDisabled; 
@property (assign,getter=isChangingRecipients,nonatomic) BOOL changingRecipients; 
@property (assign,getter=isShowingPeoplePicker,nonatomic) BOOL showingPeoplePicker; 
@property (assign,getter=isLoading,nonatomic) BOOL loading; 
@property (getter=isSearching,nonatomic,readonly) BOOL searching; 
@property (nonatomic,readonly) MFMailComposeToField * toField;                                                        //@synthesize toField=_toField - In the implementation block
@property (nonatomic,readonly) MFMailComposeRecipientTextView * ccField;                                              //@synthesize ccField=_ccField - In the implementation block
@property (nonatomic,readonly) MFMailComposeRecipientTextView * bccField;                                             //@synthesize bccField=_bccField - In the implementation block
@property (nonatomic,readonly) MFComposeSubjectView * subjectField;                                                   //@synthesize subjectField=_subjectField - In the implementation block
@property (nonatomic,readonly) MFComposeFromView * fromField;                                                         //@synthesize fromField=_fromField - In the implementation block
@property (nonatomic,readonly) MFComposeImageSizeView * imageSizeField;                                               //@synthesize imageSizeField=_imageSizeField - In the implementation block
@property (nonatomic,readonly) MFComposeMultiView * multiField;                                                       //@synthesize multiField=_multiField - In the implementation block
@property (nonatomic,readonly) MFComposeWebView * composeWebView; 
@property (nonatomic,readonly) MFComposeWebContentVariationView * webContentVariationField;                           //@synthesize webContentVariationField=_webContentVariationField - In the implementation block
@property (nonatomic,readonly) UIScrollView * bodyScroller;                                                           //@synthesize bodyScroller=_bodyScroller - In the implementation block
@property (nonatomic,readonly) MFMailComposeContactsSearchController * searchController;                              //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,readonly) CNAutocompleteResultsTableViewController * searchViewController;                       //@synthesize searchViewController=_searchViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAnimationDisabled:(BOOL)arg1 ;
-(void)layoutMarginsDidChange;
-(void)selectPreviousSearchResult;
-(void)dropTarget:(id)arg1 didDropDragItems:(id)arg2 atPoint:(CGPoint)arg3 ;
-(void)selectNextSearchResult;
-(void)layoutForChangedComposeHeaderView:(id)arg1 size:(CGSize)arg2 ;
-(BOOL)presentSearchResults;
-(void)_normalizeBodyFieldFrame;
-(void)setLoading:(BOOL)arg1 ;
-(void)_layoutSubviews:(BOOL)arg1 changingView:(id)arg2 toSize:(CGSize)arg3 searchResultsWereDismissed:(BOOL)arg4 ;
-(BOOL)endEditing:(BOOL)arg1 ;
-(id)dragSource:(id)arg1 targetedPreviewForDraggableItem:(id)arg2 ;
-(BOOL)presentSearchResults:(id)arg1 ;
-(void)_createImageSizeFieldIfNeededAndAddSubview:(BOOL)arg1 ;
-(BOOL)isSearchResultsPopoverVisible;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)setChangingRecipients:(BOOL)arg1 ;
-(void)_endBlockingBodyScroll;
-(void)_layoutSubviews:(BOOL)arg1 ;
-(void)setPopoverOwner:(UIViewController *)arg1 ;
-(void)_multiFieldClicked;
-(void)_setDragging:(BOOL)arg1 ;
-(void)_collectKeyViews:(id)arg1 ;
-(BOOL)_userInterfaceConfigurationSupportsCorecipientsTableView;
-(void)parentDidClose;
-(BOOL)isForEditing;
-(MFComposeSubjectView *)subjectField;
-(UIViewController *)popoverOwner;
-(void)_layoutComposeHeaderViewsWithChangingHeader:(id)arg1 toSize:(CGSize)arg2 withPinFrame:(out CGRect*)arg3 ;
-(void)menuDidHide;
-(void)didIgnoreSearchResults;
-(MFMailComposeToField *)toField;
-(void)_setShadowViewVisible:(BOOL)arg1 frame:(CGRect)arg2 ;
-(void)clearSearchForRecipientView:(id)arg1 reflow:(BOOL)arg2 clear:(BOOL)arg3 ;
-(id)_corecipientResultsTable;
-(void)beginSearchForText:(id)arg1 recipientView:(id)arg2 ;
-(void)composeHeaderViewClicked:(id)arg1 ;
-(void)_setUpContentView;
-(void)resetContentSize;
-(MFComposeDisplayMetrics *)displayMetrics;
-(void)_updateFromField;
-(void)clearSearchForActiveRecipientView;
-(double)_verticalPadding;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(BOOL)isKeyboardVisible;
-(void)_displayMetricsDidChange;
-(void)setKeyboardVisible:(BOOL)arg1 animate:(BOOL)arg2 ;
-(void)_updateTextViewHeightWithHeaderFrame:(CGRect)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(BOOL)isLoading;
-(MFComposeWebContentVariationView *)webContentVariationField;
-(void)_dropItems:(id)arg1 recipientTextView:(id)arg2 ;
-(void)setToFieldDelegate:(id<MFMailComposeToFieldDelegate>)arg1 ;
-(void)saveFirstResponderWithKeyboardPinning:(BOOL)arg1 ;
-(void)parentWillClose;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)_finishUpRotationToInterfaceOrientation:(long long)arg1 ;
-(CGPoint)_headerViewOriginWithScrollViewOffsetCalculation;
-(void)_beginPreventingScrollingToRevealSelection;
-(void)viewDidBecomeFirstResponder:(id)arg1 ;
-(id<MFMailComposeViewDelegate>)composeViewDelegate;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(void)cancelSearch;
-(void)_endPreventingScrollingToRevealSelection;
-(BOOL)isSearching;
-(void)composeFromView:(id)arg1 didSelectAddress:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(BOOL)_shouldShowCorecipientsTableView;
-(MFComposeMultiView *)multiField;
-(id)sendingAccountProxyForComposeContactsSearchController:(id)arg1 ;
-(void)composeContactsSearchController:(id)arg1 finishedWithResults:(BOOL)arg2 ;
-(void)composeContactsSearchController:(id)arg1 didFindCorecipients:(id)arg2 ;
-(void)cancelDelayedPopover;
-(void)_adjustHeaderFieldsPreferredContentSize;
-(void)setShowingPeoplePicker:(BOOL)arg1 ;
-(void)_beginBlockingBodyScroll;
-(void)_layoutSubviewsWithActiveRecipientView:(BOOL)arg1 changingView:(id)arg2 toSize:(CGSize)arg3 ;
-(void)toggleImageSizeFieldIfNecessary;
-(MFComposeWebView *)composeWebView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateQuoteLevelMenu;
-(void)_setHeaderFrame:(CGRect)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setAutoresizingMask:(unsigned long long)arg1 ;
-(void)dragSource:(id)arg1 willEndInteractionWithItems:(id)arg2 dropOperation:(unsigned long long)arg3 ;
-(void)_adjustScrollerForBottomView;
-(void)layoutSubviews;
-(double)_heightForBottomView;
-(void)_createCCAndBCCFieldIfNeededAndCompleteSetup:(BOOL)arg1 ;
-(void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2 ;
-(id)dragSource:(id)arg1 localObjectForDraggableItem:(id)arg2 ;
-(id<MFMailComposeRecipientTextViewDelegate>)composeRecipientDelegate;
-(void)findCorecipientsWithRecipientView:(id)arg1 ;
-(BOOL)isShowingPeoplePicker;
-(CNAutocompleteResultsTableViewController *)searchViewController;
-(void)searchResultsPopoverWasDismissed;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)_revealSelection;
-(void)_updateOptionalHeaderVisibilityForceVisible:(BOOL)arg1 ;
-(void)focusFirstResponderAfterRecipientView:(id)arg1 ;
-(void)composeContactsSearchController:(id)arg1 didSortResults:(id)arg2 ;
-(void)_updateKeyboardIntersection:(CGRect)arg1 ;
-(void)dismissSearchResults;
-(void)setDisplayMetrics:(MFComposeDisplayMetrics *)arg1 ;
-(void)setRecipientFieldsEditable:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)dropTargetDragExited:(id)arg1 ;
-(void)_cancelDelayedPopover;
-(CGRect)_headerFrame;
-(void)_setupField:(id)arg1 withLabel:(id)arg2 navTitle:(id)arg3 ;
-(void)dismissSearchResultsIfDisambiguating;
-(id)initWithFrame:(CGRect)arg1 options:(unsigned long long)arg2 ;
-(BOOL)isChangingRecipients;
-(void)_layoutSubviews:(BOOL)arg1 changingView:(id)arg2 toSize:(CGSize)arg3 ;
-(void)restoreFirstResponder;
-(void)dropTarget:(id)arg1 dragDidMoveToPoint:(CGPoint)arg2 ;
-(void)setComposeViewDelegate:(id<MFMailComposeViewDelegate>)arg1 ;
-(MFMailComposeRecipientTextView *)bccField;
-(BOOL)dragSource:(id)arg1 sessionAllowsMoveOperation:(id)arg2 ;
-(void)updateOptionalHeaderVisibility;
-(UIScrollView *)bodyScroller;
-(id)_searchResultsTable;
-(BOOL)chooseSelectedSearchResult;
-(void)didAppear;
-(void)autocompleteResultsController:(id)arg1 didAskToRemoveRecipient:(id)arg2 ;
-(MFComposeFromView *)fromField;
-(void)dropTarget:(id)arg1 dragEnteredAtPoint:(CGPoint)arg2 ;
-(id)_focusedRecipientView;
-(void)disambiguateRecipient:(id)arg1 recipientView:(id)arg2 ;
-(void)setScrollsToTop:(BOOL)arg1 ;
-(void)_revealSelectionIfNeededWithChangingView:(id)arg1 ;
-(void)_updateMultiField;
-(id)dragSource:(id)arg1 draggableItemsAtPoint:(CGPoint)arg2 ;
-(void)_cancelAnimations;
-(void)_updateTextViewOriginWithHeaderFrame:(CGRect)arg1 ;
-(void)_presentDelayedPopover;
-(MFComposeImageSizeView *)imageSizeField;
-(void)invalidateSearchResultRecipient:(id)arg1 ;
-(MFMailComposeContactsSearchController *)searchController;
-(void)removeFromSuperview;
-(void)willDisappear;
-(void)composeWebViewTextChanged:(id)arg1 ;
-(void)automaticKeyboardFinishedDisappearing:(id)arg1 ;
-(void)_layoutLoadingView;
-(MFMailComposeRecipientTextView *)ccField;
-(id)recipientTextViewForComposeMultiView:(id)arg1 ;
-(void)automaticKeyboardFinishedAppearing:(id)arg1 ;
-(void)_setupBodyFieldWithHeaderFrame:(CGRect)arg1 enclosingFrame:(CGRect)arg2 changingView:(id)arg3 frameToPin:(CGRect)arg4 wasSearching:(BOOL)arg5 ;
-(void)_setCorecipientsTableViewVisible:(BOOL)arg1 withFieldFrame:(CGRect)arg2 ;
-(void)_adjustScrollerContentSize;
-(void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)dragSource:(id)arg1 suggestedNameForDraggableItem:(id)arg2 ;
-(void)dealloc;
-(void)setIsForEditing:(BOOL)arg1 ;
-(BOOL)isAnimationDisabled;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_presentsSearchResultsTableAsPopover;
-(id<MFMailComposeToFieldDelegate>)toFieldDelegate;
-(void)saveFirstResponder;
-(void)setComposeRecipientDelegate:(id<MFMailComposeRecipientTextViewDelegate>)arg1 ;
-(void)restoreFirstResponderWithKeyboardPinning:(BOOL)arg1 ;
@end

