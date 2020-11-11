/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOMapLayerDataServiceLayer, GEOMapLayerDataServiceVersion;

@interface GEOMapLayerDataServiceVersionedLayer : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOMapLayerDataServiceLayer* _layer;
	GEOMapLayerDataServiceVersion* _version;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasLayer; 
@property (nonatomic,retain) GEOMapLayerDataServiceLayer * layer; 
@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) GEOMapLayerDataServiceVersion * version; 
+(BOOL)isValid:(id)arg1 ;
-(void)setLayer:(GEOMapLayerDataServiceLayer *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setVersion:(GEOMapLayerDataServiceVersion *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(GEOMapLayerDataServiceVersion *)version;
-(id)initWithDictionary:(id)arg1 ;
-(GEOMapLayerDataServiceLayer *)layer;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasLayer;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
