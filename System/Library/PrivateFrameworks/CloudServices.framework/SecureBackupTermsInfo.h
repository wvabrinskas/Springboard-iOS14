/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudServices/CloudServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SecureBackupTermsInfo : PBCodable <NSCopying> {

	NSString* _altDSID;
	NSString* _countryCode;
	NSString* _icloudVersion;
	NSString* _metadata;
	NSString* _version;

}

@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version;                    //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasIcloudVersion; 
@property (nonatomic,retain) NSString * icloudVersion;              //@synthesize icloudVersion=_icloudVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) NSString * metadata;                   //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) BOOL hasAltDSID; 
@property (nonatomic,retain) NSString * altDSID;                    //@synthesize altDSID=_altDSID - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setMetadata:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)version;
-(id)dictionaryRepresentation;
-(NSString *)metadata;
-(NSString *)countryCode;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasMetadata;
-(BOOL)hasCountryCode;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasAltDSID;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasIcloudVersion;
-(NSString *)icloudVersion;
-(void)setIcloudVersion:(NSString *)arg1 ;
-(BOOL)hasVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

