/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOKeyBagProtectedDataDidBecomeAvailableObserver.h>

@class GEONavdCachePersistenceManager, NSString;

@interface GEORouteHypothesisCache : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver> {

	GEONavdCachePersistenceManager* _persistenceManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tearDown;
-(id)loadValueForKey:(id)arg1 ;
-(void)enumerateAllForCacheEntriesWithHandler:(/*^block*/id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)init;
-(void)removeKey:(id)arg1 value:(id)arg2 ;
-(double)nextRefreshTimeStamp;
-(id)descriptionOfAllEntries;
-(void)protectedDataDidBecomeAvailable:(id)arg1 ;
-(id)loadEntryForRowId:(long long)arg1 ;
-(long long)numberOfEntriesOnDisk;
-(id)rowIdsOfEntriesBeforeTimeStamp:(double)arg1 ;
-(void)_removeAllEntries;
-(void)saveValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
@end

