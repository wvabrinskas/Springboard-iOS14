/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLAssetContainerListChangeObserver.h>
#import <libobjc.A.dylib/PLAlbumContainer.h>

@class NSMutableOrderedSet, NSString;

@interface PLAggregateAlbumList : NSObject <PLAssetContainerListChangeObserver, PLAlbumContainer> {

	NSMutableOrderedSet* _allAlbums;
	NSMutableOrderedSet* _childAlbumLists;
	int _filter;

}

@property (assign,nonatomic) int filter;                                          //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) unsigned long long albumsCount; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,copy,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) unsigned long long unreadAlbumsCount; 
@property (nonatomic,retain,readonly) NSString * _prettyDescription; 
@property (nonatomic,retain,readonly) NSString * _typeDescription; 
@property (nonatomic,readonly) unsigned long long containersCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)albumListWithFilter:(int)arg1 inPhotoLibrary:(id)arg2 ;
-(NSString *)_typeDescription;
-(unsigned long long)containersCount;
-(id)managedObjectContext;
-(id)initWithFilter:(int)arg1 inPhotoLibrary:(id)arg2 ;
-(void)_invalidateAllAlbums;
-(id)containersRelationshipName;
-(void)setFilter:(int)arg1 ;
-(id)containers;
-(int)filter;
-(BOOL)needsReordering;
-(short)albumListType;
-(NSString *)_prettyDescription;
-(BOOL)canEditAlbums;
-(BOOL)canEditContainers;
-(BOOL)isFolder;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2 ;
-(unsigned long long)unreadAlbumsCount;
-(id)photoLibrary;
-(id)identifier;
-(BOOL)isEmpty;
-(void)updateAlbumsOrderIfNeeded;
-(BOOL)hasAtLeastOneAlbum;
-(id)albumsSortingComparator;
-(id)albums;
-(BOOL)albumHasFixedOrder:(id)arg1 ;
-(unsigned long long)albumsCount;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3 ;
-(void)setNeedsReordering;
-(void)assetContainerListDidChange:(id)arg1 ;
-(void)dealloc;
@end
