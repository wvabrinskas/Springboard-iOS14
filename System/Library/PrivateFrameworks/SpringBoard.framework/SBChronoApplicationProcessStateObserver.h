/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class SBHIconManager, CHSApplicationProcessStateChangeConsumer, NSObject;

@interface SBChronoApplicationProcessStateObserver : NSObject {

	SBHIconManager* _iconManager;
	CHSApplicationProcessStateChangeConsumer* _chronoConsumer;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) SBHIconManager * iconManager;                                           //@synthesize iconManager=_iconManager - In the implementation block
@property (nonatomic,readonly) CHSApplicationProcessStateChangeConsumer * chronoConsumer;              //@synthesize chronoConsumer=_chronoConsumer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                       //@synthesize queue=_queue - In the implementation block
-(id)init;
-(CHSApplicationProcessStateChangeConsumer *)chronoConsumer;
-(id)initWithIconManager:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(SBHIconManager *)iconManager;
-(void)applicationProcessStateDidChange:(id)arg1 ;
-(void)_queue_handleApplicationProcessStateDidChangeIfNecessary:(id)arg1 ;
@end
