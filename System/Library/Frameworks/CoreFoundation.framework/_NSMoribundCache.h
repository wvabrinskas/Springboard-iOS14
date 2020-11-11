/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCache.h>

@interface _NSMoribundCache : NSCache
-(unsigned long long)countLimit;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)totalCostLimit;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(BOOL)evictsObjectsWithDiscardedContent;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 ;
-(void)setTotalCostLimit:(unsigned long long)arg1 ;
-(void)setEvictsObjectsWithDiscardedContent:(BOOL)arg1 ;
-(oneway void)release;
-(void)removeAllObjects;
-(id)delegate;
-(id)retain;
-(void)removeObjectForKey:(id)arg1 ;
-(id)name;
-(void)setDelegate:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)dealloc;
-(void)setName:(id)arg1 ;
@end
