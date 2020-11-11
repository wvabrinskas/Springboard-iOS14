/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class SAHAEntity, NSString, NSArray, SAHAAttributeValue;

@interface SAHAActionResult : SADomainObject

@property (nonatomic,retain) SAHAEntity * entity; 
@property (nonatomic,copy) NSString * outcome; 
@property (nonatomic,copy) NSArray * relatedEntityIds; 
@property (nonatomic,copy) NSString * requestActionId; 
@property (nonatomic,copy) NSString * resultAttribute; 
@property (nonatomic,retain) SAHAAttributeValue * resultValue; 
+(id)actionResult;
+(id)actionResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setEntity:(SAHAEntity *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)outcome;
-(void)setOutcome:(NSString *)arg1 ;
-(NSArray *)relatedEntityIds;
-(SAHAAttributeValue *)resultValue;
-(void)setRelatedEntityIds:(NSArray *)arg1 ;
-(NSString *)requestActionId;
-(void)setRequestActionId:(NSString *)arg1 ;
-(NSString *)resultAttribute;
-(void)setResultAttribute:(NSString *)arg1 ;
-(void)setResultValue:(SAHAAttributeValue *)arg1 ;
-(SAHAEntity *)entity;
@end
