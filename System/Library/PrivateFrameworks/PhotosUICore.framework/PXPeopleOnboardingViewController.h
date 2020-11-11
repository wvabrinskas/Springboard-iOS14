/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXPeopleStatusViewDelegate.h>

@class PXPeopleProgressManager, PXPeopleStatusViewController, PXPeopleSectionedDataSource, NSString;

@interface PXPeopleOnboardingViewController : UIViewController <PXPeopleStatusViewDelegate> {

	unsigned long long _onboardStatus;
	PXPeopleProgressManager* _progressManager;
	PXPeopleStatusViewController* _statusViewController;
	PXPeopleSectionedDataSource* _peopleDataSource;

}

@property (assign,nonatomic) unsigned long long onboardStatus;                                 //@synthesize onboardStatus=_onboardStatus - In the implementation block
@property (nonatomic,retain) PXPeopleProgressManager * progressManager;                        //@synthesize progressManager=_progressManager - In the implementation block
@property (nonatomic,retain) PXPeopleStatusViewController * statusViewController;              //@synthesize statusViewController=_statusViewController - In the implementation block
@property (nonatomic,retain) PXPeopleSectionedDataSource * peopleDataSource;                   //@synthesize peopleDataSource=_peopleDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)routingOptionsForDestination:(id)arg1 ;
-(void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(PXPeopleSectionedDataSource *)peopleDataSource;
-(id)init;
-(id)px_navigationDestination;
-(void)_updateWithStatus:(unsigned long long)arg1 progress:(double)arg2 ;
-(void)statusViewControllerEnterButtonTapped:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 progressManager:(id)arg2 ;
-(void)_updateStatusViewForStatus:(unsigned long long)arg1 progress:(double)arg2 ;
-(void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 ;
-(unsigned long long)onboardStatus;
-(id)peopleHomeController;
-(void)_pushToPeopleHome:(id)arg1 ;
-(void)_progressChanged:(id)arg1 ;
-(void)setOnboardStatus:(unsigned long long)arg1 ;
-(PXPeopleProgressManager *)progressManager;
-(void)setProgressManager:(PXPeopleProgressManager *)arg1 ;
-(PXPeopleStatusViewController *)statusViewController;
-(void)setStatusViewController:(PXPeopleStatusViewController *)arg1 ;
-(void)setPeopleDataSource:(PXPeopleSectionedDataSource *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)dealloc;
@end
