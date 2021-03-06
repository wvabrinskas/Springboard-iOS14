/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, GEOURLOptions;

@interface GEOURLPresent : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _items;
	GEOURLOptions* _options;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,retain) NSMutableArray * items; 
@property (nonatomic,readonly) BOOL hasOptions; 
@property (nonatomic,retain) GEOURLOptions * options; 
+(Class)itemType;
+(BOOL)isValid:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(void)setOptions:(GEOURLOptions *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)itemsCount;
-(unsigned long long)hash;
-(void)setItems:(NSMutableArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOURLOptions *)options;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSMutableArray *)items;
-(id)initWithDirectionsOptions:(id)arg1 ;
-(BOOL)hasOptions;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clearItems;
-(void)readAll:(BOOL)arg1 ;
@end

