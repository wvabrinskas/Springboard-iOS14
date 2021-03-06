/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MPCProtoItemIdentifierSet : PBCodable <NSCopying> {

	long long _cloudID;
	long long _delegateInfoID;
	long long _purchaseHistoryID;
	long long _storeAdamID;
	long long _storeSubscriptionAdamID;
	NSString* _cloudUniversalLibraryID;
	NSString* _contentItemID;
	SCD_Struct_MP24 _has;

}

@property (assign,nonatomic) BOOL hasDelegateInfoID; 
@property (assign,nonatomic) long long delegateInfoID;                        //@synthesize delegateInfoID=_delegateInfoID - In the implementation block
@property (nonatomic,readonly) BOOL hasContentItemID; 
@property (nonatomic,retain) NSString * contentItemID;                        //@synthesize contentItemID=_contentItemID - In the implementation block
@property (assign,nonatomic) BOOL hasStoreAdamID; 
@property (assign,nonatomic) long long storeAdamID;                           //@synthesize storeAdamID=_storeAdamID - In the implementation block
@property (assign,nonatomic) BOOL hasStoreSubscriptionAdamID; 
@property (assign,nonatomic) long long storeSubscriptionAdamID;               //@synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID - In the implementation block
@property (assign,nonatomic) BOOL hasCloudID; 
@property (assign,nonatomic) long long cloudID;                               //@synthesize cloudID=_cloudID - In the implementation block
@property (assign,nonatomic) BOOL hasPurchaseHistoryID; 
@property (assign,nonatomic) long long purchaseHistoryID;                     //@synthesize purchaseHistoryID=_purchaseHistoryID - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudUniversalLibraryID; 
@property (nonatomic,retain) NSString * cloudUniversalLibraryID;              //@synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(NSString *)cloudUniversalLibraryID;
-(void)setCloudID:(long long)arg1 ;
-(void)setStoreAdamID:(long long)arg1 ;
-(unsigned long long)hash;
-(void)setContentItemID:(NSString *)arg1 ;
-(NSString *)contentItemID;
-(id)dictionaryRepresentation;
-(long long)storeSubscriptionAdamID;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPurchaseHistoryID:(long long)arg1 ;
-(long long)purchaseHistoryID;
-(long long)cloudID;
-(BOOL)hasContentItemID;
-(void)setCloudUniversalLibraryID:(NSString *)arg1 ;
-(long long)storeAdamID;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStoreSubscriptionAdamID:(long long)arg1 ;
-(void)setDelegateInfoID:(long long)arg1 ;
-(void)setHasDelegateInfoID:(BOOL)arg1 ;
-(BOOL)hasDelegateInfoID;
-(void)setHasStoreAdamID:(BOOL)arg1 ;
-(BOOL)hasStoreAdamID;
-(void)setHasCloudID:(BOOL)arg1 ;
-(BOOL)hasCloudID;
-(BOOL)hasCloudUniversalLibraryID;
-(long long)delegateInfoID;
-(void)setHasStoreSubscriptionAdamID:(BOOL)arg1 ;
-(BOOL)hasStoreSubscriptionAdamID;
-(void)setHasPurchaseHistoryID:(BOOL)arg1 ;
-(BOOL)hasPurchaseHistoryID;
@end

