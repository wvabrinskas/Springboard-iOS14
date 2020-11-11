/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort : PBCodable <NSCopying> {

	double _clicks;
	double _impressions;
	long long _timestamp;
	int _type;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasClicks; 
@property (assign,nonatomic) double clicks;                    //@synthesize clicks=_clicks - In the implementation block
@property (assign,nonatomic) BOOL hasImpressions; 
@property (assign,nonatomic) double impressions;               //@synthesize impressions=_impressions - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(double)clicks;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasTimestamp;
-(id)dictionaryRepresentation;
-(void)setType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setClicks:(double)arg1 ;
-(void)setHasImpressions:(BOOL)arg1 ;
-(BOOL)hasClicks;
-(void)setHasType:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasImpressions;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasClicks:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasType;
-(double)impressions;
-(int)type;
-(void)writeTo:(id)arg1 ;
-(long long)timestamp;
-(void)setTimestamp:(long long)arg1 ;
-(void)setImpressions:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
