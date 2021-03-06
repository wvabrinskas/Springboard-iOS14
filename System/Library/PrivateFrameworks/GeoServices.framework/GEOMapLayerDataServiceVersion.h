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

@interface GEOMapLayerDataServiceVersion : PBCodable <NSCopying> {

	unsigned _dataVersion;
	unsigned _formatVersion;
	unsigned _patchVersion;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasDataVersion; 
@property (assign,nonatomic) unsigned dataVersion; 
@property (assign,nonatomic) BOOL hasFormatVersion; 
@property (assign,nonatomic) unsigned formatVersion; 
@property (assign,nonatomic) BOOL hasPatchVersion; 
@property (assign,nonatomic) unsigned patchVersion; 
+(BOOL)isValid:(id)arg1 ;
-(unsigned)dataVersion;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)patchVersion;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasDataVersion;
-(void)setDataVersion:(unsigned)arg1 ;
-(void)setFormatVersion:(unsigned)arg1 ;
-(void)setPatchVersion:(unsigned)arg1 ;
-(void)setHasDataVersion:(BOOL)arg1 ;
-(unsigned)formatVersion;
-(void)setHasFormatVersion:(BOOL)arg1 ;
-(BOOL)hasFormatVersion;
-(void)setHasPatchVersion:(BOOL)arg1 ;
-(BOOL)hasPatchVersion;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end

