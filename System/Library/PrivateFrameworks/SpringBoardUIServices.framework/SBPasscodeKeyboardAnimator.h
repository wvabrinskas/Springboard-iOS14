/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIKeyboardAnimator.h>

@protocol SBPasscodeKeyboardAnimatorDelegate;
@class BSAnimationSettings;

@interface SBPasscodeKeyboardAnimator : _UIKeyboardAnimator {

	BSAnimationSettings* _animationSettings;
	id<SBPasscodeKeyboardAnimatorDelegate> _delegate;

}

@property (nonatomic,retain) BSAnimationSettings * animationSettings;                             //@synthesize animationSettings=_animationSettings - In the implementation block
@property (assign,nonatomic,__weak) id<SBPasscodeKeyboardAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SBPasscodeKeyboardAnimatorDelegate>)delegate;
-(void)setAnimationSettings:(BSAnimationSettings *)arg1 ;
-(BSAnimationSettings *)animationSettings;
-(void)runAnimationWithState:(id)arg1 ;
-(void)prepareForAnimationWithState:(id)arg1 ;
-(void)performAnimation:(/*^block*/id)arg1 afterStarted:(/*^block*/id)arg2 onCompletion:(/*^block*/id)arg3 ;
-(void)completeAnimationWithState:(id)arg1 ;
-(void)setDelegate:(id<SBPasscodeKeyboardAnimatorDelegate>)arg1 ;
@end

