/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HDAssertionObserver.h>

@protocol OS_dispatch_queue;
@class HDDaemon, NSObject, HDAssertionManager, HDAssertion, NSString;

@interface HDPowerSavingModeManager : NSObject <HDAssertionObserver> {

	HDDaemon* _daemon;
	NSObject*<OS_dispatch_queue> _queue;
	HDAssertionManager* _assertionManager;
	BOOL _powerSavingModeEnabled;
	BOOL _supportsCellularTelephony;
	HDAssertion* _disableAOTAssertion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(id)initWithDaemon:(id)arg1 ;
-(void)dealloc;
-(void)assertionManager:(id)arg1 assertionTaken:(id)arg2 ;
-(BOOL)supportsPowerSavingForActivityType:(unsigned long long)arg1 ;
-(id)takeSessionAssertionForOwnerIdentifier:(id)arg1 activityType:(unsigned long long)arg2 ;
-(void)_startObservingPowerSavingModeSetting;
-(void)_stopObservingPowerSavingModeSetting;
-(void)_queue_enablePowerSavingIfNeededForOwnerIdentifier:(id)arg1 ;
-(void)_queue_disablePowerSavingIfNeeded;
-(void)_queue_powerSavingModeDidChange;
-(void)_powerSavingModeDidChange;
@end

