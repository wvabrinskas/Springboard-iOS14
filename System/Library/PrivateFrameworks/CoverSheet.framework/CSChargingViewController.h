/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/BCBatteryDeviceObserving.h>

@class BCBatteryDeviceController, CSBatteryChargingView, CSBatteryChargingInfo, NSString;

@interface CSChargingViewController : CSCoverSheetViewControllerBase <BCBatteryDeviceObserving> {

	BCBatteryDeviceController* _batteryController;
	CSBatteryChargingView* _chargingView;
	CSBatteryChargingInfo* _chargingInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)presentationPriority;
-(BOOL)handleEvent:(id)arg1 ;
-(id)init;
-(long long)presentationStyle;
-(long long)presentationType;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)connectedDevicesDidChange:(id)arg1 ;
-(void)aggregateAppearance:(id)arg1 ;
-(void)performDismissalAnimationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithChargingInfo:(id)arg1 ;
-(double)durationBeforeDismissal;
-(void)_updateChargingViewIfNecessary;
-(void)_updateChargingViewLegibility;
-(void)_createNewChargingViewForDoubleBattery:(BOOL)arg1 ;
@end

