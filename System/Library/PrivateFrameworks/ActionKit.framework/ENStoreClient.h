/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface ENStoreClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)init;
-(void)handleError:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)invokeAsyncBoolBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invokeAsyncInt32Block:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invokeAsyncObjectBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invokeAsyncBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

