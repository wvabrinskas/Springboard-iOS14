/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveSuggestionClientModel/ProactiveSuggestionClientModel-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXProactiveSuggestionClientModelSpecification : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying> {

	NSString* _clientModelId;
	NSString* _clientModelVersion;
	unsigned long long _engagementResetPolicy;

}

@property (nonatomic,readonly) NSString * clientModelId;                              //@synthesize clientModelId=_clientModelId - In the implementation block
@property (nonatomic,readonly) NSString * clientModelVersion;                         //@synthesize clientModelVersion=_clientModelVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long engagementResetPolicy;              //@synthesize engagementResetPolicy=_engagementResetPolicy - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(NSString *)clientModelId;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)encodeAsProto;
-(id)initWithProtoData:(id)arg1 ;
-(unsigned long long)hash;
-(id)proto;
-(NSString *)clientModelVersion;
-(id)jsonRawData;
-(id)initWithClientModelId:(id)arg1 clientModelVersion:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithProto:(id)arg1 ;
-(id)description;
-(id)initWithClientModelId:(id)arg1 clientModelVersion:(id)arg2 engagementResetPolicy:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)engagementResetPolicy;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)fuzzyIsEqualToClientModelSpecification:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
