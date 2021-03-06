/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIPresentationController.h>

@class UIVisualEffectView;

@interface VUIDialogPresentationController : UIPresentationController {

	UIVisualEffectView* _backdropView;
	/*^block*/id _completedAnimationBlock;
	CGSize _modalSize;

}

@property (nonatomic,readonly) UIVisualEffectView * backdropView; 
@property (assign,nonatomic) CGSize modalSize;                                 //@synthesize modalSize=_modalSize - In the implementation block
@property (nonatomic,copy) id completedAnimationBlock;                         //@synthesize completedAnimationBlock=_completedAnimationBlock - In the implementation block
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(long long)presentationStyle;
-(void)_tapGesture:(id)arg1 ;
-(UIVisualEffectView *)backdropView;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionWillBegin;
-(void)dealloc;
-(void)setModalSize:(CGSize)arg1 ;
-(void)setCompletedAnimationBlock:(id)arg1 ;
-(id)completedAnimationBlock;
-(void)_layoutPresentedView;
-(CGSize)modalSize;
@end

