/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUNameAndIconEditorCellDelegate.h>
#import <libobjc.A.dylib/HUServiceGroupEditorGridViewControllerDelegate.h>
#import <libobjc.A.dylib/HUPresentationDelegateHost.h>

@protocol HUPresentationDelegate, HUServiceGroupEditorViewControllerDelegate;
@class HUServiceGroupEditorGridViewController, NSString, HUServiceGroupEditorItemManager;

@interface HUServiceGroupEditorViewController : HUItemTableViewController <HUNameAndIconEditorCellDelegate, HUServiceGroupEditorGridViewControllerDelegate, HUPresentationDelegateHost> {

	BOOL _hasViewEverAppeared;
	id<HUPresentationDelegate> _presentationDelegate;
	HUServiceGroupEditorGridViewController* _serviceGridViewController;
	id<HUServiceGroupEditorViewControllerDelegate> _serviceGroupEditorDelegate;
	NSString* _editingName;

}

@property (nonatomic,retain) HUServiceGroupEditorItemManager * itemManager; 
@property (nonatomic,readonly) HUServiceGroupEditorGridViewController * serviceGridViewController;                          //@synthesize serviceGridViewController=_serviceGridViewController - In the implementation block
@property (nonatomic,copy) NSString * editingName;                                                                          //@synthesize editingName=_editingName - In the implementation block
@property (nonatomic,readonly) NSString * savedName; 
@property (assign,nonatomic) BOOL hasViewEverAppeared;                                                                      //@synthesize hasViewEverAppeared=_hasViewEverAppeared - In the implementation block
@property (assign,nonatomic,__weak) id<HUServiceGroupEditorViewControllerDelegate> serviceGroupEditorDelegate;              //@synthesize serviceGroupEditorDelegate=_serviceGroupEditorDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUPresentationDelegate> presentationDelegate;                                        //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
+(BOOL)adoptsDefaultGridLayoutMargins;
-(void)_done:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)_cancel:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)childViewControllersToPreload;
-(id<HUPresentationDelegate>)presentationDelegate;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(BOOL)shouldManageTextFieldForItem:(id)arg1 ;
-(id)placeholderTextForTextField:(id)arg1 item:(id)arg2 ;
-(id)currentTextForTextField:(id)arg1 item:(id)arg2 ;
-(void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3 ;
-(void)textFieldDidEndEditing:(id)arg1 item:(id)arg2 ;
-(void)setPresentationDelegate:(id<HUPresentationDelegate>)arg1 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(id)initForEditingExistingServiceGroupBuilder:(id)arg1 ;
-(void)_validateDoneButton;
-(BOOL)hasViewEverAppeared;
-(void)setHasViewEverAppeared:(BOOL)arg1 ;
-(NSString *)editingName;
-(void)_updateServiceGroupBuilderName;
-(void)setEditingName:(NSString *)arg1 ;
-(id<HUServiceGroupEditorViewControllerDelegate>)serviceGroupEditorDelegate;
-(HUServiceGroupEditorGridViewController *)serviceGridViewController;
-(BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2 ;
-(NSString *)savedName;
-(void)serviceGroupEditorGrid:(id)arg1 didUpdateServiceGroupBuilder:(id)arg2 ;
-(id)initForCreatingNewServiceGroupFromServices:(id)arg1 home:(id)arg2 ;
-(id)defaultTextForTextField:(id)arg1 item:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2 ;
-(void)setServiceGroupEditorDelegate:(id<HUServiceGroupEditorViewControllerDelegate>)arg1 ;
@end

