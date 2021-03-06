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

@class NSString;

@interface GEOCacheMissLoadError : PBCodable <NSCopying> {

	NSString* _errorDomain;
	unsigned _count;
	int _errorCode;
	SCD_Struct_GE123 _flags;

}

@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain; 
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode; 
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setCount:(unsigned)arg1 ;
-(BOOL)hasCount;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)count;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)errorDomain;
-(BOOL)hasErrorDomain;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(int)errorCode;
-(void)setErrorCode:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasErrorCode;
-(void)readAll:(BOOL)arg1 ;
@end

