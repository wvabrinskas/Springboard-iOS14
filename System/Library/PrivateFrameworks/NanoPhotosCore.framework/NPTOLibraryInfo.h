/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPhotosCore.framework/NanoPhotosCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NPTONotificationCenter, NPTOPreferencesAccessor, NSDictionary;

@interface NPTOLibraryInfo : NSObject {

	NSURL* _libraryURL;
	NPTONotificationCenter* _notificationCenter;
	NPTOPreferencesAccessor* _legacyPreferencesAccessor;

}

@property (assign,getter=isSyncing,nonatomic) BOOL syncing; 
@property (nonatomic,retain) NSDictionary * collectionTargetMap; 
-(id)initWithDevice:(id)arg1 ;
-(BOOL)isSyncing;
-(void)setSyncing:(BOOL)arg1 ;
-(id)_syncingFileURL;
-(void)_createLibraryDirectoryIfNeeded;
-(id)_collectionTargetMapFileURL;
-(NSDictionary *)collectionTargetMap;
-(id)syncingChangeObserverWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)setCollectionTargetMap:(NSDictionary *)arg1 ;
-(id)collectionTargetMapChangeObserverWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
@end
