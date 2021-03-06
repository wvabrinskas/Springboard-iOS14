/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/HKHealthPrivacyServicePromptController.h>

@protocol HKHealthPrivacyServicePromptControllerDelegate;
@class HKClinicalAuthorizationSequenceContext, UITableView, HKClinicalAuthorizationHeaderView, NSString;

@interface HKClinicalAuthorizationIntroViewController : HKViewController <UITableViewDataSource, UITableViewDelegate, HKHealthPrivacyServicePromptController> {

	id<HKHealthPrivacyServicePromptControllerDelegate> _delegate;
	HKClinicalAuthorizationSequenceContext* _context;
	UITableView* _tableView;
	HKClinicalAuthorizationHeaderView* _headerView;

}

@property (nonatomic,readonly) UITableView * tableView;                                                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) HKClinicalAuthorizationHeaderView * headerView;                                //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic,__weak) id<HKHealthPrivacyServicePromptControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HKClinicalAuthorizationSequenceContext * context;                              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKClinicalAuthorizationHeaderView *)headerView;
-(void)_cancelButtonPressed:(id)arg1 ;
-(id)init;
-(id<HKHealthPrivacyServicePromptControllerDelegate>)delegate;
-(void)_configureNavigationItem;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(void)_finishWithError:(id)arg1 ;
-(void)_updateForCurrentContentSizeCategory;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setDelegate:(id<HKHealthPrivacyServicePromptControllerDelegate>)arg1 ;
-(HKClinicalAuthorizationSequenceContext *)context;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)_nextButtonPressed:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)loadView;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithContext:(id)arg1 ;
-(id)_createFooterView;
-(void)_configureTableView;
-(void)_configureHeaderViewWithSource:(id)arg1 ;
-(BOOL)_indexPathIsValidRow:(id)arg1 ;
-(long long)_rowFromIndexPath:(id)arg1 ;
-(id)_cellForDetailsAtIndexPath:(id)arg1 ;
-(id)_cellForViewHealthRecordsAtIndexPath:(id)arg1 ;
-(void)_viewHealthRecordsCellTapped:(id)arg1 ;
@end

