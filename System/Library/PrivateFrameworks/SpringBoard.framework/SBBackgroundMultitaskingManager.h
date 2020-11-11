/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SpringBoard/SpringBoard-Structs.h>
@class NSMutableDictionary;

@interface SBBackgroundMultitaskingManager : NSObject {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _lock_appToBackgroundTasks;

}
+(id)sharedInstance;
-(id)_createBackgroundFetchTaskForApplication:(id)arg1 ;
-(id)init;
-(void)_appProcessStateDidChange:(id)arg1 ;
-(void)_backgroundTaskFinished:(id)arg1 forApplication:(id)arg2 ;
@end
