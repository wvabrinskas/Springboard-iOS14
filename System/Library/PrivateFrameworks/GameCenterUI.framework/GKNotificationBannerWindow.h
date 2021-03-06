/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIWindow.h>

@protocol OS_dispatch_semaphore;
@class NSObject, GKNotificationBannerViewController;

@interface GKNotificationBannerWindow : UIWindow {

	NSObject*<OS_dispatch_semaphore> _bannerSemaphore;
	GKNotificationBannerViewController* _currentBannerViewController;

}

@property (nonatomic,retain) GKNotificationBannerViewController * currentBannerViewController;              //@synthesize currentBannerViewController=_currentBannerViewController - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> bannerSemaphore;                            //@synthesize bannerSemaphore=_bannerSemaphore - In the implementation block
+(id)bannerWindow;
+(void)enqueBanner:(id)arg1 ;
+(id)queue;
-(BOOL)_canBecomeKeyWindow;
-(void)handlePan:(id)arg1 ;
-(id)init;
-(BOOL)_canAffectStatusBarAppearance;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)handleSingleTap:(id)arg1 ;
-(GKNotificationBannerViewController *)currentBannerViewController;
-(NSObject*<OS_dispatch_semaphore>)bannerSemaphore;
-(void)_showBanner:(id)arg1 ;
-(void)_hideBanner:(id)arg1 quickly:(BOOL)arg2 ;
-(void)setCurrentBannerViewController:(GKNotificationBannerViewController *)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_includeInDefaultImageSnapshot;
-(void)dealloc;
@end

