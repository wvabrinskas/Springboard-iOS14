/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTouristInfo : PBCodable <NSCopying> {

	double _fetchTimestamp;
	BOOL _isTourist;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasIsTourist; 
@property (assign,nonatomic) BOOL isTourist; 
@property (assign,nonatomic) BOOL hasFetchTimestamp; 
@property (assign,nonatomic) double fetchTimestamp; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isTourist;
-(BOOL)hasIsTourist;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setIsTourist:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasFetchTimestamp:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFetchTimestamp:(double)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)fetchTimestamp;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasFetchTimestamp;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasIsTourist:(BOOL)arg1 ;
@end

