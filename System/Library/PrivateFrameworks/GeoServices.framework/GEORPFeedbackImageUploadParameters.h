/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEORPFeedbackImageUploadParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _images;
	BOOL _isEnrichment;
	struct {
		unsigned has_isEnrichment : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * images; 
@property (assign,nonatomic) BOOL hasIsEnrichment; 
@property (assign,nonatomic) BOOL isEnrichment; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)imageType;
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearImages;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(NSMutableArray *)images;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)setImages:(NSMutableArray *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)addImage:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)imagesCount;
-(void)setIsEnrichment:(BOOL)arg1 ;
-(id)imageAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEnrichment;
-(void)setHasIsEnrichment:(BOOL)arg1 ;
-(BOOL)hasIsEnrichment;
@end
