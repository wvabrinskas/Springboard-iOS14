/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOCacheMiss : PBCodable <NSCopying> {

	NSMutableArray* _errors;
	unsigned _bytes;
	unsigned _count;
	unsigned _httpStatus;
	int _missType;
	int _requestorType;
	struct {
		unsigned has_bytes : 1;
		unsigned has_count : 1;
		unsigned has_httpStatus : 1;
		unsigned has_missType : 1;
		unsigned has_requestorType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRequestorType; 
@property (assign,nonatomic) int requestorType; 
@property (assign,nonatomic) BOOL hasMissType; 
@property (assign,nonatomic) int missType; 
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count; 
@property (assign,nonatomic) BOOL hasBytes; 
@property (assign,nonatomic) unsigned bytes; 
@property (nonatomic,retain) NSMutableArray * errors; 
@property (assign,nonatomic) BOOL hasHttpStatus; 
@property (assign,nonatomic) unsigned httpStatus; 
+(Class)errorsType;
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setCount:(unsigned)arg1 ;
-(void)setErrors:(NSMutableArray *)arg1 ;
-(BOOL)hasCount;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(void)clearErrors;
-(void)setMissType:(int)arg1 ;
-(unsigned)bytes;
-(void)setHttpStatus:(unsigned)arg1 ;
-(void)setRequestorType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)count;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasBytes;
-(int)missType;
-(BOOL)isEqual:(id)arg1 ;
-(void)addErrors:(id)arg1 ;
-(unsigned long long)errorsCount;
-(void)copyTo:(id)arg1 ;
-(void)setBytes:(unsigned)arg1 ;
-(BOOL)hasMissType;
-(unsigned)httpStatus;
-(int)requestorType;
-(void)setHasRequestorType:(BOOL)arg1 ;
-(BOOL)hasRequestorType;
-(id)requestorTypeAsString:(int)arg1 ;
-(int)StringAsRequestorType:(id)arg1 ;
-(void)setHasBytes:(BOOL)arg1 ;
-(id)errorsAtIndex:(unsigned long long)arg1 ;
-(void)setHasMissType:(BOOL)arg1 ;
-(id)missTypeAsString:(int)arg1 ;
-(int)StringAsMissType:(id)arg1 ;
-(void)setHasHttpStatus:(BOOL)arg1 ;
-(BOOL)hasHttpStatus;
-(void)writeTo:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)errors;
-(void)readAll:(BOOL)arg1 ;
@end

