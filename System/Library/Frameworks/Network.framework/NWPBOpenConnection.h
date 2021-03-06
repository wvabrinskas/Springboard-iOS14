/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NWPBEndpoint, NWPBParameters;

@interface NWPBOpenConnection : PBCodable <NSCopying> {

	NSString* _clientUUID;
	NWPBEndpoint* _endpoint;
	NWPBParameters* _parameters;

}

@property (nonatomic,readonly) BOOL hasEndpoint; 
@property (nonatomic,retain) NWPBEndpoint * endpoint;                  //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,readonly) BOOL hasParameters; 
@property (nonatomic,retain) NWPBParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) BOOL hasClientUUID; 
@property (nonatomic,retain) NSString * clientUUID;                    //@synthesize clientUUID=_clientUUID - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(NWPBParameters *)parameters;
-(unsigned long long)hash;
-(BOOL)hasEndpoint;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(void)setParameters:(NWPBParameters *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NWPBEndpoint *)endpoint;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasParameters;
-(void)setClientUUID:(NSString *)arg1 ;
-(BOOL)hasClientUUID;
-(NSString *)clientUUID;
-(void)writeTo:(id)arg1 ;
-(void)setEndpoint:(NWPBEndpoint *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

