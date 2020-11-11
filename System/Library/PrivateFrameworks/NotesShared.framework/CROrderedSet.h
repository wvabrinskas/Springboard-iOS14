/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/CRCoding.h>

@class CRSet, NSMutableArray, CRDocument, NSArray, NSString;

@interface CROrderedSet : NSObject <CRDataType, CRCoding> {

	CRSet* _contents;
	NSMutableArray* _orderedArray;

}

@property (nonatomic,retain) CRSet * contents;                           //@synthesize contents=_contents - In the implementation block
@property (nonatomic,retain) NSMutableArray * orderedArray;              //@synthesize orderedArray=_orderedArray - In the implementation block
@property (assign,nonatomic,__weak) CRDocument * document; 
@property (readonly) unsigned long long count; 
@property (copy,readonly) NSArray * allObjects; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)removeAllObjects;
-(id)init;
-(id)initWithCRCoder:(id)arg1 ;
-(CRSet *)contents;
-(unsigned long long)hash;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_sort;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(CRDocument *)document;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(unsigned long long)count;
-(BOOL)containsObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(NSArray *)allObjects;
-(void)moveObject:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(NSString *)description;
-(void)addObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(void)setContents:(CRSet *)arg1 ;
-(void)removeObject:(id)arg1 ;
-(id)tombstone;
-(void)setDocument:(CRDocument *)arg1 ;
-(NSMutableArray *)orderedArray;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(id)_indexForIndex:(unsigned long long)arg1 ;
-(void)mergeWithSet:(id)arg1 ;
-(void)setOrderedArray:(NSMutableArray *)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
@end
