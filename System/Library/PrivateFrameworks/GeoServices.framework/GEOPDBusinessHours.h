/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDHoursThreshold, GEOLocalizedString, NSMutableArray;

@interface GEOPDBusinessHours : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	unsigned long long _end;
	GEOPDHoursThreshold* _hoursThreshold;
	GEOLocalizedString* _message;
	GEOLocalizedString* _shortMessage;
	unsigned long long _start;
	NSMutableArray* _weeklyHours;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _hoursType;
	struct {
		unsigned has_end : 1;
		unsigned has_start : 1;
		unsigned has_hoursType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_hoursThreshold : 1;
		unsigned read_message : 1;
		unsigned read_shortMessage : 1;
		unsigned read_weeklyHours : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * weeklyHours; 
@property (assign,nonatomic) BOOL hasStart; 
@property (assign,nonatomic) unsigned long long start; 
@property (assign,nonatomic) BOOL hasEnd; 
@property (assign,nonatomic) unsigned long long end; 
@property (nonatomic,readonly) BOOL hasMessage; 
@property (nonatomic,retain) GEOLocalizedString * message; 
@property (nonatomic,readonly) BOOL hasShortMessage; 
@property (nonatomic,retain) GEOLocalizedString * shortMessage; 
@property (assign,nonatomic) BOOL hasHoursType; 
@property (assign,nonatomic) int hoursType; 
@property (nonatomic,readonly) BOOL hasHoursThreshold; 
@property (nonatomic,retain) GEOPDHoursThreshold * hoursThreshold; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)businessHoursForPlaceData:(id)arg1 ;
+(BOOL)isValid:(id)arg1 ;
+(Class)weeklyHoursType;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)end;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)start;
-(void)setMessage:(GEOLocalizedString *)arg1 ;
-(id)init;
-(BOOL)hasEnd;
-(id)jsonRepresentation;
-(void)setHoursThreshold:(GEOPDHoursThreshold *)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(void)setStart:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(GEOLocalizedString *)message;
-(BOOL)hasStart;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEnd:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(int)hoursType;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasMessage;
-(GEOLocalizedString *)shortMessage;
-(GEOPDHoursThreshold *)hoursThreshold;
-(void)addWeeklyHours:(id)arg1 ;
-(void)setShortMessage:(GEOLocalizedString *)arg1 ;
-(unsigned long long)weeklyHoursCount;
-(void)clearWeeklyHours;
-(id)weeklyHoursAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasShortMessage;
-(BOOL)hasHoursThreshold;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasEnd:(BOOL)arg1 ;
-(NSMutableArray *)weeklyHours;
-(void)setWeeklyHours:(NSMutableArray *)arg1 ;
-(void)setHoursType:(int)arg1 ;
-(void)setHasStart:(BOOL)arg1 ;
-(void)setHasHoursType:(BOOL)arg1 ;
-(BOOL)hasHoursType;
-(id)hoursTypeAsString:(int)arg1 ;
-(int)StringAsHoursType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
