/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _HKContextChangeDelegate
@property (assign,nonatomic) BOOL durationContextSelected; 
@property (assign,nonatomic) BOOL scheduleContextSelected; 
@property (assign,nonatomic) BOOL baseDisplayIsSchedule; 
@property (assign,nonatomic) BOOL shouldHighlightBaseDisplayContext; 
@required
-(BOOL)durationContextSelected;
-(BOOL)scheduleContextSelected;
-(void)setDurationContextSelected:(BOOL)arg1;
-(void)setScheduleContextSelected:(BOOL)arg1;
-(BOOL)baseDisplayIsSchedule;
-(void)setBaseDisplayIsSchedule:(BOOL)arg1;
-(BOOL)shouldHighlightBaseDisplayContext;
-(void)setShouldHighlightBaseDisplayContext:(BOOL)arg1;

@end
