/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSString, NSDate, NSTimeZone, UIButton;


@protocol PLTitled <NSObject,PLContentSizeCategoryAdjusting>
@property (nonatomic,copy) NSArray * icons; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSDate * date; 
@property (assign,getter=isDateAllDay,nonatomic) BOOL dateAllDay; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic) long long dateFormatStyle; 
@property (nonatomic,readonly) NSArray * iconButtons; 
@property (nonatomic,readonly) UIButton * utilityButton; 
@required
-(void)setIcons:(id)arg1;
-(void)setDate:(id)arg1;
-(NSArray *)icons;
-(long long)dateFormatStyle;
-(void)setTimeZone:(id)arg1;
-(void)setDateFormatStyle:(long long)arg1;
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(BOOL)isDateAllDay;
-(void)setDateAllDay:(BOOL)arg1;
-(NSArray *)iconButtons;
-(UIButton *)utilityButton;

@end

