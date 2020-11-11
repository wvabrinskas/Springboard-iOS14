/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, SCLSchedule, NSCalendar, NSMutableArray;

@interface SCLHistoryGroup : NSObject {

	NSDate* _referenceDate;
	SCLSchedule* _effectiveSchedule;
	NSCalendar* _calendar;
	NSMutableArray* _items;

}

@property (nonatomic,readonly) NSDate * referenceDate;                            //@synthesize referenceDate=_referenceDate - In the implementation block
@property (nonatomic,copy,readonly) SCLSchedule * effectiveSchedule;              //@synthesize effectiveSchedule=_effectiveSchedule - In the implementation block
@property (nonatomic,readonly) NSCalendar * calendar;                             //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                              //@synthesize items=_items - In the implementation block
+(id)historyGroupsByPrioritizingSchedule:(id)arg1 forDate:(id)arg2 inCalendar:(id)arg3 items:(id)arg4 ;
-(void)setItems:(NSMutableArray *)arg1 ;
-(NSCalendar *)calendar;
-(NSMutableArray *)items;
-(NSDate *)referenceDate;
-(BOOL)canContainUnlockHistoryItem:(id)arg1 ;
-(id)initWithEffectiveSchedule:(id)arg1 calendar:(id)arg2 referenceDate:(id)arg3 ;
-(SCLSchedule *)effectiveSchedule;
@end
