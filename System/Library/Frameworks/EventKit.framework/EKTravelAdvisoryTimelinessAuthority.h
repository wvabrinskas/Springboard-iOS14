/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CalActivatable.h>

@protocol OS_dispatch_queue, OS_dispatch_source, CalDateProvider;
@class NSObject, NSDate;

@interface EKTravelAdvisoryTimelinessAuthority : NSObject <CalActivatable> {

	BOOL _internalActive;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_source> _timer;
	NSDate* _startOfLeaveNowPeriodInternal;
	NSDate* _startOfRunningLatePeriodInternal;
	unsigned long long _internalPeriod;
	/*^block*/id _internalPeriodChangedCallback;
	id<CalDateProvider> _dateProvider;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                     //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSDate * startOfLeaveNowPeriodInternal;                  //@synthesize startOfLeaveNowPeriodInternal=_startOfLeaveNowPeriodInternal - In the implementation block
@property (nonatomic,retain) NSDate * startOfRunningLatePeriodInternal;               //@synthesize startOfRunningLatePeriodInternal=_startOfRunningLatePeriodInternal - In the implementation block
@property (assign,nonatomic) BOOL internalActive;                                     //@synthesize internalActive=_internalActive - In the implementation block
@property (assign,nonatomic) unsigned long long internalPeriod;                       //@synthesize internalPeriod=_internalPeriod - In the implementation block
@property (nonatomic,copy) id internalPeriodChangedCallback;                          //@synthesize internalPeriodChangedCallback=_internalPeriodChangedCallback - In the implementation block
@property (nonatomic,readonly) id<CalDateProvider> dateProvider;                      //@synthesize dateProvider=_dateProvider - In the implementation block
@property (nonatomic,readonly) NSDate * startOfLeaveNowPeriod; 
@property (nonatomic,readonly) NSDate * startOfRunningLatePeriod; 
@property (nonatomic,copy) id periodChangedCallback; 
@property (nonatomic,readonly) unsigned long long period; 
+(id)stringForPeriod:(unsigned long long)arg1 ;
-(id<CalDateProvider>)dateProvider;
-(unsigned long long)period;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)active;
-(void)_refresh;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setPeriodChangedCallback:(id)arg1 ;
-(id)init;
-(id)initWithDateProvider:(id)arg1 ;
-(NSDate *)startOfLeaveNowPeriodInternal;
-(void)activate;
-(void)_refreshTimer;
-(void)_refreshPeriod;
-(void)setInternalActive:(BOOL)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)_uninstallTimer;
-(void)_refreshOnDate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setInternalPeriod:(unsigned long long)arg1 ;
-(void)setInternalPeriodChangedCallback:(id)arg1 ;
-(BOOL)internalActive;
-(id)internalPeriodChangedCallback;
-(id)periodChangedCallback;
-(unsigned long long)internalPeriod;
-(void)deactivate;
-(NSDate *)startOfLeaveNowPeriod;
-(void)setStartOfLeaveNowPeriodInternal:(NSDate *)arg1 ;
-(NSDate *)startOfRunningLatePeriod;
-(void)updateWithHypothesis:(id)arg1 ;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)dealloc;
-(void)setStartOfRunningLatePeriodInternal:(NSDate *)arg1 ;
-(NSDate *)startOfRunningLatePeriodInternal;
@end
