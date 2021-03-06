/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class BSUIAnimationFactory, UIView;

@interface SBCrossfadeView : UIView {

	BSUIAnimationFactory* _animationFactory;
	UIView* _startView;
	UIView* _endView;
	BOOL _translucent;
	BOOL _crossfaded;
	BOOL _allowsGroupOpacityDuringCrossfade;
	BOOL _adaptsAnimationFactoryTimingFunction;

}

@property (nonatomic,retain) BSUIAnimationFactory * animationFactory;                //@synthesize animationFactory=_animationFactory - In the implementation block
@property (assign,nonatomic) BOOL allowsGroupOpacityDuringCrossfade;                 //@synthesize allowsGroupOpacityDuringCrossfade=_allowsGroupOpacityDuringCrossfade - In the implementation block
@property (assign,nonatomic) BOOL adaptsAnimationFactoryTimingFunction;              //@synthesize adaptsAnimationFactoryTimingFunction=_adaptsAnimationFactoryTimingFunction - In the implementation block
+(id)crossfadeViewWithStartView:(id)arg1 endView:(id)arg2 translucent:(BOOL)arg3 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(BOOL)allowsGroupOpacityDuringCrossfade;
-(void)crossfadeWithCompletion:(/*^block*/id)arg1 ;
-(void)layoutSubviews;
-(id)_initWithStartView:(id)arg1 endView:(id)arg2 translucent:(BOOL)arg3 ;
-(void)setAdaptsAnimationFactoryTimingFunction:(BOOL)arg1 ;
-(void)setAnimationFactory:(BSUIAnimationFactory *)arg1 ;
-(BSUIAnimationFactory *)animationFactory;
-(BOOL)adaptsAnimationFactoryTimingFunction;
-(void)setAllowsGroupOpacityDuringCrossfade:(BOOL)arg1 ;
@end

