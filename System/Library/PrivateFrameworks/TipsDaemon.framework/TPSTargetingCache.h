/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface TPSTargetingCache : NSObject {

	NSMutableDictionary* _cacheResultDictionary;
	NSObject*<OS_dispatch_queue> _syncQueue;

}

@property (nonatomic,retain) NSMutableDictionary * cacheResultDictionary;              //@synthesize cacheResultDictionary=_cacheResultDictionary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                   //@synthesize syncQueue=_syncQueue - In the implementation block
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(id)init;
-(void)reset;
-(long long)cacheResultForIdentifier:(id)arg1 ;
-(void)addCacheResult:(long long)arg1 forIdentifier:(id)arg2 ;
-(NSMutableDictionary *)cacheResultDictionary;
-(void)setCacheResultDictionary:(NSMutableDictionary *)arg1 ;
@end
