/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBDeviceApplicationSceneStatusBarStateObserver;
#import <SpringBoard/SpringBoard-Structs.h>
@interface _SBDeviceApplicationSceneStatusBarStateProviderObserverRecord : NSObject {

	struct {
		unsigned wantsDidChangeStatusBarStyleTo : 1;
		unsigned wantsDidChangeStatusBarPartStylesTo : 1;
		unsigned wantsDidChangeStatusBarAlphaTo : 1;
		unsigned wantsDidChangeStatusBarHiddenTo_withAnimation : 1;
		unsigned wantsDidChangeStatusBarOrientationTo : 1;
		unsigned wantsDidInvalidateStatusBarDescriptionForSceneWithIdentifier : 1;
		unsigned wantsDidChangeStatusBarStyleOverridesToSuppressTo : 1;
		unsigned wantsDidChangeStatusBarAvoidanceFrameTo : 1;
		unsigned wantsDidChangeSceneInterfaceOrientationTo : 1;
	}  _flags;
	id<SBDeviceApplicationSceneStatusBarStateObserver> _observer;

}
@end

