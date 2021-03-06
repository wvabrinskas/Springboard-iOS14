/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaPlaylist.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, MPMediaQuery;

@interface MPConcreteMediaPlaylist : MPMediaPlaylist <NSCopying> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _properties;
	MPMediaQuery* _itemsQuery;
	void* _clusterPlaylist;

}
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(void)appendItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithProperties:(id)arg1 itemsQuery:(id)arg2 ;
-(void)_updateLibraryForPlaylistEdit:(id)arg1 ;
-(void)replaceItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)replaceItemsWithPersistentIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)appendItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)endGeneratingGeniusClusterItems;
-(void)removeItems:(id)arg1 atFilteredIndexes:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)populateWithSeedItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)populateWithSeedItem:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)beginGeneratingGeniusClusterItemsWithSeedItems:(id)arg1 error:(id*)arg2 ;
-(id)geniusClusterItemsWithCount:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(void)removeAllItems;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)mediaTypes;
-(id)valueForProperty:(id)arg1 ;
-(id)mediaLibrary;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)items;
-(BOOL)existsInLibrary;
-(void)addMediaItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeFirstItem;
-(id)multiverseIdentifier;
-(void)_enumerateItemPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(id)valuesForProperties:(id)arg1 ;
-(id)representativeItem;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)itemsQuery;
-(BOOL)_allowsEditing;
-(void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)addItemWithProductID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

