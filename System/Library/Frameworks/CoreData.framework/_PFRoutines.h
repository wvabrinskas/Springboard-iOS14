/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreData/CoreData-Structs.h>
@interface _PFRoutines : NSObject
+(id)newMutableSetFromCollection:(id)arg1 byIntersectingWithCollection:(id)arg2 ;
+(id)_createNicksBase64EncodedStringFromData:(id)arg1 ;
+(id)applicationActivateLifecyleNotifications;
+(id)stringValueForOverride:(id)arg1 ;
+(void)_logFileAccessDebugInformation:(const char*)arg1 ;
+(void)initialize;
+(CFDictionaryRef)createDictionaryPartitioningObjectsByEntity:(id)arg1 ;
+(id)_getUUID;
+(BOOL)_isInMemoryStore:(id)arg1 ;
+(id)newMutableArrayFromCollection:(id)arg1 forParentContext:(id)arg2 ;
+(BOOL)_generateObjectIDMaptableForArray:(id)arg1 withMapping:(id*)arg2 andEntries:(id*)arg3 ;
+(void)cleanupExternalReferenceLink:(const char*)arg1 ;
+(id)newCollection:(Class)arg1 fromCollection:(id)arg2 byAddingItems:(id)arg3 ;
+(CFDictionaryRef)createDictionaryPartitioningObjectsByRootEntity:(id)arg1 ;
+(void)generateSHA512:(char*)arg1 forStrings:(id)arg2 ;
+(id)valueForProcessArgument:(id)arg1 ;
+(id)_getPFBundleVersionNumber;
+(id)newMutableSetFromCollection:(id)arg1 byRemovingItems:(id)arg2 ;
+(id)_rootEntityGroupsForObjects:(id)arg1 passingBlock:(/*^block*/id)arg2 ;
+(id)newOrderedSetFromCollection:(id)arg1 byAddingItems:(id)arg2 ;
+(id)_newObjectIDsArrayWithMapping:(id)arg1 andEntries:(id)arg2 andCoordinator:(id)arg3 ;
+(id)newSetFromCollection:(id)arg1 byAddingItems:(id)arg2 ;
+(id)newArrayOfObjectIDsFromCollection:(id)arg1 ;
+(id)_frameworkHash;
+(id)newOrderedSetOfObjectIDsFromCollection:(id)arg1 ;
+(BOOL)_expressionIsCompoundIndexCompatible:(id)arg1 ;
+(BOOL)createExternalReferenceLinkFromPath:(id)arg1 toPath:(id)arg2 protectionLevel:(int)arg3 error:(id*)arg4 ;
+(id)plistClassesForSecureCoding;
+(long long)lengthOfFileAtExternalReferenceLocation:(const char*)arg1 ;
+(id)newMutableSetFromCollection:(id)arg1 forParentContext:(id)arg2 ;
+(BOOL)isSanitizedVersionOf:(id)arg1 equalTo:(id)arg2 ;
+(id)newOrderedSetFromCollection:(id)arg1 byInsertingItems:(id)arg2 atIndex:(unsigned long long)arg3 ;
+(id)retainedEncodeObjectValue:(id)arg1 forTransformableAttribute:(id)arg2 ;
+(void)deleteFileForPFExternalReferenceData:(id)arg1 ;
+(void)attemptToUpdatePermissionsForFileAtPath:(const char*)arg1 toLevel:(int)arg2 ;
+(BOOL)boolValueForOverride:(id)arg1 ;
+(id)anyObjectFromCollection:(id)arg1 ;
+(id)newMappedDataForExternalReference:(id)arg1 ;
+(id)sanitize:(id)arg1 ;
+(void)efficientlyEnumerateManagedObjectsInFetchRequest:(id)arg1 usingManagedObjectContext:(id)arg2 andApplyBlock:(/*^block*/id)arg3 ;
+(id)retainedDecodeValue:(id)arg1 forTransformableAttribute:(id)arg2 ;
+(id)_replaceBaseline:(id)arg1 inOrderedSet:(id)arg2 withOrderedSet:(id)arg3 ;
+(id)newMutableArrayFromCollection:(id)arg1 byRemovingItems:(id)arg2 ;
+(id)newOrderedSetFromCollection:(id)arg1 byRemovingItems:(id)arg2 ;
+(id)attributeClassesForSecureCoding;
+(id)_remoteChangeNotificationNameForStore:(id)arg1 ;
+(id)fetchHeterogeneousCollectionByObjectIDs:(id)arg1 intoContext:(id)arg2 ;
+(BOOL)convertCString:(const char*)arg1 toUnsignedInt64:(unsigned long long*)arg2 withBase:(int)arg3 ;
+(BOOL)isUbiquitousURLUploaded:(id)arg1 error:(id*)arg2 ;
+(id)writePFExternalReferenceDataToInterimFile:(id)arg1 ;
+(id)newSetOfObjectIDsFromCollection:(id)arg1 ;
+(id)_coalescedPrefetchKeypaths:(id)arg1 ;
+(CFDictionaryRef)_createDictionaryPartitioningObjectIDs:(id)arg1 intoHierarchies:(BOOL)arg2 ;
+(id)newMutableOrderedSetFromCollection:(id)arg1 forParentContext:(id)arg2 ;
+(void)readBytesForExternalReferenceData:(id)arg1 intoBuffer:(void*)arg2 range:(NSRange)arg3 ;
+(void)setOrRemoveValue:(id)arg1 forKey:(id)arg2 inDictionary:(id)arg3 ;
+(void*)readExternalReferenceDataFromFile:(id)arg1 ;
+(id)_newCollectionFromCollection:(id)arg1 forParentContext:(id)arg2 andClass:(Class)arg3 ;
+(id)applicationDeactivateLifecyleNotifications;
+(BOOL)_objectsInOrderedCollection:(id)arg1 formSubstringInOrderedCollection:(id)arg2 ;
+(BOOL)moveInterimFileToPermanentLocation:(id)arg1 ;
+(BOOL)_doNameAndTypeCheck:(id)arg1 ;
+(BOOL)isUbiquitousURLDownloaded:(id)arg1 error:(id*)arg2 ;
+(CFDictionaryRef)_createDictionaryPartitioningObjects:(id)arg1 intoHierarchies:(BOOL)arg2 ;
+(long long)integerValueForOverride:(id)arg1 ;
+(void)getIndexes:(unsigned*)arg1 fromCollection:(id)arg2 forObjectsInCollection:(id)arg3 ;
+(id)newMutableOrderedSetFromCollection:(id)arg1 ;
+(BOOL)_isInMemoryStoreURL:(id)arg1 ;
+(CFDictionaryRef)createDictionaryPartitioningObjectsIDByRootEntity:(id)arg1 ;
+(id)_groupObjectsByRootEntity:(id)arg1 ;
+(void)wrapBlockInGuardedAutoreleasePool:(/*^block*/id)arg1 ;
+(unsigned long long)_generateUbiquityHashForPath:(id)arg1 ;
+(CFDictionaryRef)createDictionaryPartitioningObjectsIDByEntity:(id)arg1 ;
+(id)newOrderedSetFromCollection:(id)arg1 ;
@end

