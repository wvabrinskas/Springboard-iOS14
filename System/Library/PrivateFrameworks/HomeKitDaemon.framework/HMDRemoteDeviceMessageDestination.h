/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDRemoteMessageDestination.h>

@class HMDDevice, HMDDeviceHandle;

@interface HMDRemoteDeviceMessageDestination : HMDRemoteMessageDestination {

	HMDDevice* _device;
	HMDDeviceHandle* _preferredHandle;

}

@property (nonatomic,copy) HMDDeviceHandle * preferredHandle;              //@synthesize preferredHandle=_preferredHandle - In the implementation block
@property (nonatomic,readonly) HMDDevice * device;                         //@synthesize device=_device - In the implementation block
+(id)shortDescription;
-(HMDDevice *)device;
-(HMDDeviceHandle *)preferredHandle;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)initWithTarget:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPreferredHandle:(HMDDeviceHandle *)arg1 ;
-(id)shortDescription;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithTarget:(id)arg1 device:(id)arg2 ;
-(id)remoteDestinationString;
@end

