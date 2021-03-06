/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEORPUserCredentials : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _icloudUserMapsAuthToken;
	NSString* _icloudUserPersonId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasIcloudUserPersonId; 
@property (nonatomic,retain) NSString * icloudUserPersonId; 
@property (nonatomic,readonly) BOOL hasIcloudUserMapsAuthToken; 
@property (nonatomic,retain) NSString * icloudUserMapsAuthToken; 
+(BOOL)isValid:(id)arg1 ;
+(id)_credentialsForPrimaryICloudAccount;
-(void)mergeFrom:(id)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setIcloudUserMapsAuthToken:(NSString *)arg1 ;
-(void)setIcloudUserPersonId:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)icloudUserPersonId;
-(NSString *)icloudUserMapsAuthToken;
-(BOOL)hasIcloudUserPersonId;
-(BOOL)hasIcloudUserMapsAuthToken;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end

