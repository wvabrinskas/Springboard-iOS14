/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPCodeFunctionInvokeRequestAttestationRequest, NSString, CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata, NSData;

@interface CKDPCodeFunctionInvokeRequest : PBRequest <NSCopying> {

	CKDPCodeFunctionInvokeRequestAttestationRequest* _attestationRequest;
	NSString* _functionName;
	CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata* _protectedCloudComputeMetadata;
	NSData* _serializedParameters;
	NSString* _serviceName;

}

@property (nonatomic,readonly) BOOL hasServiceName; 
@property (nonatomic,retain) NSString * serviceName;                                                                                  //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) BOOL hasFunctionName; 
@property (nonatomic,retain) NSString * functionName;                                                                                 //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,readonly) BOOL hasSerializedParameters; 
@property (nonatomic,retain) NSData * serializedParameters;                                                                           //@synthesize serializedParameters=_serializedParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectedCloudComputeMetadata; 
@property (nonatomic,retain) CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata * protectedCloudComputeMetadata;              //@synthesize protectedCloudComputeMetadata=_protectedCloudComputeMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasAttestationRequest; 
@property (nonatomic,retain) CKDPCodeFunctionInvokeRequestAttestationRequest * attestationRequest;                                    //@synthesize attestationRequest=_attestationRequest - In the implementation block
+(id)options;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(unsigned long long)hash;
-(Class)responseClass;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(void)setServiceName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)serializedParameters;
-(void)setSerializedParameters:(NSData *)arg1 ;
-(void)setFunctionName:(NSString *)arg1 ;
-(BOOL)hasServiceName;
-(void)writeTo:(id)arg1 ;
-(NSString *)serviceName;
-(NSString *)functionName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProtectedCloudComputeMetadata:(CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata *)arg1 ;
-(void)setAttestationRequest:(CKDPCodeFunctionInvokeRequestAttestationRequest *)arg1 ;
-(BOOL)hasFunctionName;
-(BOOL)hasSerializedParameters;
-(BOOL)hasProtectedCloudComputeMetadata;
-(BOOL)hasAttestationRequest;
-(CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata *)protectedCloudComputeMetadata;
-(CKDPCodeFunctionInvokeRequestAttestationRequest *)attestationRequest;
@end

