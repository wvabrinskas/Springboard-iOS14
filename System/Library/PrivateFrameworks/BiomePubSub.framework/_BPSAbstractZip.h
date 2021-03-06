/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomePubSub/BiomePubSub-Structs.h>
#import <BiomePubSub/BPSSubscription.h>

@protocol BPSSubscriber;
@class NSMutableArray;

@interface _BPSAbstractZip : BPSSubscription {

	os_unfair_lock_s _lock;
	os_unfair_recursive_lock_s _downstreamLock;
	BOOL _cancelled;
	BOOL _errored;
	BOOL _finished;
	BOOL _recursive;
	id<BPSSubscriber> _downstream;
	NSMutableArray* _buffers;
	NSMutableArray* _subscriptions;
	NSMutableArray* _upstreamFinished;
	long long _upstreamCount;
	long long _pendingDemand;

}

@property (nonatomic,retain) id<BPSSubscriber> downstream;                   //@synthesize downstream=_downstream - In the implementation block
@property (nonatomic,retain) NSMutableArray * buffers;                       //@synthesize buffers=_buffers - In the implementation block
@property (nonatomic,retain) NSMutableArray * subscriptions;                 //@synthesize subscriptions=_subscriptions - In the implementation block
@property (assign,nonatomic) BOOL cancelled;                                 //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) BOOL errored;                                   //@synthesize errored=_errored - In the implementation block
@property (assign,nonatomic) BOOL finished;                                  //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) NSMutableArray * upstreamFinished;              //@synthesize upstreamFinished=_upstreamFinished - In the implementation block
@property (assign,nonatomic) long long upstreamCount;                        //@synthesize upstreamCount=_upstreamCount - In the implementation block
@property (assign,nonatomic) BOOL recursive;                                 //@synthesize recursive=_recursive - In the implementation block
@property (assign,nonatomic) long long pendingDemand;                        //@synthesize pendingDemand=_pendingDemand - In the implementation block
-(NSMutableArray *)subscriptions;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(id)upstreamSubscriptions;
-(BOOL)cancelled;
-(NSMutableArray *)buffers;
-(void)setFinished:(BOOL)arg1 ;
-(id<BPSSubscriber>)downstream;
-(BOOL)finished;
-(void)setSubscriptions:(NSMutableArray *)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(void)requestDemand:(long long)arg1 ;
-(BOOL)errored;
-(void)setBuffers:(NSMutableArray *)arg1 ;
-(void)cancel;
-(long long)pendingDemand;
-(void)setPendingDemand:(long long)arg1 ;
-(BOOL)recursive;
-(void)setRecursive:(BOOL)arg1 ;
-(NSMutableArray *)upstreamFinished;
-(void)setUpstreamFinished:(NSMutableArray *)arg1 ;
-(long long)upstreamCount;
-(void)setErrored:(BOOL)arg1 ;
-(id)initWithDownstream:(id)arg1 upstreamCount:(long long)arg2 ;
-(void)setUpstreamCount:(long long)arg1 ;
-(id)convertValues:(id)arg1 ;
-(void)resolvePendingDemandAndUnlock;
-(void)lockSendCompletion:(id)arg1 index:(long long)arg2 ;
-(void)receiveSubscription:(id)arg1 index:(long long)arg2 ;
-(long long)receiveInput:(id)arg1 index:(long long)arg2 ;
-(void)receiveCompletion:(id)arg1 index:(long long)arg2 ;
@end

