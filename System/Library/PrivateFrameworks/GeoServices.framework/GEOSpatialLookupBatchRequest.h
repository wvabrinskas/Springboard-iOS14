/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOSpatialLookupBatchRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	NSString* _deviceCountryCode;
	NSString* _deviceSku;
	NSMutableArray* _requests;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_deviceCountryCode : 1;
		unsigned read_deviceSku : 1;
		unsigned read_requests : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * requests; 
@property (nonatomic,readonly) BOOL hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode; 
@property (nonatomic,readonly) BOOL hasDeviceSku; 
@property (nonatomic,retain) NSString * deviceSku; 
+(Class)requestType;
+(BOOL)isValid:(id)arg1 ;
-(NSString *)deviceCountryCode;
-(BOOL)hasDeviceCountryCode;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)deviceSku;
-(void)setDeviceSku:(NSString *)arg1 ;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(id)init;
-(unsigned)requestTypeCode;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(Class)responseClass;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)requestsCount;
-(void)clearRequests;
-(id)requestAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)requests;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasDeviceSku;
-(void)addRequest:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
