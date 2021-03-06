/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPRequestedFields;

@interface CKDPAssetsToDownload : PBCodable <NSCopying> {

	CKDPRequestedFields* _assetFields;
	BOOL _allAssets;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasAllAssets; 
@property (assign,nonatomic) BOOL allAssets;                                 //@synthesize allAssets=_allAssets - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetFields; 
@property (nonatomic,retain) CKDPRequestedFields * assetFields;              //@synthesize assetFields=_assetFields - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(BOOL)allAssets;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAssetFields:(CKDPRequestedFields *)arg1 ;
-(CKDPRequestedFields *)assetFields;
-(void)setAllAssets:(BOOL)arg1 ;
-(BOOL)hasAssetFields;
-(void)setHasAllAssets:(BOOL)arg1 ;
-(BOOL)hasAllAssets;
@end

