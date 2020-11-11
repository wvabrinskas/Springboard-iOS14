/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, NSString, UIView;

@interface CCUIContentModuleContainerView : UIView {

	NSArray* _views;
	BOOL _ignoreFrameUpdates;
	NSString* _moduleIdentifier;
	UIView* _c2AnimationContainerView;
	UIView* _caAnimationContainerView;

}

@property (nonatomic,copy,readonly) NSString * moduleIdentifier;               //@synthesize moduleIdentifier=_moduleIdentifier - In the implementation block
@property (nonatomic,readonly) UIView * c2AnimationContainerView;              //@synthesize c2AnimationContainerView=_c2AnimationContainerView - In the implementation block
@property (nonatomic,readonly) UIView * caAnimationContainerView;              //@synthesize caAnimationContainerView=_caAnimationContainerView - In the implementation block
@property (nonatomic,readonly) UIView * containerView; 
@property (assign,nonatomic) BOOL ignoreFrameUpdates;                          //@synthesize ignoreFrameUpdates=_ignoreFrameUpdates - In the implementation block
-(void)setIgnoreFrameUpdates:(BOOL)arg1 ;
-(UIView *)caAnimationContainerView;
-(UIView *)containerView;
-(void)layoutSubviews;
-(NSString *)moduleIdentifier;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithModuleIdentifier:(id)arg1 options:(unsigned long long)arg2 ;
-(UIView *)c2AnimationContainerView;
-(BOOL)ignoreFrameUpdates;
@end
