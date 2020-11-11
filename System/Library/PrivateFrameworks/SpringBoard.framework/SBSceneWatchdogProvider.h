/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FBProcessWatchdogProviding.h>

@class FBApplicationProcessWatchdogPolicy, NSString;

@interface SBSceneWatchdogProvider : NSObject <FBProcessWatchdogProviding> {

	BOOL _watchdogDisabled;
	FBApplicationProcessWatchdogPolicy* _defaultProcessWatchdogProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultSceneWatchdogProvider;
+(id)disabledSceneWatchdogProvider;
-(id)initAsDisabled:(BOOL)arg1 ;
-(id)_scaleProvisions:(id)arg1 byFactor:(double)arg2 ;
-(id)watchdogPolicyForProcess:(id)arg1 eventContext:(id)arg2 ;
@end
