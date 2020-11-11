/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray;

@interface GEOLPRWorld : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _powerTypes;
	NSMutableArray* _regions;
	NSMutableArray* _vehicleTypes;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_powerTypes : 1;
		unsigned read_regions : 1;
		unsigned read_vehicleTypes : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * regions; 
@property (nonatomic,retain) NSMutableArray * powerTypes; 
@property (nonatomic,retain) NSMutableArray * vehicleTypes; 
+(Class)regionsType;
+(Class)powerTypesType;
+(Class)vehicleTypesType;
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(void)clearRegions;
-(void)setPowerTypes:(NSMutableArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableArray *)powerTypes;
-(NSMutableArray *)vehicleTypes;
-(unsigned long long)regionsCount;
-(id)regionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)powerTypesCount;
-(id)dictionaryRepresentation;
-(void)clearPowerTypes;
-(unsigned long long)vehicleTypesCount;
-(void)clearVehicleTypes;
-(void)setVehicleTypes:(NSMutableArray *)arg1 ;
-(void)addPowerTypes:(id)arg1 ;
-(void)addVehicleTypes:(id)arg1 ;
-(id)powerTypesAtIndex:(unsigned long long)arg1 ;
-(id)vehicleTypesAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)addRegions:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setRegions:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(NSMutableArray *)regions;
@end
