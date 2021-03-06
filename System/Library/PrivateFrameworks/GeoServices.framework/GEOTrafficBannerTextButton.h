/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOFormattedString;

@interface GEOTrafficBannerTextButton : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOFormattedString* _text;
	int _action;
	struct {
		unsigned has_action : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasText; 
@property (nonatomic,retain) GEOFormattedString * text; 
@property (assign,nonatomic) BOOL hasAction; 
@property (assign,nonatomic) int action; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasText;
-(void)setText:(GEOFormattedString *)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(BOOL)hasAction;
-(id)initWithDictionary:(id)arg1 ;
-(GEOFormattedString *)text;
-(id)dictionaryRepresentation;
-(void)setHasAction:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAction:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)actionAsString:(int)arg1 ;
-(int)StringAsAction:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)action;
@end

