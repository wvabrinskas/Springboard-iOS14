/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSString, NSObject, NRDevice;

@interface NRActiveDeviceAssertion : NSObject {

	NSString* _identifier;
	NSObject*<OS_dispatch_queue> _queue;
	NRDevice* _device;

}

@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,retain,readonly) NRDevice * device; 
-(NRDevice *)device;
-(id)description;
-(BOOL)isActive;
-(void)invalidate;
-(void)dealloc;
@end
