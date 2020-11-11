/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, EFObserver;
@class BKSApplicationStateMonitor, NSObject, EFObservable;

@interface MFAppStateMonitor : NSObject {

	unsigned _appState;
	BKSApplicationStateMonitor* _appStateMonitor;
	NSObject*<OS_dispatch_queue> _queue;
	EFObservable*<EFObserver> _observable;

}

@property (nonatomic,readonly) EFObservable * appStateObservable; 
@property (getter=isForeground,nonatomic,readonly) BOOL foreground; 
+(id)sharedInstance;
-(BOOL)isForeground;
-(id)initWithBundleId:(id)arg1 ;
-(void)_updateApplicationState:(id)arg1 observer:(id)arg2 ;
-(EFObservable *)appStateObservable;
-(void)dealloc;
@end
