/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CPLSuggestionAssetFlag : PBCodable <NSCopying> {

	BOOL _isKeyAsset;
	BOOL _isRepresentative;
	SCD_Struct_CP1 _has;

}

@property (assign,nonatomic) BOOL hasIsRepresentative; 
@property (assign,nonatomic) BOOL isRepresentative;                 //@synthesize isRepresentative=_isRepresentative - In the implementation block
@property (assign,nonatomic) BOOL hasIsKeyAsset; 
@property (assign,nonatomic) BOOL isKeyAsset;                       //@synthesize isKeyAsset=_isKeyAsset - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isKeyAsset;
-(void)setIsRepresentative:(BOOL)arg1 ;
-(void)setIsKeyAsset:(BOOL)arg1 ;
-(BOOL)isRepresentative;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasIsRepresentative:(BOOL)arg1 ;
-(BOOL)hasIsRepresentative;
-(void)setHasIsKeyAsset:(BOOL)arg1 ;
-(BOOL)hasIsKeyAsset;
@end
