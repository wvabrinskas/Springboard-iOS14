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

@interface RMProtocolCommandRequest_StatusReason : RMModelPayloadBase {

	NSString* _requestCode;
	NSString* _requestDescription;
	RMModelAnyPayload* _requestDetails;

}

@property (nonatomic,copy) NSString * requestCode;                          //@synthesize requestCode=_requestCode - In the implementation block
@property (nonatomic,copy) NSString * requestDescription;                   //@synthesize requestDescription=_requestDescription - In the implementation block
@property (nonatomic,copy) RMModelAnyPayload * requestDetails;              //@synthesize requestDetails=_requestDetails - In the implementation block
+(id)buildRequiredOnlyWithCode:(id)arg1 ;
+(id)buildWithCode:(id)arg1 description:(id)arg2 details:(id)arg3 ;
+(id)allowedRequestKeys;
-(NSString *)requestDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)requestCode;
-(void)setRequestCode:(NSString *)arg1 ;
-(void)setRequestDescription:(NSString *)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setRequestDetails:(RMModelAnyPayload *)arg1 ;
-(RMModelAnyPayload *)requestDetails;
@end
