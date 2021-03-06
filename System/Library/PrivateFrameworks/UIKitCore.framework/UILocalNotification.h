/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDate, NSTimeZone, NSCalendar, CLRegion, NSString, NSDictionary;

@interface UILocalNotification : NSObject <NSCopying, NSCoding>

@property (nonatomic,copy) NSDate * fireDate; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic) unsigned long long repeatInterval; 
@property (nonatomic,copy) NSCalendar * repeatCalendar; 
@property (nonatomic,copy) CLRegion * region; 
@property (assign,nonatomic) BOOL regionTriggersOnce; 
@property (nonatomic,copy) NSString * alertBody; 
@property (assign,nonatomic) BOOL hasAction; 
@property (nonatomic,copy) NSString * alertAction; 
@property (nonatomic,copy) NSString * alertLaunchImage; 
@property (nonatomic,copy) NSString * alertTitle; 
@property (nonatomic,copy) NSString * soundName; 
@property (assign,nonatomic) long long applicationIconBadgeNumber; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (nonatomic,copy) NSString * category; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)alloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)validate;
-(id)nextFireDateForLastFireDate:(id)arg1 ;
-(BOOL)isTriggeredByDate;
-(long long)compareFireDates:(id)arg1 ;
-(id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2 ;
-(BOOL)isTriggeredByRegion;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
@end

