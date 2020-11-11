/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber;

@interface SALogNumericEvent : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * eventName; 
@property (nonatomic,copy) NSString * eventOperation; 
@property (nonatomic,copy) NSNumber * eventValue; 
+(id)logNumericEvent;
+(id)logNumericEventWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)eventName;
-(id)groupIdentifier;
-(void)setEventName:(NSString *)arg1 ;
-(NSString *)eventOperation;
-(void)setEventOperation:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(void)setEventValue:(NSNumber *)arg1 ;
-(NSNumber *)eventValue;
@end
