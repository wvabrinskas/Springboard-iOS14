/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HDProcessStateObserver <NSObject>
@optional
-(void)processWithBundleIdentifier:(id)arg1 didTransitionFromState:(unsigned)arg2 toState:(unsigned)arg3;
-(void)processSuspended:(id)arg1;
-(void)processResumed:(id)arg1;
-(void)processTerminated:(id)arg1;
-(void)processDidEnterBackground:(id)arg1;
-(void)processDidEnterForeground:(id)arg1;

@end
