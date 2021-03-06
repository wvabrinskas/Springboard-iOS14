/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEORPFeedbackLayoutFieldName;

@interface GEORPLayoutField : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _displayText;
	GEORPFeedbackLayoutFieldName* _name;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _ordinal;
	int _type;
	BOOL _enabled;
	struct {
		unsigned has_ordinal : 1;
		unsigned has_type : 1;
		unsigned has_enabled : 1;
		unsigned read_displayText : 1;
		unsigned read_name : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) GEORPFeedbackLayoutFieldName * name; 
@property (nonatomic,readonly) BOOL hasDisplayText; 
@property (nonatomic,retain) NSString * displayText; 
@property (assign,nonatomic) BOOL hasEnabled; 
@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL hasOrdinal; 
@property (assign,nonatomic) unsigned ordinal; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)enabled;
-(id)typeAsString:(int)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)ordinal;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasName;
-(id)dictionaryRepresentation;
-(void)setType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(GEORPFeedbackLayoutFieldName *)name;
-(void)setHasType:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasType;
-(int)type;
-(BOOL)hasEnabled;
-(void)setHasEnabled:(BOOL)arg1 ;
-(BOOL)hasDisplayText;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setOrdinal:(unsigned)arg1 ;
-(void)setHasOrdinal:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)displayText;
-(void)setDisplayText:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasOrdinal;
-(void)readAll:(BOOL)arg1 ;
-(void)setName:(GEORPFeedbackLayoutFieldName *)arg1 ;
@end

