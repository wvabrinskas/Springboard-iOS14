/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class NSMapTable, NSMutableSet, NSObject, NSString;

@interface HDXPCAlarmScheduler : NSObject <HDDiagnosticObject> {

	NSMapTable* _alarms;
	NSMutableSet* _pendingEvents;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _unitTest_schedulerObserver;

}

@property (nonatomic,copy) id unitTest_schedulerObserver;              //@synthesize unitTest_schedulerObserver=_unitTest_schedulerObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unittest_fireEvent:(id)arg1 ;
-(void)_queue_unscheduleEventWithName:(id)arg1 ;
-(id)init;
-(void)scheduleEvent:(id)arg1 ;
-(id)unitTest_schedulerObserver;
-(void)unscheduleEventWithName:(id)arg1 ;
-(void)_queue_handleEvent:(id)arg1 ;
-(void)removeAlarm:(id)arg1 ;
-(void)setUnitTest_schedulerObserver:(id)arg1 ;
-(void)addAlarm:(id)arg1 ;
-(void)_queue_handleXPCEvent:(id)arg1 ;
-(void)_queue_scheduleEvent:(id)arg1 ;
-(void)_queue_notifyAlarmsOfPendingEvents;
-(id)diagnosticDescription;
@end
