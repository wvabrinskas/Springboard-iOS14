/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKitUI/EKRecurrenceGridChooserController.h>

@class NSMutableSet;

@interface EKRecurrenceMonthDayChooserController : EKRecurrenceGridChooserController {

	NSMutableSet* _daysOfTheMonthSet;
	BOOL _prohibitsMultipleDaysInMonthlyRecurrence;

}

@property (assign,nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence;              //@synthesize prohibitsMultipleDaysInMonthlyRecurrence=_prohibitsMultipleDaysInMonthlyRecurrence - In the implementation block
-(void)setDaysOfTheMonth:(id)arg1 ;
-(long long)frequency;
-(void)prepareForDisplay;
-(BOOL)prohibitsMultipleDaysInMonthlyRecurrence;
-(id)initWithDate:(id)arg1 ;
-(void)setProhibitsMultipleDaysInMonthlyRecurrence:(BOOL)arg1 ;
-(id)daysOfTheMonth;
-(void)refreshCells;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(id)cellLabels;
-(long long)gridViewType;
-(void)selectCell:(id)arg1 atIndex:(long long)arg2 ;
@end
