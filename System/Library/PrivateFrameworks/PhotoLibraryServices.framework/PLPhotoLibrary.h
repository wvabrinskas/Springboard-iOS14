/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableArray, PLGenericAlbum, NSSet, PLPhotoLibraryBundle, PLSimpleDCIMDirectory, PLManagedObjectContext, NSPersistentStore, PAImageConversionServiceClient, PAVideoConversionServiceClient, PLPhotoLibraryPathManager, PLLibraryServicesManager, NSString, PLPhotoLibraryOptions, PLKeywordManager, NSArray, PLThumbnailManager, PLThumbnailIndexes, PLGlobalValues;

@interface PLPhotoLibrary : NSObject {

	unsigned long long _pendingTransactions;
	NSMutableArray* _transactionCompletionHandlers;
	PLGenericAlbum* _allImportedPhotosAlbum;
	PLGenericAlbum* _lastImportedPhotosAlbum;
	NSSet* _imageFileExtensions;
	NSSet* _rawImageFileExtensions;
	NSSet* _audioFileExtensions;
	NSSet* _extraVideoExtensions;
	PLPhotoLibraryBundle* _libraryBundle;
	PLSimpleDCIMDirectory* _simpleDCIMDirectory;
	os_unfair_lock_s _managedObjectContextLock;
	PLManagedObjectContext* _managedObjectContext;
	NSPersistentStore* _loadedPersistentStore;
	PAImageConversionServiceClient* _imageConversionServiceClient;
	PAVideoConversionServiceClient* _videoConversionServiceClient;
	PLPhotoLibraryPathManager* _pathManager;
	PLLibraryServicesManager* _libraryServicesManager;
	NSString* _name;
	PLPhotoLibraryOptions* _options;

}

@property (readonly) PLPhotoLibraryBundle * libraryBundle;                                                   //@synthesize libraryBundle=_libraryBundle - In the implementation block
@property (readonly) PLKeywordManager * keywordManager; 
@property (nonatomic,retain,readonly) NSArray * syncedAlbums; 
@property (nonatomic,retain,readonly) NSObject*<PLAlbumProtocol> syncProgressAlbum; 
@property (nonatomic,retain,readonly) NSObject*<PLAlbumProtocol> otaRestoreProgressAlbum; 
@property (nonatomic,retain,readonly) NSObject*<PLAlbumProtocol> filesystemImportProgressAlbum; 
@property (nonatomic,readonly) PLPhotoLibraryOptions * options;                                              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) PLManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) PLPhotoLibraryPathManager * pathManager;                                      //@synthesize pathManager=_pathManager - In the implementation block
@property (nonatomic,__weak,readonly) PLLibraryServicesManager * libraryServicesManager;                     //@synthesize libraryServicesManager=_libraryServicesManager - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                         //@synthesize name=_name - In the implementation block
@property (getter=isCloudPhotoLibraryEnabled,readonly) BOOL cloudPhotoLibraryEnabled; 
@property (nonatomic,readonly) PAImageConversionServiceClient * imageConversionServiceClient; 
@property (nonatomic,readonly) PAVideoConversionServiceClient * videoConversionServiceClient; 
@property (nonatomic,readonly) PLThumbnailManager * thumbnailManager; 
@property (nonatomic,readonly) PLThumbnailIndexes * thumbnailIndexes; 
@property (nonatomic,copy,readonly) NSArray * photoStreamAlbums; 
@property (nonatomic,copy,readonly) NSArray * photoStreamAlbumsForPreferences; 
@property (nonatomic,readonly) PLGlobalValues * globalValues; 
+(void)setPhotoStreamEnabled:(BOOL)arg1 ;
+(id)masterURLFromSidecarURLs:(id)arg1 ;
+(BOOL)systemPhotoLibraryIsObtainable;
+(id)fileReservationForFileAtPath:(id)arg1 exclusive:(BOOL)arg2 ;
+(void)initialize;
+(void)setCloudAlbumSharingEnabled:(BOOL)arg1 ;
+(id)savedPhotosReferenceMediaSizeWithSizeDataRef:(id)arg1 ;
+(id)systemPhotoLibrary;
+(id)cplPhotoLibrary;
+(id)sharedPhotoLibrary;
+(void)_loadFileExtensionInformation;
+(id)_internalSystemPhotoLibrary;
+(void)_contextSaveFailedWithError:(id)arg1 ;
+(id)cmmPhotoLibrary;
+(id)cloudSharingPhotoLibrary;
+(id)diagnosticsPhotoLibrary;
+(BOOL)isVideoFileExtension:(id)arg1 ;
+(id)newPhotoLibraryWithName:(const char*)arg1 loadedFromBundle:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(BOOL)isNonRawImageFileExtension:(id)arg1 ;
+(void)postGlobalPhotoLibraryAvailableIfNecessary;
+(void)_contextSaveFailedDueToChangingSPL:(id)arg1 ;
+(BOOL)isImageFileExtension:(id)arg1 ;
+(id)newPhotoLibraryWithName:(const char*)arg1 loadedFromURL:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(void)_assetsLibrary_disableSharedPhotoStreamsSupport;
+(void)refreshCachedCountsOnAllAssetContainersInContext:(id)arg1 ;
+(id)myPhotoStreamPhotoLibrary;
+(id)systemMainQueuePhotoLibrary;
+(id)photoOutboundSharingTmpDirectoryURL;
+(BOOL)_assetsLibrary_isSharedPhotoStreamsSupportEnabled;
+(BOOL)isAdjustmentEnvelopeExtension:(id)arg1 ;
+(BOOL)removeFaceMetadataAtURL:(id)arg1 includingPeople:(BOOL)arg2 ;
+(BOOL)isRawImageFileExtension:(id)arg1 ;
+(BOOL)canSaveVideoToLibrary:(id)arg1 ;
+(void)_contextSaveFailedWithNoPersistentStores:(id)arg1 ;
+(void)refreshCachedCountsAndDates:(BOOL)arg1 onAssetsContainerClass:(Class)arg2 inContext:(id)arg3 withPredicate:(id)arg4 ;
+(void)_contextSaveFailedDueToClientRequestedShutdown:(id)arg1 ;
+(void)_contextSaveFailedWithTimeoutError:(id)arg1 ;
+(unsigned long long)CloudPhotoLibrarySize;
+(BOOL)areOpportunisticTasksDisabled;
+(id)_resourcesInfoFromMoc:(id)arg1 ;
+(BOOL)isAudioFileExtension:(id)arg1 ;
+(void)_getResourceData:(id)arg1 nonDerivativeSizeOut:(unsigned long long*)arg2 derivativesSizeOut:(unsigned long long*)arg3 fileBackedThumbnailsSizeOut:(unsigned long long*)arg4 tableThumbnailsSizeOut:(unsigned long long*)arg5 ;
+(int)priorityForFileExtension:(id)arg1 ;
+(id)savedPhotosOriginalsSizeWithSizeDataRef:(id)arg1 ;
+(id)opportunisticTaskIsolationQueue;
+(id)cameraPhotoLibrary;
+(void)_contextSaveFailedWithSQLiteError:(id)arg1 ;
+(BOOL)shouldTryFastPathWithLibraryBundle:(id)arg1 ;
+(id)librarySummarySizeDataRefWithManagedObjectContext:(id)arg1 ;
+(void)_context:(id)arg1 saveFailedWithError:(id)arg2 ;
+(id)unitTestPhotoLibrary;
+(BOOL)photoLibraryIsObtainable;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(id)personInfoManager;
-(void)performTransaction:(/*^block*/id)arg1 ;
-(PLLibraryServicesManager *)libraryServicesManager;
-(void)createPhotoStreamAlbumWithStreamID:(id)arg1 ;
-(PLPhotoLibraryPathManager *)pathManager;
-(id)assetsdClient;
-(id)constraintsDirector;
-(PLKeywordManager *)keywordManager;
-(BOOL)deleteAllDiagnosticFiles:(id*)arg1 ;
-(PLManagedObjectContext *)managedObjectContext;
-(PAImageConversionServiceClient *)imageConversionServiceClient;
-(id)addDCIMEntryAtFileURL:(id)arg1 mainFileMetadata:(id)arg2 toEvent:(id)arg3 sidecarFileInfo:(id)arg4 progress:(id)arg5 importSessionIdentifier:(id)arg6 isImported:(BOOL)arg7 previewImage:(id)arg8 thumbnailImage:(id)arg9 savedAssetType:(short)arg10 replacementUUID:(id)arg11 publicGlobalUUID:(id)arg12 extendedInfo:(id)arg13 withUUID:(id)arg14 ignoreEmbeddedMetadata:(BOOL)arg15 isPlaceholder:(BOOL)arg16 placeholderFileURL:(id)arg17 ;
-(void)_userApplyTrashedState:(short)arg1 toAlbums:(id)arg2 ;
-(void)_updateAssetCountKeyPath:(id)arg1 withPendingCountKeyPath:(id)arg2 inContext:(id)arg3 ;
-(id)_loadClientDatabaseContextFastPathAndReturnAbortAfterOpen:(BOOL*)arg1 ;
-(PLThumbnailIndexes *)thumbnailIndexes;
-(id)init;
-(id)eventAlbumContainingPhoto:(id)arg1 ;
-(BOOL)hasPendingAssetsIgnoreiTunes:(BOOL)arg1 ;
-(NSObject*<PLAlbumProtocol>)otaRestoreProgressAlbum;
-(void)performTransactionAndWaitWithName:(id)arg1 transaction:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)simpleDCIMDirectory;
-(id)_loadDatabaseContextWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)withDispatchGroup:(id)arg1 performBlock:(/*^block*/id)arg2 ;
-(NSObject*<PLAlbumProtocol>)syncProgressAlbum;
-(BOOL)isReadyForCloudPhotoLibrary;
-(unsigned long long)countOfLocalAlbumsContainingAssets:(id)arg1 assetsInSomeAlbumCount:(long long*)arg2 ;
-(PLGlobalValues *)globalValues;
-(id)initWithName:(const char*)arg1 libraryBundle:(id)arg2 options:(id)arg3 ;
-(id)syncProgressAlbumsIgnoreiTunes:(BOOL)arg1 ;
-(id)_fetchedObjectsForDeleteWithEntity:(id)arg1 predicate:(id)arg2 batchSize:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)invalidateWithReason:(id)arg1 ;
-(BOOL)getPhotoCount:(unsigned long long*)arg1 videoCount:(unsigned long long*)arg2 excludeTrashed:(BOOL)arg3 excludeInvisible:(BOOL)arg4 excludeCloudShared:(BOOL)arg5 ;
-(void)userTrashAssets:(id)arg1 ;
-(id)_loadClientDatabaseContextWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)isAlbumSynced:(id)arg1 ;
-(PLPhotoLibraryOptions *)options;
-(void)userUntrashAssets:(id)arg1 ;
-(void)_enumerateFilesAtURL:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)dataMigratorSupportCleanupModelForDataMigrationPurgeMissingSharedAndSynced;
-(id)iTunesSyncedContentInfo;
-(void)_enumerateFilesAtURLs:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_deleteEmptyImportAlbumsWithAddedAlbums:(id)arg1 ;
-(void)clientApplicationWillEnterForeground;
-(void)performBlockAndWait:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)withDispatchGroup:(id)arg1 performTransaction:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)old_refreshCachedCountsOnAllAssetContainersInContext:(id)arg1 ;
-(void)performBlockAndWait:(/*^block*/id)arg1 forceSave:(BOOL)arg2 ;
-(id)librarySizes;
-(id)estimatedLibrarySizes;
-(void)recreateMemoriesAndPersonsFromMetadata;
-(void)deleteExpiredTrashedAssetsAndAlbums;
-(id)photoAnalysisClient;
-(NSArray *)photoStreamAlbumsForPreferences;
-(void)handlePersistentStoreRemoval:(id)arg1 ;
-(BOOL)hasITunesSyncedContent;
-(PLThumbnailManager *)thumbnailManager;
-(NSString *)name;
-(void)_userDeleteAssets:(id)arg1 withReason:(id)arg2 ;
-(void)enableOpportunisticTasks;
-(void)_updateMemoryCountKeyPath:(id)arg1 withPendingCountKeyPath:(id)arg2 inContext:(id)arg3 ;
-(void)deleteUnusedCameraMetadataPaths;
-(id)description;
-(void)performTransaction:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 withPriority:(long long)arg3 ;
-(BOOL)isCloudPhotoLibraryEnabled;
-(id)librarySizesFromDB;
-(void)batchDeleteAssets:(id)arg1 withReason:(id)arg2 ;
-(id)albumListForAlbumOfKind:(int)arg1 ;
-(void)_deleteObsoleteMetadataFiles;
-(void)repairSingletonObjects;
-(id)photoFromAssetURL:(id)arg1 ;
-(id)eventWithName:(id)arg1 andImportSessionIdentifier:(id)arg2 ;
-(id)managedObjectContextStoreUUID;
-(void)_withDispatchGroup:(id)arg1 synchronously:(BOOL)arg2 name:(id)arg3 shouldSave:(BOOL)arg4 performTransaction:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)resetCachedImportAlbumsIfNeededForAlbum:(id)arg1 ;
-(PLPhotoLibraryBundle *)libraryBundle;
-(void)_processPhotoIrisSidecarIfNecessary:(id)arg1 forAsset:(id)arg2 mainFileMetadata:(id)arg3 ;
-(void)modifyDCIMEntryForPhoto:(id)arg1 ;
-(void)_recreateItemsFromMetadataAtDirectoryURLs:(id)arg1 includeAlbums:(BOOL)arg2 ;
-(void)countOfReferencedMediaWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)imageForFormat:(unsigned short)arg1 forAsset:(id)arg2 ;
-(BOOL)loadDatabaseWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)deleteExpiredTrashedResources;
-(PAVideoConversionServiceClient *)videoConversionServiceClient;
-(id)photoOutboundSharingTmpDirectoryURL;
-(void)addCompletionHandlerToCurrentTransaction:(/*^block*/id)arg1 ;
-(BOOL)safeSave:(id)arg1 error:(id*)arg2 ;
-(void)recreatePersonsFromMetadata;
-(BOOL)hasCompletedRestorePostProcessing;
-(void)updateAlbumKeyAssetsInContext:(id)arg1 withPredicate:(id)arg2 ;
-(void)_filterAssets:(id)arg1 toTrashableAssets:(id*)arg2 deletableAssets:(id*)arg3 otherAssets:(id*)arg4 ;
-(BOOL)batchDeleteObjectsWithEntity:(id)arg1 predicate:(id)arg2 error:(id*)arg3 ;
-(id)allImportedPhotosAlbumCreateIfNeeded:(BOOL)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 withPriority:(long long)arg2 ;
-(void)performTransaction:(/*^block*/id)arg1 withPriority:(long long)arg2 ;
-(void)updateAssetPlayShareViewCountsInContext:(id)arg1 ;
-(id)_fetchCompleteAssetIDsWithSavedAssetType:(short)arg1 context:(id)arg2 ;
-(id)_initWithPathManager:(id)arg1 ;
-(void)recreateAlbumsAndPersonsFromMetadata;
-(id)allImportedPhotosAlbum;
-(id)incompleteRestoreProcesses;
-(id)libraryID;
-(void)performTransactionAndWait:(/*^block*/id)arg1 ;
-(void)_photoLibraryCorruptNotification;
-(void)userTrashAlbums:(id)arg1 ;
-(id)lastImportedPhotosAlbumCreateIfNeeded:(BOOL)arg1 ;
-(NSArray *)photoStreamAlbums;
-(void)_safeSave:(id)arg1 ;
-(void)_photoLibraryForceClientExitNotification;
-(id)assetURLForPhoto:(id)arg1 ;
-(id)queueStatusDescription;
-(void)userUntrashAlbums:(id)arg1 ;
-(BOOL)unloadDatabase:(id*)arg1 ;
-(id)albumListForContentMode:(int)arg1 ;
-(id)newImageForPhoto:(id)arg1 format:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 outImageProperties:(const _CFDictionary*)arg4 outDeliveredPlaceholder:(BOOL*)arg5 ;
-(id)assetURLForPhoto:(id)arg1 extension:(id)arg2 ;
-(id)assetWithUUID:(id)arg1 inContainer:(id)arg2 ;
-(BOOL)_hasIncompleteAsset;
-(BOOL)hasCompletedMomentAnalysis;
-(void)deleteITunesSyncedContentForEnablingiCPL;
-(id)duplicatePhotoStreamPhotosForPhotos:(id)arg1 ;
-(void)cleanupAfterImportAllDCIMAssets;
-(BOOL)getPhotoCount:(unsigned long long*)arg1 videoCount:(unsigned long long*)arg2 ;
-(void)disableOpportunisticTasks;
-(unsigned long long)sharedStreamsSize;
-(void)deleteUnknownDeferredIntermediates;
-(void)performTransaction:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateMemoryPlayShareViewCountsInContext:(id)arg1 ;
-(id)lastImportedPhotosAlbum;
-(void)_filterAlbums:(id)arg1 toTrashableAlbums:(id*)arg2 deletableAlbums:(id*)arg3 otherAlbums:(id*)arg4 ;
-(void)performTransactionAndWait:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)withDispatchGroup:(id)arg1 performTransaction:(/*^block*/id)arg2 ;
-(void)_setManagedObjectContext:(id)arg1 ;
-(id)assetWithUUID:(id)arg1 ;
-(id)objectWithObjectID:(id)arg1 ;
-(void)_removeOldFaceMetadataAsync;
-(id)albumWithUuid:(id)arg1 ;
-(NSArray *)syncedAlbums;
-(BOOL)batchDeleteAssetsWithPredicate:(id)arg1 reason:(id)arg2 error:(id*)arg3 ;
-(id)syncedAlbumSubtitleStringFormat;
-(void)_applySideCarFiles:(id)arg1 toAsset:(id)arg2 withMainFileURL:(id)arg3 mainFileMetadata:(id)arg4 ;
-(void)userExpungeAssets:(id)arg1 ;
-(unsigned long long)_dbFileSizes;
-(void)cleanupIncompleteAssetsAfterOTARestore;
-(id)_loadServerDatabaseContextWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 withPriority:(long long)arg3 ;
-(void)userExpungeAlbums:(id)arg1 ;
-(unsigned long long)numberOfUnpushedAssetsOfKind:(short)arg1 ;
-(void)performTransactionWithName:(id)arg1 transaction:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newImageForPhoto:(id)arg1 format:(unsigned short)arg2 ;
-(id)albumFromGroupURL:(id)arg1 ;
-(BOOL)_checkMomentAnalysisCompletion;
-(unsigned long long)_fileSizeAtPath:(id)arg1 ;
-(void)_applyAdjustmentFileInfo:(id)arg1 renderedContentFileInfo:(id)arg2 renderedVideoComplementFileInfo:(id)arg3 toAsset:(id)arg4 withMainFileURL:(id)arg5 mainFileMetadata:(id)arg6 ;
-(unsigned long long)numberOfCPLSupportedAssetsOfKind:(short)arg1 includingTrashedSinceDate:(id)arg2 ;
-(void)_userApplyTrashedState:(short)arg1 toAssets:(id)arg2 ;
-(void)dealloc;
-(NSObject*<PLAlbumProtocol>)filesystemImportProgressAlbum;
-(void)performBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handlePossibleCoreDataError:(id)arg1 ;
-(void)_inq_createPhotoStreamAlbumStreamID:(id)arg1 ;
-(void)_userDeleteAlbums:(id)arg1 ;
@end

