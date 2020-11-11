/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_group;
#import <NewsCore/NewsCore-Structs.h>
@class NSObject;

@interface FCBalancedCounter : NSObject {

	os_unfair_lock_s _lock;
	long long _count;
	NSObject*<OS_dispatch_group> _dispatchGroup;

}

@property (assign,nonatomic) long long count;                                         //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                                   //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> dispatchGroup;              //@synthesize dispatchGroup=_dispatchGroup - In the implementation block
-(os_unfair_lock_s)lock;
-(void)setCount:(long long)arg1 ;
-(void)decrement;
-(NSObject*<OS_dispatch_group>)dispatchGroup;
-(id)init;
-(void)notifyWhenCountReachesZeroOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(long long)count;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(void)setDispatchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)increment;
-(void)_bumpCounterPositively:(BOOL)arg1 ;
@end
