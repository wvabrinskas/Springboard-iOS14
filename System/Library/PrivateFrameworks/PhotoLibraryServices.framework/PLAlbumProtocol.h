/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSMutableOrderedSet, PLPhotoLibrary, NSNumber, NSString, NSObject, NSURL;


@protocol PLAlbumProtocol <PLAssetContainer>
@property (nonatomic,retain,readonly) NSMutableOrderedSet * mutableAssets; 
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,retain,readonly) NSNumber * kind; 
@property (nonatomic,readonly) int kindValue; 
@property (assign,nonatomic) BOOL hasUnseenContentBoolValue; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSObject * posterImage; 
@property (nonatomic,readonly) BOOL isLibrary; 
@property (nonatomic,readonly) BOOL isCameraAlbum; 
@property (nonatomic,readonly) BOOL isPanoramasAlbum; 
@property (nonatomic,readonly) BOOL isPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isPendingPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isStandInAlbum; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,readonly) BOOL isInTrash; 
@property (nonatomic,readonly) BOOL isOwnedCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isFamilyCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isMultipleContributorCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isRecentlyAddedAlbum; 
@property (nonatomic,readonly) BOOL isUserLibraryAlbum; 
@property (nonatomic,readonly) BOOL isProjectAlbum; 
@property (nonatomic,readonly) BOOL canContributeToCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL shouldDeleteWhenEmpty; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,retain,readonly) NSURL * groupURL; 
@property (nonatomic,copy,readonly) id sortingComparator; 
@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@property (assign,nonatomic) unsigned long long batchSize; 
@optional
-(id)filteredIndexesForPredicate:(id)arg1;
-(unsigned long long)batchSize;
-(NSMutableOrderedSet *)mutableAssets;
-(NSString *)name;
-(void)setUINotificationsEnabled:(BOOL)arg1;
-(void)setBatchSize:(unsigned long long)arg1;

@required
-(BOOL)isCloudSharedAlbum;
-(NSNumber *)kind;
-(void)setImportSessionID:(id)arg1;
-(BOOL)isFolder;
-(PLPhotoLibrary *)photoLibrary;
-(BOOL)canContributeToCloudSharedAlbum;
-(BOOL)isLibrary;
-(BOOL)shouldDeleteWhenEmpty;
-(NSObject *)posterImage;
-(NSURL *)groupURL;
-(BOOL)isPendingPhotoStreamAlbum;
-(int)pendingItemsCount;
-(int)pendingItemsType;
-(void)setHasUnseenContentBoolValue:(BOOL)arg1;
-(int)kindValue;
-(id)sortingComparator;
-(void)reducePendingItemsCountBy:(unsigned long long)arg1;
-(void)batchFetchAssets:(id)arg1;
-(BOOL)isCameraAlbum;
-(BOOL)isPanoramasAlbum;
-(BOOL)isPhotoStreamAlbum;
-(BOOL)isStandInAlbum;
-(BOOL)isRecentlyAddedAlbum;
-(BOOL)isUserLibraryAlbum;
-(BOOL)isProjectAlbum;
-(void)setPendingItemsCount:(int)arg1;
-(void)setPendingItemsType:(int)arg1;
-(NSString *)importSessionID;
-(BOOL)isOwnedCloudSharedAlbum;
-(BOOL)hasUnseenContentBoolValue;
-(BOOL)isFamilyCloudSharedAlbum;
-(BOOL)isMultipleContributorCloudSharedAlbum;
-(BOOL)isInTrash;

@end

