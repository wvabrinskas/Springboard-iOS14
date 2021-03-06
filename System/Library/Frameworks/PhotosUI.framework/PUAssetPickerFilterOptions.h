/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PUPickerFilter;
@class NSPredicate, NSIndexSet;

@interface PUAssetPickerFilterOptions : NSObject {

	id<PUPickerFilter> _selectionFilter;
	unsigned long long _genericAssetTypes;
	NSPredicate* _selectionFilterAssetFetchPredicate;
	NSIndexSet* _includedItems;

}

@property (nonatomic,readonly) NSPredicate * selectionFilterAssetFetchPredicate;              //@synthesize selectionFilterAssetFetchPredicate=_selectionFilterAssetFetchPredicate - In the implementation block
@property (nonatomic,readonly) NSIndexSet * includedItems;                                    //@synthesize includedItems=_includedItems - In the implementation block
@property (nonatomic,readonly) id<PUPickerFilter> selectionFilter;                            //@synthesize selectionFilter=_selectionFilter - In the implementation block
@property (nonatomic,readonly) unsigned long long genericAssetTypes;                          //@synthesize genericAssetTypes=_genericAssetTypes - In the implementation block
-(id)init;
-(id)initWithIncludedItems:(id)arg1 ;
-(id)initWithSelectionFilter:(id)arg1 ;
-(id)predicateForAssetFetch;
-(BOOL)isIncluded:(unsigned long long)arg1 ;
-(id)predicateForAlbumFetch;
-(id<PUPickerFilter>)selectionFilter;
-(unsigned long long)genericAssetTypes;
-(NSPredicate *)selectionFilterAssetFetchPredicate;
-(NSIndexSet *)includedItems;
-(id)initWithMediaTypes:(id)arg1 ;
@end

