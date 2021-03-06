/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WBSFluidProgressControllerDelegate, WBSFluidProgressControllerWindowDelegate;
@interface WBSFluidProgressController : NSObject {

	id<WBSFluidProgressControllerDelegate> _delegate;
	id<WBSFluidProgressControllerWindowDelegate> _windowDelegate;

}

@property (__weak) id<WBSFluidProgressControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<WBSFluidProgressControllerWindowDelegate> windowDelegate;              //@synthesize windowDelegate=_windowDelegate - In the implementation block
-(id<WBSFluidProgressControllerWindowDelegate>)windowDelegate;
-(void)setWindowDelegate:(id<WBSFluidProgressControllerWindowDelegate>)arg1 ;
-(id<WBSFluidProgressControllerDelegate>)delegate;
-(void)finishFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)updateFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)animationStepCompleted:(id)arg1 ;
-(void)startRocketEffectWithProgressStateSource:(id)arg1 ;
-(void)frontmostTabDidChange;
-(void)setDelegate:(id<WBSFluidProgressControllerDelegate>)arg1 ;
-(void)_updateFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)startFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)progressStateSourceDidCommitLoad:(id)arg1 loadingSingleResource:(BOOL)arg2 ;
-(void)cancelFluidProgressWithProgressStateSource:(id)arg1 ;
@end

