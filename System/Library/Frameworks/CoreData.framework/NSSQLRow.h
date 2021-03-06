/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentCacheRow.h>

@class _CDSnapshot;

@interface NSSQLRow : NSPersistentCacheRow {

	_CDSnapshot* _snapshot;

}
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)allocForSQLEntity:(id)arg1 ;
+(unsigned)newBatchRowAllocation:(id*)arg1 count:(unsigned)arg2 forSQLEntity:(id)arg3 withOwnedObjectIDs:(id*)arg4 andTimestamp:(double)arg5 ;
-(id)objectID;
-(id)newObjectIDForToOne:(id)arg1 ;
-(id)initWithSQLEntity:(id)arg1 objectID:(id)arg2 ;
-(unsigned)_versionNumber;
-(unsigned long long)version;
-(void)setObjectID:(id)arg1 ;
-(long long)pk64;
-(void)setOptLock:(long long)arg1 ;
-(id)sqlEntity;
-(id)_snapshot_;
-(id)description;
-(id)attributeValueForSlot:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)_validateToOnes;
-(unsigned)foreignOrderKeyForSlot:(unsigned)arg1 ;
-(void)setForeignKeySlot:(unsigned)arg1 int64:(long long)arg2 ;
-(CFBitVectorRef)newUpdateMaskWithChangedConstraintsFrom:(id)arg1 ;
-(id)initWithSQLEntity:(id)arg1 ownedObjectID:(id)arg2 andTimestamp:(double)arg3 ;
-(unsigned)foreignEntityKeyForSlot:(unsigned)arg1 ;
-(long long)foreignKeyForSlot:(unsigned)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)setForeignEntityKeySlot:(unsigned)arg1 entityKey:(unsigned)arg2 ;
-(unsigned)sqlEntityID;
-(CFBitVectorRef)newColumnMaskFrom:(id)arg1 columnInclusionOptions:(unsigned long long)arg2 ;
-(BOOL)hasUniqueConstraintDiffFrom:(id)arg1 ;
-(void)setForeignOrderKeySlot:(unsigned)arg1 orderKey:(unsigned)arg2 ;
-(CFBitVectorRef)newUpdateMaskForConstrainedValues;
-(long long)optLock;
-(id)copy;
-(const id*)knownKeyValuesPointer;
-(void)dealloc;
-(CFBitVectorRef)newUpdateMaskFrom:(id)arg1 ;
@end

