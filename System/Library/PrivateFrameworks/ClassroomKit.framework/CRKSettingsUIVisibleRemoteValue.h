/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CATTaskOperationNotificationDelegate.h>

@protocol CRKRequestPerformingProtocol;
@class CATRemoteTaskOperation, NSString;

@interface CRKSettingsUIVisibleRemoteValue : NSObject <CATTaskOperationNotificationDelegate> {

	id<CRKRequestPerformingProtocol> mDaemonProxy;
	CATRemoteTaskOperation* mSubscriptionOperation;
	long long _settingsUIVisible;

}

@property (assign,nonatomic) long long settingsUIVisible;              //@synthesize settingsUIVisible=_settingsUIVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(void)dealloc;
-(long long)settingsUIVisible;
-(void)setSettingsUIVisible:(long long)arg1 ;
-(void)endUpdating;
-(void)settingsUIVisibilitySubscriptionOperationDidFinish:(id)arg1 ;
-(BOOL)isCurrentSubscriptionOperation:(id)arg1 ;
-(void)settingsUIVisibleDidChange:(BOOL)arg1 ;
-(id)initWithDaemonProxy:(id)arg1 ;
-(void)beginUpdating;
@end
