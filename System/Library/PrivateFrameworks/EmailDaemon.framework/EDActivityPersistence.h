/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol EDActivityHookResponder;
#import <EmailDaemon/EmailDaemon-Structs.h>
@class NSMutableDictionary;

@interface EDActivityPersistence : NSObject {

	NSMutableDictionary* _currentActivities;
	os_unfair_lock_s _lock;
	id<EDActivityHookResponder> _activityHookResponder;

}

@property (nonatomic,retain) id<EDActivityHookResponder> activityHookResponder;              //@synthesize activityHookResponder=_activityHookResponder - In the implementation block
-(id)currentActivities;
-(void)activityWithID:(id)arg1 setUserInfoObject:(id)arg2 forKey:(id)arg3 ;
-(void)activityWithID:(id)arg1 setCompletedCount:(long long)arg2 totalCount:(long long)arg3 ;
-(void)activityWithID:(id)arg1 finishedWithError:(id)arg2 ;
-(id)initWithHookResponder:(id)arg1 ;
-(id)startActivityOfType:(long long)arg1 userInfo:(id)arg2 ;
-(id<EDActivityHookResponder>)activityHookResponder;
-(void)setActivityHookResponder:(id<EDActivityHookResponder>)arg1 ;
@end

