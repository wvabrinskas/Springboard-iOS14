/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CompanionSync/CompanionSync-Structs.h>
#import <Foundation/NSThread.h>

@class NSRunLoop, NSConditionLock;

@interface _SYStreamerThread : NSThread {

	NSRunLoop* _threadRunLoop;
	CFRunLoopSourceRef _stopRLS;
	NSConditionLock* _startupLock;

}

@property (nonatomic,readonly) NSRunLoop * runLoop; 
+(id)streamerThread;
-(id)init;
-(void)main;
-(NSRunLoop *)runLoop;
-(void)_waitForStartup;
@end
