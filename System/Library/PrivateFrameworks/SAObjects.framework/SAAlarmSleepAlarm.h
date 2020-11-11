/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAAlarmObject.h>

@class NSNumber;

@interface SAAlarmSleepAlarm : SAAlarmObject

@property (nonatomic,copy) NSNumber * bedtimeHour; 
@property (nonatomic,copy) NSNumber * bedtimeMinute; 
@property (nonatomic,copy) NSNumber * isFiringNext; 
@property (nonatomic,copy) NSNumber * isOverride; 
+(id)sleepAlarmWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSNumber *)bedtimeMinute;
-(void)setBedtimeHour:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)bedtimeHour;
-(NSNumber *)isOverride;
-(void)setIsOverride:(NSNumber *)arg1 ;
-(void)setBedtimeMinute:(NSNumber *)arg1 ;
-(NSNumber *)isFiringNext;
-(void)setIsFiringNext:(NSNumber *)arg1 ;
@end
