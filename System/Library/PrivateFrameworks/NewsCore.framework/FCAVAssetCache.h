/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCCacheCoordinatorDelegate.h>
#import <libobjc.A.dylib/FCAVAssetCacheType.h>
#import <libobjc.A.dylib/FCCacheFlushing.h>

@class NSString, NFUnfairLock, FCKeyValueStore, FCCacheCoordinator;

@interface FCAVAssetCache : NSObject <FCCacheCoordinatorDelegate, FCAVAssetCacheType, FCCacheFlushing> {

	NSString* _cacheDirectory;
	NFUnfairLock* _initializationLock;
	FCKeyValueStore* _metadataStore;
	FCCacheCoordinator* _cacheCoordinator;

}

@property (nonatomic,copy,readonly) NSString * cacheDirectory;                     //@synthesize cacheDirectory=_cacheDirectory - In the implementation block
@property (nonatomic,readonly) NFUnfairLock * initializationLock;                  //@synthesize initializationLock=_initializationLock - In the implementation block
@property (nonatomic,readonly) FCKeyValueStore * metadataStore;                    //@synthesize metadataStore=_metadataStore - In the implementation block
@property (nonatomic,readonly) FCCacheCoordinator * cacheCoordinator;              //@synthesize cacheCoordinator=_cacheCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FCCacheCoordinator *)cacheCoordinator;
-(id)contentKeyIdentifiersForAssetIdentifier:(id)arg1 ;
-(void)_initStores;
-(id)init;
-(NFUnfairLock *)initializationLock;
-(void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2 ;
-(unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1 ;
-(BOOL)containsAssetWithIdentifier:(id)arg1 ;
-(void)_prepareForUse;
-(void)adoptFileAtURL:(id)arg1 forAssetIdentifier:(id)arg2 remoteURL:(id)arg3 contentKeyIdentifiers:(id)arg4 extension:(id)arg5 ;
-(FCKeyValueStore *)metadataStore;
-(id)interestTokenForAssetIdentifier:(id)arg1 ;
-(NSString *)cacheDirectory;
-(void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 ;
-(id)cachedFileURLForAssetIdentifier:(id)arg1 ;
-(id)initWithCacheDirectory:(id)arg1 ;
-(id)contentKeyIdentifiersForAllAssets;
@end

