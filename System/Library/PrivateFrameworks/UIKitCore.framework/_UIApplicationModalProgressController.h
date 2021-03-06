/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _UIProgressView, UIWindowScene, UIWindow, UIAlertController, NSProgress, NSTimer, NSString;

@interface _UIApplicationModalProgressController : NSObject {

	BOOL _disableButtonAction;
	_UIProgressView* _progressView;
	UIWindowScene* _weakScene;
	double _displayDelaySeconds;
	UIWindow* _window;
	UIAlertController* _alertController;
	/*^block*/id _dismissalHandler;
	/*^block*/id _preDisplayTestBlock;
	NSProgress* _progress;
	NSTimer* _showTimer;
	NSTimer* _hideTimer;
	double _displayStartTime;
	NSProgress* _urlProgress;

}

@property (setter=_setWindow:,getter=_window,nonatomic,retain) UIWindow * window;                                                  //@synthesize window=_window - In the implementation block
@property (setter=_setAlertController:,getter=_alertController,nonatomic,retain) UIAlertController * alertController;              //@synthesize alertController=_alertController - In the implementation block
@property (setter=_setDismissalHandler:,getter=_dismissalHandler,nonatomic,copy) id dismissalHandler;                              //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
@property (setter=_setPreDisplayTestBlock:,getter=_preDisplaySetBlock,nonatomic,copy) id preDisplayTestBlock;                      //@synthesize preDisplayTestBlock=_preDisplayTestBlock - In the implementation block
@property (setter=_setProgress:,getter=_progress,nonatomic,retain) NSProgress * progress;                                          //@synthesize progress=_progress - In the implementation block
@property (setter=_setShowTimer:,getter=_showTimer,nonatomic,retain) NSTimer * showTimer;                                          //@synthesize showTimer=_showTimer - In the implementation block
@property (setter=_setHideTimer:,getter=_hideTimer,nonatomic,retain) NSTimer * hideTimer;                                          //@synthesize hideTimer=_hideTimer - In the implementation block
@property (assign,setter=_setDisplayStartTime:,getter=_displayStartTime,nonatomic) double displayStartTime;                        //@synthesize displayStartTime=_displayStartTime - In the implementation block
@property (nonatomic,retain) NSProgress * urlProgress;                                                                             //@synthesize urlProgress=_urlProgress - In the implementation block
@property (assign,nonatomic) double displayDelaySeconds;                                                                           //@synthesize displayDelaySeconds=_displayDelaySeconds - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
+(id)sharedInstance;
+(id)instanceForScene:(id)arg1 ;
-(id)_alertController;
-(id)_progress;
-(void)displayWithTitle:(id)arg1 message:(id)arg2 progress:(id)arg3 buttonTitle:(id)arg4 preDisplayTestBlock:(/*^block*/id)arg5 dismissalHandler:(/*^block*/id)arg6 ;
-(void)reconfigureWithTitle:(id)arg1 message:(id)arg2 progress:(id)arg3 buttonTitle:(id)arg4 dismissalHandler:(/*^block*/id)arg5 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)hideAfterDelay:(double)arg1 forceCompletion:(BOOL)arg2 afterMinimumUptimeDismissalHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)_reset;
-(void)displayForDownloadingURL:(id)arg1 copyToURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)displayForCopyingFileAtURL:(id)arg1 toURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_window;
-(NSString *)message;
-(void)_setAlertController:(id)arg1 ;
-(id)_showTimer;
-(id)_hideTimer;
-(void)_setWindow:(id)arg1 ;
-(NSString *)title;
-(NSProgress *)urlProgress;
-(void)_hideTimerAction:(id)arg1 ;
-(void)_setDismissalHandler:(/*^block*/id)arg1 ;
-(void)_showTimerAction:(id)arg1 ;
-(void)_setPreDisplayTestBlock:(/*^block*/id)arg1 ;
-(void)_setDisplayStartTime:(double)arg1 ;
-(void)_callAndClearDismissalHandlerWasDismissedByUser:(BOOL)arg1 ;
-(void)_hideImmediatelyWasDismissedByUser:(BOOL)arg1 ;
-(void)hideAfterMinimumUptimeWithDismissalHandler:(/*^block*/id)arg1 ;
-(void)_dismissButtonAction:(id)arg1 ;
-(double)displayDelaySeconds;
-(void)displayForDownloadingURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDisplayDelaySeconds:(double)arg1 ;
-(/*^block*/id)_preDisplaySetBlock;
-(void)setTitle:(NSString *)arg1 ;
-(void)_setProgress:(id)arg1 ;
-(void)_setShowTimer:(id)arg1 ;
-(void)_setHideTimer:(id)arg1 ;
-(/*^block*/id)_dismissalHandler;
-(void)setUrlProgress:(NSProgress *)arg1 ;
-(double)_displayStartTime;
@end

