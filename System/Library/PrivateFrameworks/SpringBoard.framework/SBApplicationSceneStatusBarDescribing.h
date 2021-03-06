/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, _UIStatusBarData, SBDeviceApplicationSceneStatusBarBreadcrumbProvider, SBDeviceApplicationSceneHandle, FBScene;


@protocol SBApplicationSceneStatusBarDescribing <NSObject>
@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,readonly) BOOL statusBarHidden; 
@property (nonatomic,readonly) double statusBarAlpha; 
@property (nonatomic,readonly) long long statusBarOrientation; 
@property (nonatomic,readonly) int statusBarStyleOverridesToSuppress; 
@property (nonatomic,readonly) CGRect statusBarAvoidanceFrame; 
@property (nonatomic,readonly) BOOL sceneWantsDeviceOrientationEventsEnabled; 
@property (nonatomic,readonly) NSString * statusBarSceneIdentifier; 
@property (nonatomic,readonly) _UIStatusBarData * overlayStatusBarData; 
@property (nonatomic,readonly) SBDeviceApplicationSceneStatusBarBreadcrumbProvider * breadcrumbProvider; 
@property (nonatomic,readonly) SBDeviceApplicationSceneHandle * classicApplicationSceneHandleIfExists; 
@property (nonatomic,readonly) FBScene * sceneToHandleStatusBarTapIfExists; 
@required
-(int)statusBarStyleOverridesToSuppress;
-(SBDeviceApplicationSceneHandle *)classicApplicationSceneHandleIfExists;
-(BOOL)sceneWantsDeviceOrientationEventsEnabled;
-(FBScene *)sceneToHandleStatusBarTapIfExists;
-(BOOL)statusBarHidden;
-(NSString *)statusBarSceneIdentifier;
-(double)statusBarAlpha;
-(CGRect)statusBarAvoidanceFrame;
-(_UIStatusBarData *)overlayStatusBarData;
-(long long)statusBarOrientation;
-(SBDeviceApplicationSceneStatusBarBreadcrumbProvider *)breadcrumbProvider;
-(long long)statusBarStyleForPartWithIdentifier:(id)arg1;
-(long long)statusBarStyle;

@end

