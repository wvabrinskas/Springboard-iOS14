/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNCancelable, CNScheduler;
@class CNUnfairLock;

@interface CNCoalescingTimer : NSObject {

	BOOL _open;
	BOOL _someoneWaiting;
	id<CNCancelable> _scheduledToken;
	id<CNScheduler> _downstreamScheduler;
	CNUnfairLock* _resourceLock;
	id<CNScheduler> _delayScheduler;
	/*^block*/id _block;
	double _delay;
	unsigned long long _options;

}

@property (nonatomic,retain) id<CNCancelable> scheduledToken;                          //@synthesize scheduledToken=_scheduledToken - In the implementation block
@property (nonatomic,readonly) CNUnfairLock * resourceLock;                            //@synthesize resourceLock=_resourceLock - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> delayScheduler;                         //@synthesize delayScheduler=_delayScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> downstreamScheduler;                    //@synthesize downstreamScheduler=_downstreamScheduler - In the implementation block
@property (nonatomic,copy,readonly) id block;                                          //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) double delay;                                           //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                             //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL open;                                                //@synthesize open=_open - In the implementation block
@property (assign,getter=isSomeoneWaiting,nonatomic) BOOL someoneWaiting;              //@synthesize someoneWaiting=_someoneWaiting - In the implementation block
+(id)os_log;
-(BOOL)open;
-(void)setOpen:(BOOL)arg1 ;
-(id<CNScheduler>)delayScheduler;
-(double)delay;
-(void)nts_closeDoor;
-(void)setSomeoneWaiting:(BOOL)arg1 ;
-(unsigned long long)options;
-(id<CNCancelable>)scheduledToken;
-(void)nts_makeSomeoneWait;
-(void)nts_openDoor;
-(CNUnfairLock *)resourceLock;
-(id)block;
-(BOOL)nts_isDoorOpened;
-(void)setScheduledToken:(id<CNCancelable>)arg1 ;
-(void)nts_letSomeoneIn;
-(id<CNScheduler>)downstreamScheduler;
-(BOOL)isSomeoneWaiting;
-(id)initWithDelay:(double)arg1 options:(unsigned long long)arg2 block:(/*^block*/id)arg3 schedulerProvider:(id)arg4 downstreamScheduler:(id)arg5 ;
-(void)handleEvent;
-(void)dealloc;
@end
