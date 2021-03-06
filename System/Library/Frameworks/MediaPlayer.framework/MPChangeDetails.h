/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSIndexSet, NSArray;

@interface MPChangeDetails : NSObject {

	NSMutableDictionary* _sectionMoves;
	NSMutableIndexSet* _updatedSectionMoveFromIndexes;
	NSMutableDictionary* _itemMoves;
	NSMutableSet* _updatedItemMoveFromIndexPaths;
	BOOL _isFlatCollection;
	BOOL _isFinalized;
	NSIndexSet* _insertedSections;
	NSIndexSet* _deletedSections;
	NSIndexSet* _updatedSections;
	NSArray* _insertedItemIndexPaths;
	NSArray* _deletedItemIndexPaths;
	NSArray* _updatedItemIndexPaths;

}

@property (nonatomic,copy) NSIndexSet * insertedSections;                      //@synthesize insertedSections=_insertedSections - In the implementation block
@property (nonatomic,copy) NSIndexSet * deletedSections;                       //@synthesize deletedSections=_deletedSections - In the implementation block
@property (nonatomic,copy) NSIndexSet * updatedSections;                       //@synthesize updatedSections=_updatedSections - In the implementation block
@property (nonatomic,copy) NSArray * insertedItemIndexPaths;                   //@synthesize insertedItemIndexPaths=_insertedItemIndexPaths - In the implementation block
@property (nonatomic,copy) NSArray * deletedItemIndexPaths;                    //@synthesize deletedItemIndexPaths=_deletedItemIndexPaths - In the implementation block
@property (nonatomic,copy) NSArray * updatedItemIndexPaths;                    //@synthesize updatedItemIndexPaths=_updatedItemIndexPaths - In the implementation block
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,copy,readonly) NSIndexSet * insertedIndexes; 
@property (nonatomic,copy,readonly) NSIndexSet * deletedIndexes; 
@property (nonatomic,copy,readonly) NSIndexSet * updatedIndexes; 
+(id)changeDetailsWithPreviousCount:(long long)arg1 finalCount:(long long)arg2 isEqualBlock:(/*^block*/id)arg3 isUpdatedBlock:(/*^block*/id)arg4 ;
-(NSIndexSet *)updatedIndexes;
-(BOOL)hasChanges;
-(void)enumerateItemMovesWithBlock:(/*^block*/id)arg1 ;
-(void)removeSectionMoveFromIndex:(long long)arg1 ;
-(void)applyUIKitWorkarounds;
-(void)enumerateMovesUsingBlock:(/*^block*/id)arg1 ;
-(NSIndexSet *)insertedIndexes;
-(NSIndexSet *)deletedSections;
-(id)debugDescription;
-(void)removeItemMoveFromIndexPath:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)description;
-(void)setInsertedSections:(NSIndexSet *)arg1 ;
-(NSIndexSet *)insertedSections;
-(void)enumerateSectionMovesUsingBlock:(/*^block*/id)arg1 ;
-(NSIndexSet *)updatedSections;
-(void)setUpdatedSections:(NSIndexSet *)arg1 ;
-(NSIndexSet *)deletedIndexes;
-(void)appendItemMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2 updated:(BOOL)arg3 ;
-(void)appendSectionMoveFromIndex:(long long)arg1 toIndex:(long long)arg2 updated:(BOOL)arg3 ;
-(void)enumerateSectionMovesWithBlock:(/*^block*/id)arg1 ;
-(void)setDeletedSections:(NSIndexSet *)arg1 ;
-(void)setInsertedItemIndexPaths:(NSArray *)arg1 ;
-(NSArray *)insertedItemIndexPaths;
-(void)setDeletedItemIndexPaths:(NSArray *)arg1 ;
-(NSArray *)deletedItemIndexPaths;
-(void)setUpdatedItemIndexPaths:(NSArray *)arg1 ;
-(void)enumerateItemMovesUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)updatedItemIndexPaths;
-(void)enumerateMovesWithBlock:(/*^block*/id)arg1 ;
@end

