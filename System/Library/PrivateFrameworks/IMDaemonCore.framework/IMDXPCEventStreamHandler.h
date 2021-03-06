/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable;

@interface IMDXPCEventStreamHandler : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _delegateToQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMapTable * delegateToQueue;                    //@synthesize delegateToQueue=_delegateToQueue - In the implementation block
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)removeDelegate:(id)arg1 ;
-(NSMapTable *)delegateToQueue;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithEventStreamName:(const char*)arg1 ;
-(void)didReceiveEventWithName:(id)arg1 userInfo:(id)arg2 ;
-(id)queueForDelegate:(id)arg1 ;
@end

