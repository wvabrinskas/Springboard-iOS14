/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HKHeartRhythmAvailabilityObserver.h>
#import <libobjc.A.dylib/HRFeatureRegulatoryReenableFeatureActionDelegate.h>

@protocol HRFeatureRegulatoryReenableFeatureActionDelegate;
@class NSArray, HKHeartRhythmAvailability, UIViewController, UINavigationController, NSString;

@interface HRFeatureRegulatoryPanelViewController : HKTableViewController <HKHeartRhythmAvailabilityObserver, HRFeatureRegulatoryReenableFeatureActionDelegate> {

	NSArray* _displayableItems;
	HKHeartRhythmAvailability* _heartRhythmAvailability;
	UIViewController*<HRFeatureRegulatoryReenableFeatureActionDelegate> _delegate;
	UINavigationController* _onboardingNavigationController;

}

@property (nonatomic,retain) HKHeartRhythmAvailability * heartRhythmAvailability;                                              //@synthesize heartRhythmAvailability=_heartRhythmAvailability - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<HRFeatureRegulatoryReenableFeatureActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UINavigationController * onboardingNavigationController;                                          //@synthesize onboardingNavigationController=_onboardingNavigationController - In the implementation block
@property (nonatomic,readonly) NSArray * displayableItems;                                                                     //@synthesize displayableItems=_displayableItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldUseOldVersioningFormat;
-(id)init;
-(UIViewController*<HRFeatureRegulatoryReenableFeatureActionDelegate>)delegate;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)protectedDataDidBecomeAvailable:(id)arg1 ;
-(void)setDelegate:(UIViewController*<HRFeatureRegulatoryReenableFeatureActionDelegate>)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)heartRhythmAvailabilityDidUpdate;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)initWithHealthStore:(id)arg1 delegate:(id)arg2 ;
-(HKHeartRhythmAvailability *)heartRhythmAvailability;
-(UINavigationController *)onboardingNavigationController;
-(void)didSelectReenableFeatureForProductName:(id)arg1 ;
-(void)setHeartRhythmAvailability:(HKHeartRhythmAvailability *)arg1 ;
-(NSArray *)displayableItems;
-(void)receivedHeartRhythmAvailabilityNotification;
-(void)setOnboardingNavigationController:(UINavigationController *)arg1 ;
@end

