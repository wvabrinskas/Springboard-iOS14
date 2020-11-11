/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiPolicy/TBDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface TBRemoteDataSource : TBDataSource {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)init;
-(void)executeFetchRequest:(id)arg1 ;
-(unsigned long long)type;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_executeNetworkFetchRequest:(id)arg1 ;
-(void)_executeLocationFetchRequest:(id)arg1 ;
-(void)_executeTileFetchRequest:(id)arg1 ;
-(void)_fetchTilesWithRequest:(id)arg1 ;
-(void)_submitNetworkSearch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchTilesForTileItems:(id)arg1 completionHandler:(/*^block*/id)arg2 trigger:(unsigned long long)arg3 ;
-(void)_captureTileFetchError:(id)arg1 tileKey:(id)arg2 duration:(double)arg3 trigger:(unsigned long long)arg4 ;
-(void)_writeSearchTileToFile:(id)arg1 ;
@end
