/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class UIView, NSMutableArray;

@interface CACContainerViewController : UIViewController {

	UIView* _viewAboveContainedViews;
	NSMutableArray* _viewControllers;

}

@property (nonatomic,retain) NSMutableArray * viewControllers;                //@synthesize viewControllers=_viewControllers - In the implementation block
@property (nonatomic,readonly) UIView * viewAboveContainedViews; 
-(void)setViewControllers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)viewControllers;
-(BOOL)_canShowWhileLocked;
-(void)loadView;
-(UIView *)viewAboveContainedViews;
-(void)installViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)uninstallViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end
