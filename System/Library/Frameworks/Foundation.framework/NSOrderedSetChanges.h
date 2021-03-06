/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableOrderedSet.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSOrderedSetChanges : NSMutableOrderedSet <NSCopying>

@property (readonly) unsigned long long changeCount; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(unsigned long long)changeCount;
-(void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_isToManyChangeInformation;
-(void)applyChangesToOrderedSet:(id)arg1 ;
-(void)moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)enumerateChangesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateChanges:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)updateObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(long long)_toManyPropertyType;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2 ;
-(void)addChange:(id)arg1 ;
-(void)addChanges:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

