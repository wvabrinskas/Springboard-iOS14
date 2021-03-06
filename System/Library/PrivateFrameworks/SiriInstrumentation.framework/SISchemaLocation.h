/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaLocation : PBCodable {

	float _latitude;
	float _longitude;
	float _horizontalAccuracyInMeters;
	SCD_Struct_LT0 _has;

}

@property (assign,nonatomic) float latitude;                                  //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) float longitude;                                 //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) float horizontalAccuracyInMeters;                //@synthesize horizontalAccuracyInMeters=_horizontalAccuracyInMeters - In the implementation block
@property (assign,nonatomic) BOOL hasHorizontalAccuracyInMeters; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)hasLatitude;
-(NSData *)jsonData;
-(float)latitude;
-(unsigned long long)hash;
-(void)setHasLongitude:(BOOL)arg1 ;
-(void)setLatitude:(float)arg1 ;
-(void)setLongitude:(float)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasLatitude:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(float)longitude;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasLongitude;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setHorizontalAccuracyInMeters:(float)arg1 ;
-(float)horizontalAccuracyInMeters;
-(BOOL)hasHorizontalAccuracyInMeters;
-(void)setHasHorizontalAccuracyInMeters:(BOOL)arg1 ;
@end

