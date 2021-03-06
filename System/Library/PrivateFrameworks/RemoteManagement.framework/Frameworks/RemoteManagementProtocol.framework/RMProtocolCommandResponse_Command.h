/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMModelAnyPayload;

@interface RMProtocolCommandResponse_Command : RMModelPayloadBase {

	NSString* _responseType;
	NSString* _responseIdentifier;
	RMModelAnyPayload* _responsePayload;

}

@property (nonatomic,copy) NSString * responseType;                          //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,copy) NSString * responseIdentifier;                    //@synthesize responseIdentifier=_responseIdentifier - In the implementation block
@property (nonatomic,copy) RMModelAnyPayload * responsePayload;              //@synthesize responsePayload=_responsePayload - In the implementation block
+(id)allowedResponseKeys;
+(id)buildWithType:(id)arg1 identifier:(id)arg2 payload:(id)arg3 ;
+(id)buildRequiredOnlyWithType:(id)arg1 identifier:(id)arg2 ;
-(void)setResponseType:(NSString *)arg1 ;
-(NSString *)responseType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(RMModelAnyPayload *)responsePayload;
-(NSString *)responseIdentifier;
-(void)setResponseIdentifier:(NSString *)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setResponsePayload:(RMModelAnyPayload *)arg1 ;
@end

