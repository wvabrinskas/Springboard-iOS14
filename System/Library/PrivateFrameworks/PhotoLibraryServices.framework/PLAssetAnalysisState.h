/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLManagedObject.h>

@class PLManagedAsset, NSString, NSDate;

@interface PLAssetAnalysisState : PLManagedObject

@property (nonatomic,retain) PLManagedAsset * asset; 
@property (assign,nonatomic) short workerType; 
@property (assign,nonatomic) int analysisState; 
@property (nonatomic,retain) NSString * assetUUID; 
@property (nonatomic,retain) NSDate * lastIgnoredDate; 
@property (nonatomic,retain) NSDate * ignoreUntilDate; 
@property (assign,nonatomic) int workerFlags; 
@property (assign,nonatomic) double sortToken; 
+(id)entityName;
+(id)_managedObjectContextForStateChangesWithPersistentStoreCoordinator:(id)arg1 ;
+(BOOL)_bulkUpdateAnalysisStatesTo:(int)arg1 predicate:(id)arg2 library:(id)arg3 error:(id*)arg4 ;
+(id)_subArrayOfChanges:(id)arg1 toRetryWithConflicts:(id)arg2 ;
+(BOOL)clearIgnoreUntilDatesInLibraryAtURL:(id)arg1 error:(id*)arg2 ;
+(void)removeAnalysisRecordsWithNoAssetOrUUIDUseMaintenanceMode:(BOOL)arg1 library:(id)arg2 ;
+(BOOL)markStatesProcessedForWorkerType:(short)arg1 library:(id)arg2 error:(id*)arg3 ;
+(id)keyPathDictionaryWithWorkerType:(short)arg1 workerFlags:(int)arg2 analysisState:(int)arg3 lastIgnoredDate:(id)arg4 ignoreUntilDate:(id)arg5 ;
+(BOOL)markAssetsForFaceProcessingByMediaAnalysisAndSaveInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(BOOL)isUnitTestWorker:(short)arg1 ;
+(void)_removeAnalysisRecordsWithPredicate:(id)arg1 library:(id)arg2 ;
+(void)removeAnalysisRecordsForDeletedAssetUUIDs:(id)arg1 forWorkerType:(short)arg2 library:(id)arg3 ;
+(id)_countOfAnalysisStatesByWorkerTypeWithPredicate:(id)arg1 analysisState:(int)arg2 forDeletedAssets:(BOOL)arg3 inContext:(id)arg4 error:(id*)arg5 ;
+(int)defaultWorkerFlagsForWorkerType:(short)arg1 ;
+(id)_sanitizeChanges:(id)arg1 ;
+(id)_managedObjectContextForStateChangesWithLibraryURL:(id)arg1 ;
+(id)workerTypesPersistingAnalysisState;
+(BOOL)cleanupInvalidIgnoreUntilDatesInLibraryAtURL:(id)arg1 error:(id*)arg2 ;
+(id)analysisCountsForWorkerType:(short)arg1 library:(id)arg2 ;
+(void)requestTotalProgressCountsForWorkerType:(short)arg1 states:(id)arg2 library:(id)arg3 completion:(/*^block*/id)arg4 ;
+(unsigned long long)_countOfAssetsAllowedForProcessingInLibrary:(id)arg1 error:(id*)arg2 ;
+(void)requestAnalysisCountsInLibrary:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)requestCountOfAnalysisRecordsForDeletedAssetsInLibrary:(id)arg1 completion:(/*^block*/id)arg2 ;
+(BOOL)resetPendingStatesInLibraryAtURL:(id)arg1 error:(id*)arg2 ;
+(id)assetUUIDsFromAssetObjectIDs:(id)arg1 library:(id)arg2 whereAllWorkerTypes:(id)arg3 matchState:(id)arg4 ;
+(id)deletedAssetUUIDsForAnalysisByWorkerType:(short)arg1 fetchLimit:(unsigned long long)arg2 inLibrary:(id)arg3 error:(id*)arg4 ;
+(id)_batchOperationQueue;
+(id)workInfoForAnalysisWithWorkerType:(short)arg1 additionalStatesToExclude:(id)arg2 fetchLimit:(unsigned long long)arg3 inLibrary:(id)arg4 error:(id*)arg5 ;
+(BOOL)resetFaceCropAnalysisStateInLibraryAtURL:(id)arg1 error:(id*)arg2 ;
-(void)unionWorkerFlags:(int)arg1 ;
-(id)mutableKeyPathDictionary;
-(id)debugLogDescription;
@end

