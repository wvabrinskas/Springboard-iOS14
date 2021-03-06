/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class GCDeviceBattery;


@protocol _GCDeviceBatteryComponent <_GCDeviceComponent>
@property (nonatomic,copy) id deviceBatteryServiceConnectedHandler; 
@property (nonatomic,copy) id deviceBatteryComponentBatteryUpdatedHandler; 
@property (nonatomic,readonly) GCDeviceBattery * battery; 
@required
-(GCDeviceBattery *)battery;
-(id)deviceBatteryServiceConnectedHandler;
-(void)setDeviceBatteryServiceConnectedHandler:(/*^block*/id)arg1;
-(id)deviceBatteryComponentBatteryUpdatedHandler;
-(void)setDeviceBatteryComponentBatteryUpdatedHandler:(/*^block*/id)arg1;

@end

