/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <Foundation/NSPredicate.h>

@interface DNDSModeAssertionInvalidationPredicate : NSPredicate

@property (nonatomic,readonly) unsigned long long predicateType; 
+(id)predicateForAnyAssertion;
+(id)predicateForAssertionClientIdentifiers:(id)arg1 ;
+(id)predicateForAssertionsTakenBeforeDate:(id)arg1 ;
+(id)predicateForAssertionUUIDs:(id)arg1 ;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(unsigned long long)predicateType;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
