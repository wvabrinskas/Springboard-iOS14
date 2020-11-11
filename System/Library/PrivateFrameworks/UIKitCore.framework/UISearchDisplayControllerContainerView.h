/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UIView;

@interface UISearchDisplayControllerContainerView : UIView {

	BOOL _collapsedTopView;
	NSLayoutConstraint* _topViewHeightConstraint;
	NSLayoutConstraint* _topViewAttributeTopConstraint;
	UIView* _topView;
	UIView* _bottomView;
	UIView* _behindView;

}

@property (nonatomic,retain) NSLayoutConstraint * topViewHeightConstraint;                    //@synthesize topViewHeightConstraint=_topViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topViewAttributeTopConstraint;              //@synthesize topViewAttributeTopConstraint=_topViewAttributeTopConstraint - In the implementation block
@property (nonatomic,readonly) UIView * topView;                                              //@synthesize topView=_topView - In the implementation block
@property (nonatomic,readonly) UIView * bottomView;                                           //@synthesize bottomView=_bottomView - In the implementation block
@property (nonatomic,readonly) UIView * behindView;                                           //@synthesize behindView=_behindView - In the implementation block
-(UIView *)topView;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)setTopViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTopViewAttributeTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topViewAttributeTopConstraint;
-(UIView *)bottomView;
-(UIView *)behindView;
-(void)updateTopViewHeight:(double)arg1 ;
-(void)collapseTopView;
-(void)setBottomViewUserInteractionEnabled:(BOOL)arg1 ;
-(NSLayoutConstraint *)topViewHeightConstraint;
-(void)updateTopAttributeConstant:(double)arg1 ;
-(void)updateTopViewHeight:(double)arg1 animateUpdate:(BOOL)arg2 ;
-(void)configureInteractionForContainment:(BOOL)arg1 ;
-(void)adjustTopAttributeConstantByDelta:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 topViewHeight:(double)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end
