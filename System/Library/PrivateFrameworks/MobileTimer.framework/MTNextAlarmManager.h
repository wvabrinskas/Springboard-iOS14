/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NAScheduler;
@class NSSet, MTAlarmManager;

@interface MTNextAlarmManager : NSObject {

	NSSet* _nextAlarms;
	/*^block*/id _updateHandler;
	id<NAScheduler> _serializer;
	MTAlarmManager* _alarmManager;

}

@property (nonatomic,retain) id<NAScheduler> serializer;                 //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) NSSet * nextAlarms;                         //@synthesize nextAlarms=_nextAlarms - In the implementation block
@property (nonatomic,retain) MTAlarmManager * alarmManager;              //@synthesize alarmManager=_alarmManager - In the implementation block
@property (nonatomic,copy) id updateHandler;                             //@synthesize updateHandler=_updateHandler - In the implementation block
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(id)init;
-(id<NAScheduler>)serializer;
-(id)updateHandler;
-(MTAlarmManager *)alarmManager;
-(void)setUpdateHandler:(id)arg1 ;
-(void)setAlarmManager:(MTAlarmManager *)arg1 ;
-(NSSet *)nextAlarms;
-(void)setNextAlarms:(NSSet *)arg1 ;
-(void)calculateNextAlarms;
-(void)_handleAlarmsDidChange;
@end
