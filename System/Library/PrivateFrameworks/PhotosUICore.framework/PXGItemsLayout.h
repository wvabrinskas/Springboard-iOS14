/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>

@protocol PXGItemsLayoutDelegate, PXGLayoutContentSource, PXGItemsGeometry;
@class PXGLayout;

@interface PXGItemsLayout : PXGLayout {

	BOOL _loadedItemsNeedUpdate;
	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	unsigned long long _delegateRespondsTo;
	long long _applyingItemChangesCount;
	long long* _currentStylableItems;
	long long* _pendingStylableItems;
	BOOL* _pendingAnimations;
	long long* _styleableAnimations;
	double* _stylablePaddings;
	BOOL _accessoryItemsNeedUpdate;
	PXGLayout* _accessoryItemsContainerLayout;
	BOOL _lazy;
	id<PXGItemsLayoutDelegate> _delegate;
	long long _numberOfAccessoryItems;
	id<PXGLayoutContentSource> _accessoryItemContentSource;
	id _dropTargetObjectReference;
	unsigned long long _dropTargetStyle;
	id<PXGItemsGeometry> _itemsGeometry;
	long long __numberOfItems;
	NSRange _loadedItems;

}

@property (assign,nonatomic) NSRange loadedItems;                                                       //@synthesize loadedItems=_loadedItems - In the implementation block
@property (assign,nonatomic) long long _numberOfItems;                                                  //@synthesize _numberOfItems=__numberOfItems - In the implementation block
@property (assign,getter=isLazy,nonatomic) BOOL lazy;                                                   //@synthesize lazy=_lazy - In the implementation block
@property (assign,nonatomic,__weak) id<PXGItemsLayoutDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long numberOfItems; 
@property (assign,nonatomic) long long numberOfAccessoryItems;                                          //@synthesize numberOfAccessoryItems=_numberOfAccessoryItems - In the implementation block
@property (assign,nonatomic,__weak) id<PXGLayoutContentSource> accessoryItemContentSource;              //@synthesize accessoryItemContentSource=_accessoryItemContentSource - In the implementation block
@property (nonatomic,readonly) BOOL isApplyingItemChanges; 
@property (nonatomic,retain) id dropTargetObjectReference;                                              //@synthesize dropTargetObjectReference=_dropTargetObjectReference - In the implementation block
@property (assign,nonatomic) unsigned long long dropTargetStyle;                                        //@synthesize dropTargetStyle=_dropTargetStyle - In the implementation block
@property (nonatomic,readonly) id<PXGItemsGeometry> itemsGeometry;                                      //@synthesize itemsGeometry=_itemsGeometry - In the implementation block
-(void)setAnimationParameters:(SCD_Struct_PX58)arg1 forStylableType:(long long)arg2 ;
-(unsigned)axSpriteIndexClosestToSpriteIndex:(unsigned)arg1 inDirection:(unsigned long long)arg2 ;
-(void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)setNumberOfAccessoryItems:(long long)arg1 ;
-(id<PXGItemsGeometry>)itemsGeometry;
-(id)itemsForSpriteIndexes:(id)arg1 ;
-(void)_updateAccessoryItems;
-(unsigned)spriteIndexForAccessoryItem:(long long)arg1 ;
-(void)modifyAccessoryItemSpritesInRange:(PXGSpriteIndexRange)arg1 state:(/*^block*/id)arg2 ;
-(id)init;
-(void)_handleFocusChangeWithUserInfo:(id)arg1 ;
-(void)updateLoadedItemsIfNeeded;
-(void)setDropTargetObjectReference:(id)arg1 ;
-(id)loadedItemsForItems:(id)arg1 ;
-(id<PXGItemsLayoutDelegate>)delegate;
-(void)setItem:(long long)arg1 forStylableType:(long long)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)dropTargetStyle;
-(void)_updateStylableType:(long long)arg1 ;
-(BOOL)isLazy;
-(void)endApplyingItemChanges;
-(void)setDropTargetStyle:(unsigned long long)arg1 ;
-(long long)numberOfItems;
-(id)objectReferenceForItem:(long long)arg1 ;
-(void)loadedItemsDidChange;
-(NSRange)loadedItems;
-(void)_updateLoadedItems;
-(BOOL)spriteIndexIsAccessoryItem:(unsigned)arg1 ;
-(void)invalidateLoadedItems;
-(long long)accessoryItemForSpriteIndex:(unsigned)arg1 ;
-(id)hitTestResultForSpriteIndex:(unsigned)arg1 ;
-(void)_invalidateAccessoryItems;
-(id)axSpriteIndexesInRect:(CGRect)arg1 ;
-(id)layoutForItemChanges;
-(void)numberOfAccessoryItemsDidChange;
-(id<PXGLayoutContentSource>)accessoryItemContentSource;
-(unsigned)spriteIndexForItem:(long long)arg1 ;
-(void)dropTargetObjectReferenceDidChange;
-(void)invalidateStylableType:(long long)arg1 ;
-(NSRange)itemsToLoad;
-(id)objectReferenceForSpriteIndex:(unsigned)arg1 ;
-(id)spriteIndexesForItems:(id)arg1 ;
-(BOOL)shouldInvalidateDecorationForModifiedSprites;
-(CGSize)sizeForItem:(long long)arg1 ;
-(void)accessoryItemsDidChange;
-(long long)itemForObjectReference:(id)arg1 options:(unsigned long long)arg2 ;
-(void)beginApplyingItemChanges;
-(long long)_numberOfItems;
-(id)axVisibleSpriteIndexes;
-(void)enumerateVisibleAnchoringLayoutsUsingBlock:(/*^block*/id)arg1 ;
-(long long)itemForSpriteIndex:(unsigned)arg1 ;
-(BOOL)delegateRespondsTo:(unsigned long long)arg1 ;
-(void)_handleSelectionChangeWithUserInfo:(id)arg1 ;
-(void)setAccessoryItemContentSource:(id<PXGLayoutContentSource>)arg1 ;
-(void)setDelegate:(id<PXGItemsLayoutDelegate>)arg1 ;
-(void)updateAccessoryItemsIfNeeded;
-(void)_updateFocusedItemIfNeeded;
-(void)update;
-(void)setLoadedItems:(NSRange)arg1 ;
-(id)description;
-(BOOL)isApplyingItemChanges;
-(void)setNumberOfItems:(long long)arg1 withChangeDetails:(id)arg2 ;
-(void)_updateHoveredItemIfNeeded;
-(long long)itemForObjectReference:(id)arg1 ;
-(BOOL)spriteIndexIsItem:(unsigned)arg1 ;
-(void)set_numberOfItems:(long long)arg1 ;
-(void)setLazy:(BOOL)arg1 ;
-(id)dropTargetObjectReference;
-(id)itemsLayout;
-(void)setNumberOfItems:(long long)arg1 withChangeDetails:(id)arg2 changeMediaVersionHandler:(/*^block*/id)arg3 ;
-(void)setNumberOfItems:(long long)arg1 ;
-(long long)numberOfAccessoryItems;
-(id)axSpriteIndexes;
-(void)dealloc;
@end
