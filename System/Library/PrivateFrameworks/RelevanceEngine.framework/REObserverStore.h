/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <RelevanceEngine/RelevanceEngine-Structs.h>
@class NSHashTable, NSArray;

@interface REObserverStore : NSObject {

	os_unfair_lock_s _lock;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * allObservers; 
-(void)removeObserver:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(NSArray *)allObservers;
-(void)addObserver:(id)arg1 ;
-(void)enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(id)initWithFunctionsOptions:(unsigned long long)arg1 ;
@end

