/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class HMFMessage, NSUUID, NSObject, HMFActivity;

@interface HMDRemoteReadRequestMessage : HMFObject {

	HMFMessage* _readMessage;
	NSUUID* _accessoryUUID;
	NSObject*<OS_dispatch_queue> _responseQueue;
	HMFActivity* _activity;

}

@property (nonatomic,readonly) HMFMessage * readMessage;                                //@synthesize readMessage=_readMessage - In the implementation block
@property (nonatomic,readonly) NSUUID * accessoryUUID;                                  //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> responseQueue;              //@synthesize responseQueue=_responseQueue - In the implementation block
@property (nonatomic,readonly) HMFActivity * activity;                                  //@synthesize activity=_activity - In the implementation block
-(NSUUID *)accessoryUUID;
-(id)debugDescription;
-(id)description;
-(HMFActivity *)activity;
-(NSObject*<OS_dispatch_queue>)responseQueue;
-(HMFMessage *)readMessage;
-(id)initWithReadMessage:(id)arg1 accessoryUUID:(id)arg2 responseQueue:(id)arg3 activity:(id)arg4 ;
@end
