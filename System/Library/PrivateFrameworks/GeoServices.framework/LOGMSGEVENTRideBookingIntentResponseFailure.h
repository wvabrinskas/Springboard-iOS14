/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface LOGMSGEVENTRideBookingIntentResponseFailure : PBCodable <NSCopying> {

	int _failure;
	int _intent;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasIntent; 
@property (assign,nonatomic) int intent; 
@property (assign,nonatomic) BOOL hasFailure; 
@property (assign,nonatomic) int failure; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(int)intent;
-(id)initWithDictionary:(id)arg1 ;
-(int)failure;
-(id)dictionaryRepresentation;
-(BOOL)hasIntent;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasFailure;
-(void)setHasIntent:(BOOL)arg1 ;
-(id)intentAsString:(int)arg1 ;
-(int)StringAsIntent:(id)arg1 ;
-(void)setHasFailure:(BOOL)arg1 ;
-(id)failureAsString:(int)arg1 ;
-(int)StringAsFailure:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFailure:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setIntent:(int)arg1 ;
@end

