/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBAssistantObserver.h>

@class NSDate, NSString;

@interface SBLockScreenOrientationManager : NSObject <SBAssistantObserver> {

	NSDate* _updateForAmbiguousOrientationsAfterDate;
	BOOL _wasUILocked;
	long long _lastOrientation;
	long long _lastValidOrientation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_updateDeviceOrientationIfNeededForPhoneUnlockToOrientation:(long long)arg1 ;
-(void)_updateCacheForDeviceOrientation:(long long)arg1 ;
-(void)updateInterfaceOrientationWithRequestedOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_lockStateChanged:(id)arg1 ;
-(void)_deviceOrientationChanged:(id)arg1 ;
-(void)assistantDidAppear:(id)arg1 ;
@end

