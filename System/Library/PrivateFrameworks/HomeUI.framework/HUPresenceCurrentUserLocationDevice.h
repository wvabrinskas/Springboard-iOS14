/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HMDevice;

@interface HUPresenceCurrentUserLocationDevice : NSObject {

	unsigned long long _type;
	HMDevice* _customDevice;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) HMDevice * customDevice;              //@synthesize customDevice=_customDevice - In the implementation block
+(id)currentDevice;
+(id)FMFDevice;
+(id)customDeviceWithHMDevice:(id)arg1 ;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 customDevice:(id)arg2 ;
-(HMDevice *)customDevice;
@end
