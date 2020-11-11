/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAIntentGroupSiriKitParameterMetadata : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * confirmationStates; 
@property (nonatomic,copy) NSString * parameterName; 
@property (assign,nonatomic) BOOL shouldResolve; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)siriKitParameterMetadata;
+(id)siriKitParameterMetadataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)confirmationStates;
-(void)setConfirmationStates:(NSArray *)arg1 ;
-(void)setParameterName:(NSString *)arg1 ;
-(BOOL)shouldResolve;
-(void)setShouldResolve:(BOOL)arg1 ;
-(id)encodedClassName;
-(NSString *)parameterName;
@end
