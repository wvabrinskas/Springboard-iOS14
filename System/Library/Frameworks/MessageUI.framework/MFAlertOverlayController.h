/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIWindowScene, UIWindow, UIAlertController;

@interface MFAlertOverlayController : NSObject {

	UIWindowScene* _scene;
	UIWindow* _overlayWindow;

}

@property (nonatomic,retain) UIWindow * overlayWindow;                                 //@synthesize overlayWindow=_overlayWindow - In the implementation block
@property (nonatomic,__weak,readonly) UIWindowScene * scene;                           //@synthesize scene=_scene - In the implementation block
@property (nonatomic,readonly) BOOL isPresentingAlert; 
@property (nonatomic,readonly) UIAlertController * topmostPresentedAlert; 
+(id)log;
-(void)_handlePresentationDismissalNotification:(id)arg1 ;
-(id)_bottomPresentedAlert;
-(void)setOverlayWindow:(UIWindow *)arg1 ;
-(BOOL)isPresentingAlert;
-(UIAlertController *)topmostPresentedAlert;
-(id)initWithWindowScene:(id)arg1 ;
-(UIWindowScene *)scene;
-(void)_teardownOverlayWindow;
-(id)_topmostViewController;
-(void)_setupOverlayWindowWithScene:(id)arg1 ;
-(UIWindow *)overlayWindow;
-(void)presentAlertController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

