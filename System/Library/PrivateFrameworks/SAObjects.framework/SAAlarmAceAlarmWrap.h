/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAAlarmObject.h>
#import <SAObjects/SASyncWrap.h>

@class NSNumber, NSURL, NSString;

@interface SAAlarmAceAlarmWrap : SAAlarmObject <SASyncWrap>

@property (nonatomic,copy) NSNumber * generation; 
@property (nonatomic,copy) NSURL * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceAlarmWrap;
+(id)aceAlarmWrapWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)generation;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setGeneration:(NSNumber *)arg1 ;
@end
