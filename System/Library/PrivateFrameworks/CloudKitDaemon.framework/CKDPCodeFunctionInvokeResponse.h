/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPCodeFunctionInvokeResponseAttestationResponse, NSData;

@interface CKDPCodeFunctionInvokeResponse : PBCodable <NSCopying> {

	CKDPCodeFunctionInvokeResponseAttestationResponse* _attestationResponse;
	NSData* _serializedResult;

}

@property (nonatomic,readonly) BOOL hasSerializedResult; 
@property (nonatomic,retain) NSData * serializedResult;                                                            //@synthesize serializedResult=_serializedResult - In the implementation block
@property (nonatomic,readonly) BOOL hasAttestationResponse; 
@property (nonatomic,retain) CKDPCodeFunctionInvokeResponseAttestationResponse * attestationResponse;              //@synthesize attestationResponse=_attestationResponse - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)serializedResult;
-(BOOL)hasAttestationResponse;
-(CKDPCodeFunctionInvokeResponseAttestationResponse *)attestationResponse;
-(void)setSerializedResult:(NSData *)arg1 ;
-(BOOL)hasSerializedResult;
-(void)setAttestationResponse:(CKDPCodeFunctionInvokeResponseAttestationResponse *)arg1 ;
@end
