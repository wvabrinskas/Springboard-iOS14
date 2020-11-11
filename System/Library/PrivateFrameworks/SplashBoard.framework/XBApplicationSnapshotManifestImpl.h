/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SplashBoard/SplashBoard-Structs.h>
#import <SplashBoard/XBApplicationSnapshotManifest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class XBSnapshotContainerIdentity, XBSnapshotManifestIdentity, NSMutableDictionary, NSFileManager, BSTimer, BSAtomicSignal, NSMutableArray, NSString;

@interface XBApplicationSnapshotManifestImpl : XBApplicationSnapshotManifest <NSSecureCoding, BSDescriptionProviding> {

	XBSnapshotContainerIdentity* _containerIdentity;
	XBSnapshotManifestIdentity* _identity;
	NSMutableDictionary* _snapshotGroupsByID;
	NSFileManager* _imageAccessFileManger;
	BSTimer* _reapingTimer;
	BSAtomicSignal* _invalidatedSignal;
	unsigned long long _clientCount;
	unsigned long long _pendingOperations;
	NSMutableArray* _archiveSchedulingQueue_synchronizeCompletions;
	BOOL _archiveSchedulingQueue_dirty;
	BOOL _archiveSchedulingQueue_scheduled;
	BOOL _logContainerIdentifierDirty;
	os_unfair_lock_s _accessLock;
	NSString* _baseLogIdentifier;
	NSString* _logIdentifier;

}

@property (nonatomic,copy,readonly) XBSnapshotContainerIdentity * containerIdentity;              //@synthesize containerIdentity=_containerIdentity - In the implementation block
@property (nonatomic,copy,readonly) XBSnapshotManifestIdentity * identity;                        //@synthesize identity=_identity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_snapshotPredicateForRequest:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(long long)_outputFormatForSnapshot:(id)arg1 ;
+(id)acquireManifestForContainerIdentity:(id)arg1 store:(id)arg2 creatingIfNecessary:(BOOL)arg3 ;
+(void)_workloop_noteManifestInvalidated:(id)arg1 ;
+(BOOL)isUnderMemoryPressure;
+(void)relinquishManifest:(id)arg1 ;
+(void)_configureSnapshot:(id)arg1 withCompatibilityInfo:(id)arg2 forLaunchRequest:(id)arg3 ;
-(void)_scheduleArchivingIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_access_validateWithContainerIdentity:(id)arg1 ;
-(id)succinctDescription;
-(id)_access_snapshotsForGroupIDs:(id)arg1 matchingPredicate:(id)arg2 ;
-(id)_generatableSnapshotForGroupID:(id)arg1 generationContext:(id)arg2 ;
-(id)defaultGroupIdentifier;
-(XBSnapshotManifestIdentity *)identity;
-(id)snapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2 ;
-(void)_access_accessSnapshotsWithBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 options:(unsigned long long)arg3 imageGeneratedHandler:(/*^block*/id)arg4 imageDataSavedHandler:(/*^block*/id)arg5 ;
-(id)init;
-(void)deleteSnapshotsUsingPredicateBuilder:(/*^block*/id)arg1 ;
-(BOOL)_imageAccessQueue_saveData:(id)arg1 forSnapshot:(id)arg2 ;
-(id)_initWithContainerIdentity:(id)arg1 ;
-(void)_workloop_checkClientCount;
-(void)deleteSnapshot:(id)arg1 ;
-(void)_reapExpiredAndInvalidSnapshots;
-(void)_addSnapshotToGroup:(id)arg1 ;
-(id)_access_snapshotsForGroupIDs:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)_validateWithContainerIdentity:(id)arg1 ;
-(id)createSnapshotWithGroupID:(id)arg1 ;
-(void)_access_purgeSnapshotsWithProtectedContent;
-(void)encodeWithCoder:(id)arg1 ;
-(id)bundleIdentifier;
-(XBSnapshotContainerIdentity *)containerIdentity;
-(void)_workloop_reallyCheckClientCount;
-(void)_workloop_decrementClientCount;
-(void)_access_doArchiveWithCompletions:(id)arg1 ;
-(void)deleteSnapshotsMatchingPredicate:(id)arg1 ;
-(id)createVariantForSnapshot:(id)arg1 withIdentifier:(id)arg2 ;
-(void)purgeSnapshotsWithProtectedContent;
-(void)deleteSnapshotsForGroupID:(id)arg1 ;
-(id)_allSnapshotGroups;
-(void)_synchronizeDataStoreWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)description;
-(id)snapshotsForGroupID:(id)arg1 ;
-(void)_access_deleteSnapshots:(id)arg1 ;
-(id)snapshotsForGroupIDs:(id)arg1 fetchRequest:(id)arg2 ;
-(id)_descriptionForStateCaptureWithMultilinePrefix:(id)arg1 ;
-(void)deleteSnapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2 ;
-(void)deleteAllSnapshots;
-(void)_access_addSnapshotToGroup:(id)arg1 ;
-(void)_setContainerIdentity:(id)arg1 ;
-(void)saveSnapshot:(id)arg1 atPath:(id)arg2 withContext:(id)arg3 ;
-(void)_access_workloop_reapExpiredAndInvalidSnapshots;
-(id)snapshotsForGroupID:(id)arg1 fetchRequest:(id)arg2 ;
-(id)snapshotsForGroupIDs:(id)arg1 matchingPredicate:(id)arg2 ;
-(BOOL)_invalidate;
-(void)_handleMemoryPressure;
-(id)initWithCoder:(id)arg1 ;
-(id)snapshotsForGroupIDs:(id)arg1 ;
-(void)_access_deletePaths:(id)arg1 ;
-(id)_access_snapshotGroupForID:(id)arg1 creatingIfNeeded:(BOOL)arg2 ;
-(void)deleteSnapshotsForGroupID:(id)arg1 predicateBuilder:(/*^block*/id)arg2 ;
-(void)_commonInit;
-(id)_createSnapshotWithGroupID:(id)arg1 generationContext:(id)arg2 ;
-(void)_access_gatherPaths:(id)arg1 forSnapshot:(id)arg2 ;
-(id)_access_snapshotsMatchingPredicate:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)_workloop_incrementClientCount;
-(id)succinctDescriptionBuilder;
-(void)beginSnapshotAccessTransaction:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_snapshotGroupsByID;
-(id)_access_allSnapshotGroups;
-(id)containerPath;
-(void)deleteSnapshots:(id)arg1 ;
-(void)_noteDirtied;
-(void)dealloc;
@end
