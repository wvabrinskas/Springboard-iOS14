/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BrookServices.framework/BrookServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BrookServices/BrookServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BRKIDSMessage : PBCodable <NSCopying> {

	double _latitude;
	double _longitude;
	double _radius;
	NSString* _identifier;
	SCD_Struct_BR1 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude;                    //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude;                   //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL hasRadius; 
@property (assign,nonatomic) double radius;                      //@synthesize radius=_radius - In the implementation block
-(void)setRadius:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLatitude;
-(double)latitude;
-(double)radius;
-(BOOL)hasIdentifier;
-(unsigned long long)hash;
-(void)setHasLongitude:(BOOL)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setHasLatitude:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)identifier;
-(BOOL)readFrom:(id)arg1 ;
-(double)longitude;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasLongitude;
-(void)copyTo:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)hasRadius;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasRadius:(BOOL)arg1 ;
@end

