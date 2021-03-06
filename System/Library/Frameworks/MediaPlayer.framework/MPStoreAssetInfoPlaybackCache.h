/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMutableDictionary;

@interface MPStoreAssetInfoPlaybackCache : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _accessOrderedRequests;
	NSMutableDictionary* _requestToCachedResponse;

}
+(id)sharedCache;
-(id)cachedResponseForRequest:(id)arg1 ;
-(id)_init;
-(void)addCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)updateForPlaybackOfFileAsset:(id)arg1 fromResponse:(id)arg2 ;
@end

