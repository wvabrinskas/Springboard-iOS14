/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSFormatter.h>

@class NSCalendar, NSDateFormatter;

@interface CNVCardDateComponentsFormatter : NSFormatter {

	NSCalendar* _gregorianCalendar;
	NSDateFormatter* _compactYearMonthDayDateFormatter;
	NSDateFormatter* _compactYearMonthDayDateHourMinuteSecondZFormatter;
	NSDateFormatter* _monthDayDateFormatter;
	NSDateFormatter* _yearMonthDayDateFormatter;
	NSDateFormatter* _yearMonthDayDateHourMinuteSecondZFormatter;

}
+(id)dateComponentsFromALTBDAYString:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(id)dateComponentsFromString:(id)arg1 ;
-(id)gregorianCalendar;
-(BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(id)stringFromDateComponents:(id)arg1 ;
-(id)dateComponentsFromALTBDAYString:(id)arg1 ;
-(id)altBDAYStringFromDateComponents:(id)arg1 ;
-(id)yearMonthDayStringFromDateComponents:(id)arg1 ;
-(id)monthDayStringFromDateComponents:(id)arg1 ;
-(id)yearMonthDayDateFormatter;
-(id)yearMonthDayDateHourMinuteSecondZFormatter;
-(id)compactYearMonthDayDateFormatter;
-(id)compactYearMonthDayDateHourMinuteSecondZFormatter;
-(id)monthDayDateFormatter;
-(id)stringForComponentValue:(long long)arg1 format:(id)arg2 ;
@end

