/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/ControlCenter/Bundles/MediaControlsAudioModule.bundle/MediaControlsAudioModule
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CCUIContentModule.h>
#import <MediaControlsAudioModule/MediaControlsVolumeViewControllerDelegate.h>

@class MediaControlsVolumeController, MediaControlsVolumeViewController, MediaControlsVolumeBackgroundViewController, CCUIContentModuleContext, NSString;

@interface MediaControlsAudioModule : NSObject <CCUIContentModule, MediaControlsVolumeViewControllerDelegate> {

	MediaControlsVolumeController* _volumeController;
	MediaControlsVolumeViewController* _moduleViewController;
	MediaControlsVolumeBackgroundViewController* _backgroundViewController;
	CCUIContentModuleContext* _contentModuleContext;

}

@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                                                      //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController*<CCUIContentModuleBackgroundViewController>)backgroundViewController;
-(id)init;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(void)dismissMediaControlsVolumeViewController:(id)arg1 ;
-(CCUIContentModuleContext *)contentModuleContext;
-(UIViewController*<CCUIContentModuleContentViewController>)contentViewController;
@end

