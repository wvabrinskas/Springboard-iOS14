/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMapTable, NSArray;

@interface REDependencyGraph : NSObject <NSCopying> {

	NSMapTable* _nodes;

}

@property (nonatomic,readonly) NSArray * allItems; 
@property (nonatomic,readonly) unsigned long long count; 
-(void)addItem:(id)arg1 ;
-(NSArray *)allItems;
-(id)init;
-(unsigned long long)hash;
-(unsigned long long)count;
-(id)description;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithPointerFunctions:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
-(BOOL)containsItem:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_enumerateSortedFirstLevelDependenciesOfItem:(id)arg1 usingComparator:(/*^block*/id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)markItem:(id)arg1 dependentOnItem:(id)arg2 ;
-(BOOL)item:(id)arg1 isDependencyOfItem:(id)arg2 ;
-(void)enumerateDependenciesOfItem:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)topologicalSortedItemsWithComparator:(/*^block*/id)arg1 ;
-(void)_visitNode:(id)arg1 visited:(id)arg2 temporary:(id)arg3 result:(id)arg4 comparator:(/*^block*/id)arg5 warn:(BOOL)arg6 ;
-(id)topologicalSortedItems;
@end
