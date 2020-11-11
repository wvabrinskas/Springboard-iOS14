/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSString, NSArray;

@interface SASendInstrumentation : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSNumber * eventTransmittedRelativeToBootTimeTimestampNs; 
@property (nonatomic,copy) NSString * eventTransmittedTimestampRefId; 
@property (nonatomic,copy) NSArray * instrumentationBatch; 
@property (nonatomic,copy) NSString * payloadVersion; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sendInstrumentation;
+(id)sendInstrumentationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setPayloadVersion:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(NSString *)payloadVersion;
-(NSNumber *)eventTransmittedRelativeToBootTimeTimestampNs;
-(NSString *)eventTransmittedTimestampRefId;
-(void)setEventTransmittedRelativeToBootTimeTimestampNs:(NSNumber *)arg1 ;
-(void)setEventTransmittedTimestampRefId:(NSString *)arg1 ;
-(NSArray *)instrumentationBatch;
-(void)setInstrumentationBatch:(NSArray *)arg1 ;
@end
