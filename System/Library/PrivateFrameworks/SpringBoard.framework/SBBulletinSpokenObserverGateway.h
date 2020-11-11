/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BBObserverDelegate.h>
#import <libobjc.A.dylib/AFSiriUserNotificationRequestCapabilityObserving.h>

@class BBObserver, DNDEventBehaviorResolutionService, NSString;

@interface SBBulletinSpokenObserverGateway : NSObject <BBObserverDelegate, AFSiriUserNotificationRequestCapabilityObserving> {

	BBObserver* _bbObserver;
	DNDEventBehaviorResolutionService* _dndEventBehaviorResolutionService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)hasEligibleSetupChanged:(BOOL)arg1 ;
-(id)init;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(/*^block*/id)arg5 ;
-(void)requestCanBeHandledChanged:(BOOL)arg1 ;
@end
