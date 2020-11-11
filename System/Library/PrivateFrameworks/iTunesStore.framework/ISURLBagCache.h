/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class SSLRUCache, NSObject;

@interface ISURLBagCache : NSObject {

	SSLRUCache* _cachedBags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)URLWithBagContext:(id)arg1 ;
+(id)sharedCache;
-(void)addURLBag:(id)arg1 ;
-(id)URLBagForContext:(id)arg1 ;
-(id)init;
-(void)invalidateAllURLBags;
-(id)URLBagForContext:(id)arg1 withOptions:(long long)arg2 ;
-(void)_storeFrontChangedNotification:(id)arg1 ;
-(id)_newRequestWithURLBagContext:(id)arg1 ;
-(void)invalidateURLBagForContext:(id)arg1 ;
-(void)dealloc;
@end
