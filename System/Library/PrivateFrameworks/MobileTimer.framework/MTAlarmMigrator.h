/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, MTAlarm;

@interface MTAlarmMigrator : NSObject {

	NSMutableArray* _alarms;
	MTAlarm* _sleepAlarm;

}

@property (nonatomic,retain) NSMutableArray * alarms;              //@synthesize alarms=_alarms - In the implementation block
@property (nonatomic,retain) MTAlarm * sleepAlarm;                 //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
-(NSMutableArray *)alarms;
-(MTAlarm *)sleepAlarm;
-(void)setAlarms:(NSMutableArray *)arg1 ;
-(void)removeFromOldStorage;
-(void)setSleepAlarm:(MTAlarm *)arg1 ;
-(void)cleanUpOldNotifications;
-(void)migrateFromOldStorage;
@end

