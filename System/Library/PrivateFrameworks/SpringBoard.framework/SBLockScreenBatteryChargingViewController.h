/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/BCBatteryDeviceObserving.h>

@protocol SBLockScreenBatteryChargingViewControllerDelegate;
@class CSBatteryChargingView, NSTimer, NSMutableArray, BCBatteryDeviceController, NSString;

@interface SBLockScreenBatteryChargingViewController : CSCoverSheetViewControllerBase <BCBatteryDeviceObserving> {

	BOOL _shouldDisplayBattery;
	CSBatteryChargingView* _chargingView;
	NSTimer* _visibilityTimer;
	NSMutableArray* _connectedDevices;
	BCBatteryDeviceController* _batteryDeviceController;
	id<SBLockScreenBatteryChargingViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBLockScreenBatteryChargingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBLockScreenBatteryChargingViewControllerDelegate>)delegate;
-(id)chargingView;
-(long long)presentationStyle;
-(void)setDelegate:(id<SBLockScreenBatteryChargingViewControllerDelegate>)arg1 ;
-(void)connectedDevicesDidChange:(id)arg1 ;
-(void)loadView;
-(void)dealloc;
-(BOOL)batteryVisible;
-(void)_clearVisibilityTimer;
-(void)_visibilityTimerFired:(id)arg1 ;
-(id)initForDisplayOfBattery:(BOOL)arg1 ;
-(void)presentWithAnimation:(BOOL)arg1 ;
-(void)prepareForDismissalWithAnimation:(BOOL)arg1 ;
-(void)showChargeLevelWithBatteryVisible:(BOOL)arg1 ;
@end

