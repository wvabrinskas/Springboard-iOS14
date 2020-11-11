/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKUIYearMonthView.h>

@class NSDateComponents;

@interface EKUIMiniMonthView : EKUIYearMonthView {

	NSDateComponents* _dateComponents;

}

@property (nonatomic,retain) NSDateComponents * dateComponents; 
+(double)heightForInterfaceOrientation:(long long)arg1 windowSize:(CGSize)arg2 heightSizeClass:(long long)arg3 ;
-(NSDateComponents *)dateComponents;
-(id)headerFont;
-(BOOL)opaque;
-(double)circleSizeForDoubleDigit;
-(double)circleSize;
-(double)circleFrameYAdjustment;
-(double)circleFrameXAdjustment;
-(double)todayTextYAdjustment;
-(double)todayNumberKerning;
-(double)headerXAdjust;
-(double)yInset;
-(double)headerFontMaxSize;
-(double)headerFontMinSize;
-(double)headerFontKerning;
-(id)weekDayInitialsFont;
-(id)dayColorKey;
-(CGRect)frameForGridOfDays:(BOOL)arg1 ;
-(double)xInset;
-(double)dayTextSize;
-(double)todayTextSize;
-(BOOL)vibrant;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)showMonthName;
-(id)initWithCalendar:(id)arg1 dateComponents:(id)arg2 ;
-(double)_gridOfDaysYAdjustment;
-(double)_gridOfDaysHeightAdjustment;
-(BOOL)showWeekDayInitials;
-(double)weekDayInitialsAdjustLeft;
-(double)weekDayInitialsAdjustTop;
-(double)daysXAdjustLeft;
-(double)daysYAdjustTop;
-(id)todayNumberFont;
-(id)dayNumberFont;
-(double)xSpacing;
-(double)ySpacing;
-(id)dayColor;
-(void)setDateComponents:(NSDateComponents *)arg1 ;
@end
