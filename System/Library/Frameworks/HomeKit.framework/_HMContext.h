/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSString, NSDictionary, NSObject, HMPendingRequests, HMDelegateCaller, HMFMessageDispatcher, HMXPCClient;

@interface _HMContext : NSObject {

	NSString* _name;
	NSDictionary* _userInfo;
	NSObject*<OS_dispatch_queue> _queue;
	HMPendingRequests* _pendingRequests;
	HMDelegateCaller* _delegateCaller;
	HMFMessageDispatcher* _messageDispatcher;
	HMXPCClient* _xpcClient;

}

@property (nonatomic,readonly) HMXPCClient * xpcClient;                               //@synthesize xpcClient=_xpcClient - In the implementation block
@property (copy,readonly) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSDictionary * userInfo;                                    //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) HMPendingRequests * pendingRequests;                   //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,readonly) HMDelegateCaller * delegateCaller;                     //@synthesize delegateCaller=_delegateCaller - In the implementation block
@property (nonatomic,readonly) HMFMessageDispatcher * messageDispatcher;              //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (nonatomic,readonly) HMXPCClient * messageTransport; 
+(id)contextWithName:(id)arg1 ;
+(id)contextWithName:(id)arg1 delegateCaller:(id)arg2 ;
+(id)contextWithName:(id)arg1 userInfo:(id)arg2 delegateCaller:(id)arg3 ;
-(HMPendingRequests *)pendingRequests;
-(NSDictionary *)userInfo;
-(id)init;
-(NSString *)name;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 pendingRequests:(id)arg3 delegateCaller:(id)arg4 messageDispatcher:(id)arg5 messageTransport:(id)arg6 ;
-(id)subcontextWithName:(id)arg1 ;
-(HMFMessageDispatcher *)messageDispatcher;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 pendingRequests:(id)arg3 delegateCaller:(id)arg4 messageDispatcher:(id)arg5 ;
-(HMXPCClient *)xpcClient;
-(HMXPCClient *)messageTransport;
-(NSObject*<OS_dispatch_queue>)queue;
-(HMDelegateCaller *)delegateCaller;
@end

