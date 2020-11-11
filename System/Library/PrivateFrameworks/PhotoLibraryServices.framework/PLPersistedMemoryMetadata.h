/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate, NSSet, NSData, NSDictionary, PLMemory, NSURL;

@interface PLPersistedMemoryMetadata : NSObject {

	BOOL _rejected;
	BOOL _favorite;
	BOOL _pending;
	BOOL _userCreated;
	short _category;
	short _subcategory;
	short _notificationState;
	unsigned short _featuredState;
	NSString* _uuid;
	NSString* _title;
	NSString* _subtitle;
	NSDate* _creationDate;
	NSString* _keyAssetUUID;
	NSSet* _representativeAssetUUIDs;
	NSSet* _curatedAssetUUIDs;
	NSSet* _extendedCuratedAssetUUIDs;
	NSSet* _movieCuratedAssetUUIDs;
	NSData* _movieData;
	NSDictionary* _movieAssetState;
	long long _photosGraphVersion;
	NSData* _photosGraphData;
	NSData* _assetListPredicate;
	double _score;
	long long _version;
	NSData* _blacklistedFeature;
	long long _playCount;
	long long _shareCount;
	long long _viewCount;
	long long _pendingPlayCount;
	long long _pendingShareCount;
	long long _pendingViewCount;
	PLMemory* _memory;
	NSURL* _metadataURL;

}

@property (nonatomic,retain) PLMemory * memory;                                  //@synthesize memory=_memory - In the implementation block
@property (nonatomic,retain) NSURL * metadataURL;                                //@synthesize metadataURL=_metadataURL - In the implementation block
@property (nonatomic,retain) NSString * uuid;                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                              //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,getter=isRejected,nonatomic) BOOL rejected;                    //@synthesize rejected=_rejected - In the implementation block
@property (assign,getter=isFavorite,nonatomic) BOOL favorite;                    //@synthesize favorite=_favorite - In the implementation block
@property (assign,getter=isPending,nonatomic) BOOL pending;                      //@synthesize pending=_pending - In the implementation block
@property (assign,getter=isUserCreated,nonatomic) BOOL userCreated;              //@synthesize userCreated=_userCreated - In the implementation block
@property (assign,nonatomic) short category;                                     //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) short subcategory;                                  //@synthesize subcategory=_subcategory - In the implementation block
@property (nonatomic,retain) NSString * keyAssetUUID;                            //@synthesize keyAssetUUID=_keyAssetUUID - In the implementation block
@property (nonatomic,retain) NSSet * representativeAssetUUIDs;                   //@synthesize representativeAssetUUIDs=_representativeAssetUUIDs - In the implementation block
@property (nonatomic,retain) NSSet * curatedAssetUUIDs;                          //@synthesize curatedAssetUUIDs=_curatedAssetUUIDs - In the implementation block
@property (nonatomic,retain) NSSet * extendedCuratedAssetUUIDs;                  //@synthesize extendedCuratedAssetUUIDs=_extendedCuratedAssetUUIDs - In the implementation block
@property (nonatomic,retain) NSSet * movieCuratedAssetUUIDs;                     //@synthesize movieCuratedAssetUUIDs=_movieCuratedAssetUUIDs - In the implementation block
@property (nonatomic,retain) NSData * movieData;                                 //@synthesize movieData=_movieData - In the implementation block
@property (nonatomic,retain) NSDictionary * movieAssetState;                     //@synthesize movieAssetState=_movieAssetState - In the implementation block
@property (assign,nonatomic) long long photosGraphVersion;                       //@synthesize photosGraphVersion=_photosGraphVersion - In the implementation block
@property (nonatomic,retain) NSData * photosGraphData;                           //@synthesize photosGraphData=_photosGraphData - In the implementation block
@property (nonatomic,retain) NSData * assetListPredicate;                        //@synthesize assetListPredicate=_assetListPredicate - In the implementation block
@property (assign,nonatomic) double score;                                       //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) short notificationState;                            //@synthesize notificationState=_notificationState - In the implementation block
@property (assign,nonatomic) long long version;                                  //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSData * blacklistedFeature;                        //@synthesize blacklistedFeature=_blacklistedFeature - In the implementation block
@property (assign,nonatomic) long long playCount;                                //@synthesize playCount=_playCount - In the implementation block
@property (assign,nonatomic) long long shareCount;                               //@synthesize shareCount=_shareCount - In the implementation block
@property (assign,nonatomic) long long viewCount;                                //@synthesize viewCount=_viewCount - In the implementation block
@property (assign,nonatomic) long long pendingPlayCount;                         //@synthesize pendingPlayCount=_pendingPlayCount - In the implementation block
@property (assign,nonatomic) long long pendingShareCount;                        //@synthesize pendingShareCount=_pendingShareCount - In the implementation block
@property (assign,nonatomic) long long pendingViewCount;                         //@synthesize pendingViewCount=_pendingViewCount - In the implementation block
@property (assign,nonatomic) unsigned short featuredState;                       //@synthesize featuredState=_featuredState - In the implementation block
+(BOOL)isValidPath:(id)arg1 ;
-(void)setFavorite:(BOOL)arg1 ;
-(long long)playCount;
-(PLMemory *)memory;
-(void)setPlayCount:(long long)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(void)setScore:(double)arg1 ;
-(short)category;
-(BOOL)isRejected;
-(id)init;
-(void)setPendingPlayCount:(long long)arg1 ;
-(unsigned short)featuredState;
-(short)notificationState;
-(long long)photosGraphVersion;
-(NSData *)assetListPredicate;
-(NSData *)blacklistedFeature;
-(void)setRejected:(BOOL)arg1 ;
-(void)setSubcategory:(short)arg1 ;
-(void)setMovieData:(NSData *)arg1 ;
-(NSData *)photosGraphData;
-(void)setPhotosGraphData:(NSData *)arg1 ;
-(void)setPhotosGraphVersion:(long long)arg1 ;
-(void)setNotificationState:(short)arg1 ;
-(void)setFeaturedState:(unsigned short)arg1 ;
-(void)setCategory:(short)arg1 ;
-(void)setUserCreated:(BOOL)arg1 ;
-(void)setBlacklistedFeature:(NSData *)arg1 ;
-(NSDictionary *)movieAssetState;
-(long long)version;
-(NSString *)subtitle;
-(void)setMemory:(PLMemory *)arg1 ;
-(long long)pendingPlayCount;
-(long long)viewCount;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setPendingShareCount:(long long)arg1 ;
-(double)score;
-(NSString *)keyAssetUUID;
-(void)setKeyAssetUUID:(NSString *)arg1 ;
-(id)initWithPLMemory:(id)arg1 metadataURL:(id)arg2 ;
-(id)initWithPLMemory:(id)arg1 pathManager:(id)arg2 ;
-(void)writePersistedData;
-(id)_metadataData;
-(void)_saveMetadata;
-(NSSet *)representativeAssetUUIDs;
-(BOOL)_updateAssetsInMemory:(id)arg1 relationshipName:(id)arg2 persistedAssetUUIDs:(id)arg3 includePendingChanges:(BOOL)arg4 ;
-(void)setRepresentativeAssetUUIDs:(NSSet *)arg1 ;
-(NSSet *)curatedAssetUUIDs;
-(void)setCuratedAssetUUIDs:(NSSet *)arg1 ;
-(NSSet *)extendedCuratedAssetUUIDs;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setExtendedCuratedAssetUUIDs:(NSSet *)arg1 ;
-(NSSet *)movieCuratedAssetUUIDs;
-(void)setMovieCuratedAssetUUIDs:(NSSet *)arg1 ;
-(void)setMovieAssetState:(NSDictionary *)arg1 ;
-(void)setAssetListPredicate:(NSData *)arg1 ;
-(NSURL *)metadataURL;
-(BOOL)isUserCreated;
-(void)setShareCount:(long long)arg1 ;
-(id)description;
-(long long)shareCount;
-(BOOL)isPending;
-(void)removePersistedData;
-(BOOL)updateAssetsInMemory:(id)arg1 includePendingAssetChanges:(BOOL)arg2 ;
-(id)insertMemoryFromDataInManagedObjectContext:(id)arg1 ;
-(BOOL)hasAllAssetsAvailableInManagedObjectContext:(id)arg1 includePendingAssetChanges:(BOOL)arg2 ;
-(id)initWithPersistedDataAtURL:(id)arg1 ;
-(NSString *)uuid;
-(NSString *)title;
-(void)setPendingViewCount:(long long)arg1 ;
-(BOOL)isFavorite;
-(void)setMetadataURL:(NSURL *)arg1 ;
-(void)setPending:(BOOL)arg1 ;
-(void)setViewCount:(long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isObsolete;
-(long long)pendingViewCount;
-(NSDate *)creationDate;
-(long long)pendingShareCount;
-(BOOL)_readMetadata;
-(short)subcategory;
-(NSData *)movieData;
@end
