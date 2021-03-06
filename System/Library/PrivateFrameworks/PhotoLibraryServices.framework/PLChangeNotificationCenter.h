/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSNumber, NSObject, NSMutableArray, PLChangeList, PLContentChanges, NSMutableSet, PLManagedObjectContext, NSDictionary, NSNotificationCenter;

@interface PLChangeNotificationCenter : NSObject {

	BOOL _isProcessingRemoteDidSave;
	int _cameraPreviewChangeListenerCount;
	NSNumber* _cameraPreviewChangedToken;
	NSObject*<OS_dispatch_queue> _notificationHandlingQueue;
	NSMutableArray* _snapshots;
	PLChangeList* _changedAlbumLists;
	PLContentChanges* _albumListsContent;
	PLChangeList* _changedAlbums;
	PLContentChanges* _albumsContent;
	PLChangeList* _changedAssets;
	NSMutableSet* _assetsWithCloudCommentChanges;
	PLContentChanges* _momentsContent;
	PLChangeList* _changedMoments;
	PLContentChanges* _momentListsContent;
	PLChangeList* _changedMomentLists;
	PLChangeList* _changedCloudFeedEntries;
	PLManagedObjectContext* _moc;
	NSMutableArray* _enqueuedNotifications;
	NSDictionary* _remoteNotificationData;
	BOOL _isOverloaded;
	NSMutableSet* _overloadedObjects;

}

@property (nonatomic,retain,readonly) NSNotificationCenter * backingCenter; 
@property (nonatomic,readonly) BOOL _shouldForceFetchingAlbumsToReload; 
+(id)defaultCenter;
+(void)getInsertedAssetCount:(unsigned long long*)arg1 deletedAssetCount:(unsigned long long*)arg2 updatedAssets:(id)arg3 fromContextDidChangeNotification:(id)arg4 ;
+(void)forceFetchingAlbumReload;
+(id)allManagedObjectKeysStrategyWithContext:(id)arg1 ;
-(void)removeInvitationRecordsObserver:(id)arg1 ;
-(void)removeAssetContainerChangeObserver:(id)arg1 container:(id)arg2 ;
-(id)_takeSnapshotOfObject:(id)arg1 ;
-(void)removeAssetChangeObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_enqueuePhotoLibraryNotifications;
-(void)_enqueueAlbumChangeNotification:(id)arg1 ;
-(void)enumerateIndexMappingCachesForObject:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)_enqueueAlbumNotifications;
-(void)addCloudCommentsChangeObserver:(id)arg1 asset:(id)arg2 ;
-(id)_snapshotForObject:(id)arg1 ;
-(id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)init;
-(void)addAssetContainerListChangeObserver:(id)arg1 containerList:(id)arg2 ;
-(void)_enqueueNotification:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)addCloudFeedEntriesObserver:(id)arg1 ;
-(void)removeCameraPreviewWellImageChangeObserver:(id)arg1 ;
-(void)removeShouldReloadObserver:(id)arg1 ;
-(void)_enqueueCloudFeedEntriesChangeNotifications;
-(void)addAssetChangeObserver:(id)arg1 ;
-(void)managedObjectContextWasOverloaded:(id)arg1 withNotificationData:(id)arg2 usingObjectIDs:(BOOL)arg3 ;
-(void)_enqueueAssetChangeNotification;
-(void)_enqueueNotification:(id)arg1 object:(id)arg2 userInfoWithObjects:(const id*)arg3 forKeys:(const id*)arg4 count:(unsigned long long)arg5 ;
-(void)_splitContextDidChangeNotification:(id)arg1 ;
-(void)addCameraPreviewWellImageChangeObserver:(id)arg1 ;
-(void)removeCloudFeedEntriesObserver:(id)arg1 ;
-(id)_takeSnapshotFromCommittedValuesOfObject:(id)arg1 ;
-(void)_enqueueAssetContainerChangeNotification:(id)arg1 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)_enqueueInvitationRecordsChangeNotification:(id)arg1 ;
-(BOOL)_isInterestedInUpdatesOfObject:(id)arg1 ;
-(void)addInvitationRecordsObserver:(id)arg1 ;
-(void)processContextDidSaveObjectIDsNotification:(id)arg1 ;
-(void)_enqueueAlbumListNotifications;
-(void)addAssetContainerChangeObserver:(id)arg1 container:(id)arg2 ;
-(id)_toOneRelationshipsOfInterestForObject:(id)arg1 ;
-(id)observeCameraPreviewWellImageChangeOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)_keysOfInterestForObject:(id)arg1 ;
-(void)managedObjectContext:(id)arg1 didProcessRemoteContextSave:(id)arg2 usingObjectIDs:(BOOL)arg3 ;
-(void)_postEnqueuedNotifications;
-(void)_takeSnapshotsFromContext:(id)arg1 forRemoteContextSaveNotification:(id)arg2 usingObjectIDs:(BOOL)arg3 ;
-(NSNotificationCenter *)backingCenter;
-(id)_takeSnapshotOfObject:(id)arg1 useCommitedValues:(BOOL)arg2 ;
-(void)_sendNotificationsForSplitChanges;
-(void)postShouldReloadNotificationWithPhotoLibrary:(id)arg1 ;
-(void)removeAssetContainerListChangeObserver:(id)arg1 containerList:(id)arg2 ;
-(void)_evaluateUpdatedAssets;
-(void)_evaluateContainersWithUpdatedContent;
-(id)descriptionOfSplitChanges;
-(void)_registerForCameraPreviewWellChanges;
-(BOOL)_shouldForceFetchingAlbumsToReload;
-(void)_cleanupState;
-(void)managedObjectContext:(id)arg1 willProcessRemoteContextSave:(id)arg2 usingObjectIDs:(BOOL)arg3 isCoalescedEvent:(BOOL)arg4 ;
-(void)_unregisterForCameraPreviewWellChanges;
-(void)_enqueueAssetContainerListChangeNotification:(id)arg1 ;
-(id)_orderedRelationshipsOfInterestForObject:(id)arg1 ;
-(void)managedObjectContextWillBeOverloaded:(id)arg1 withNotificationData:(id)arg2 usingObjectIDs:(BOOL)arg3 ;
-(void)_enqueueMomentListChangeNotifications;
-(void)addShouldReloadObserver:(id)arg1 ;
-(id)_attributesOfInterestForObject:(id)arg1 ;
-(void)_enqueueCloudCommentsNotifications;
-(void)enqueueNotification:(id)arg1 ;
-(void)removeCloudCommentsChangeObserver:(id)arg1 asset:(id)arg2 ;
-(void)processContextDidChangeNotification:(id)arg1 ;
-(void)_enqueueMomentChangeNotifications;
-(void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3 ;
-(void)dealloc;
@end

