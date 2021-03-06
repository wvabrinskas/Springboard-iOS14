/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface PKProtobufPaymentInstrumentThumbnailResponse : PBCodable <NSCopying> {

	NSString* _manifestHash;
	int _status;
	NSData* _thumbnailImage;
	SCD_Struct_PK13 _has;

}

@property (nonatomic,readonly) BOOL hasThumbnailImage; 
@property (nonatomic,retain) NSData * thumbnailImage;               //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                            //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasManifestHash; 
@property (nonatomic,retain) NSString * manifestHash;               //@synthesize manifestHash=_manifestHash - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasStatus;
-(NSString *)manifestHash;
-(unsigned long long)hash;
-(void)setHasStatus:(BOOL)arg1 ;
-(int)status;
-(id)dictionaryRepresentation;
-(void)setStatus:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setThumbnailImage:(NSData *)arg1 ;
-(NSData *)thumbnailImage;
-(int)StringAsStatus:(id)arg1 ;
-(id)description;
-(BOOL)hasThumbnailImage;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setManifestHash:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasManifestHash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)statusAsString:(int)arg1 ;
@end

