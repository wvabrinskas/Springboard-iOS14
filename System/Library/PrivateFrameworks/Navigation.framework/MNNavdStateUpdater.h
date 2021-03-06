/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MNNavigationStateObserver.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSObject, NSString;

@interface MNNavdStateUpdater : NSObject <MNNavigationStateObserver> {

	NSHashTable* _innerObservers;
	BOOL _hasObservers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedUpdater;
-(id)initPrivate;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)stateManager:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(BOOL)isNavigatingOrPredictingDestination;
-(BOOL)isNavigatingWithETA;
@end

