/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/WidgetKit.framework/WidgetKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WidgetKit/WidgetKit.WidgetExtensionSession.h>

@interface WidgetKit._WidgetExtensionSession : _UKNOWN_SUPERCLASS_ <WidgetKit.WidgetExtensionSession> {

	 theExtension;
	 hostContext;
	 loggingIdentifier;
	 lock;
	 subscriptions;
	 watchdogTimeoutQueue;
	 watchdogTimeoutProvider;
	 rbsInterface;
	 suspensionObserver;
	 widgetExtensionAssertion;
	 lock_invalidated;
	 connection;

}
-(void)getDescriptorsWithCompletion:(/*^block*/id)arg1 ;
-(void)getPlaceholdersWithEnvironment:(id)arg1 for:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleURLSessionEventsFor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)attachPreviewAgentWithFrameworkPath:(id)arg1 endpoint:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)getTimelineFor:(id)arg1 into:(id)arg2 environment:(id)arg3 isPreview:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)invalidate;
@end
