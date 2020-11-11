/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NPKProtoStandalonePaymentHeroImage : PBCodable <NSCopying> {

	NSString* _identifier;
	NSData* _imageData;
	NSString* _imageHash;
	NSString* _imageURL;

}

@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasImageHash; 
@property (nonatomic,retain) NSString * imageHash;               //@synthesize imageHash=_imageHash - In the implementation block
@property (nonatomic,readonly) BOOL hasImageData; 
@property (nonatomic,retain) NSData * imageData;                 //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,readonly) BOOL hasImageURL; 
@property (nonatomic,retain) NSString * imageURL;                //@synthesize imageURL=_imageURL - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(NSString *)imageURL;
-(void)setImageURL:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(NSString *)identifier;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)imageHash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setImageHash:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSData *)imageData;
-(void)writeTo:(id)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasImageURL;
-(BOOL)hasImageData;
-(BOOL)hasImageHash;
@end
