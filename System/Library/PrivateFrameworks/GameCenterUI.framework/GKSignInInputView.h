/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint;

@interface GKSignInInputView : UIView {

	NSLayoutConstraint* _topToSignInBaselineConstraint;
	NSLayoutConstraint* _bottomToSignInBaselineConstraint;
	NSLayoutConstraint* _signInBaselineToPromptTextTopConstraint;
	NSLayoutConstraint* _inputViewHeightConstraint;
	NSLayoutConstraint* _promptTextToProgressIndicatorTopConstraint;
	NSLayoutConstraint* _signInFormToSignInLabelTopConstraint;
	NSLayoutConstraint* _signInInputViewHeightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * topToSignInBaselineConstraint;                           //@synthesize topToSignInBaselineConstraint=_topToSignInBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomToSignInBaselineConstraint;                        //@synthesize bottomToSignInBaselineConstraint=_bottomToSignInBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * signInBaselineToPromptTextTopConstraint;                 //@synthesize signInBaselineToPromptTextTopConstraint=_signInBaselineToPromptTextTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * inputViewHeightConstraint;                               //@synthesize inputViewHeightConstraint=_inputViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * promptTextToProgressIndicatorTopConstraint;              //@synthesize promptTextToProgressIndicatorTopConstraint=_promptTextToProgressIndicatorTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * signInFormToSignInLabelTopConstraint;                    //@synthesize signInFormToSignInLabelTopConstraint=_signInFormToSignInLabelTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * signInInputViewHeightConstraint;                         //@synthesize signInInputViewHeightConstraint=_signInInputViewHeightConstraint - In the implementation block
-(id)allVariableConstraints;
-(void)setupConstraintConstantsForOrientation:(long long)arg1 ;
-(NSLayoutConstraint *)topToSignInBaselineConstraint;
-(void)setTopToSignInBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomToSignInBaselineConstraint;
-(void)setBottomToSignInBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)signInBaselineToPromptTextTopConstraint;
-(void)setSignInBaselineToPromptTextTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)signInFormToSignInLabelTopConstraint;
-(NSLayoutConstraint *)promptTextToProgressIndicatorTopConstraint;
-(void)setPromptTextToProgressIndicatorTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSignInFormToSignInLabelTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)signInInputViewHeightConstraint;
-(void)setSignInInputViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)inputViewHeightConstraint;
-(void)setInputViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

