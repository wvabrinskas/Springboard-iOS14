/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMDDevice, NSArray;

@interface HMDDeviceRegistrationEntry : HMFObject {

	HMDDevice* _device;
	NSArray* _accessoryUUIDList;

}

@property (nonatomic,readonly) HMDDevice * device;                       //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSArray * accessoryUUIDList;              //@synthesize accessoryUUIDList=_accessoryUUIDList - In the implementation block
-(HMDDevice *)device;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDevice:(id)arg1 accessoryList:(id)arg2 ;
-(NSArray *)accessoryUUIDList;
@end

