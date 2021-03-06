/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCalendar, UICollectionViewDiffableDataSource, _UIDatePickerCalendarMonthSet, _UIDatePickerCalendarDaySet;

@interface _UIDatePickerCalendarViewDataSourceController : NSObject {

	NSCalendar* _calendar;
	UICollectionViewDiffableDataSource* _dataSource;
	_UIDatePickerCalendarMonthSet* _loadedMonthSet;
	_UIDatePickerCalendarDaySet* _loadedDaySet;

}
-(void)_reloadDataSourceWithScrollPosition:(id)arg1 ;
-(id)initWithCalendar:(id)arg1 dataSource:(id)arg2 ;
-(void)reloadDataSourceAroundMonth:(id)arg1 ;
-(long long)cleanupDataSourceWithScrollPositionIfNecessary:(id)arg1 ;
-(id)_loadedDays;
-(long long)prepareDataSourceWithScrollPositionIfNecessary:(id)arg1 ;
-(id)_loadedMonths;
@end

