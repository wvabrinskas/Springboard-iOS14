/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LocalAuthenticationPrivateUI/LocalAuthenticationPrivateUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIView, UIImageView, UILabel, NSString;

@interface LAUIHorizontalArrowView : UIView {

	UIColor* _color;
	BOOL _effective_animating;
	unsigned short _dismissal_animation_count;
	BOOL _animated;
	double _resting_height;
	UIView* _container;
	UIView* _arrow_container;
	UIImageView* _head;
	UIView* _tail_container;
	UIImageView* _tail;
	UILabel* _label;
	BOOL _pulsing;
	periodic_animation_state _head_pulse;
	periodic_animation_state _tail_container_pulse;
	periodic_animation_state _tail_counter_pulse;
	BOOL _animating;
	long long _direction;
	double _displacement;
	NSString* _text;
	CGSize _maximum_line_size;

}

@property (assign,getter=isAnimating,nonatomic) BOOL animating;              //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic) long long direction;                            //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double displacement;                            //@synthesize displacement=_displacement - In the implementation block
@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) CGSize maximumLineSize;                         //@synthesize maximum_line_size=_maximum_line_size - In the implementation block
+(unsigned)pkui_cameraEdgeForScreen:(id)arg1 ;
-(BOOL)pkui_updateFrame;
-(void)setText:(NSString *)arg1 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(NSString *)text;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDisplacement:(double)arg1 ;
-(BOOL)isAnimating;
-(void)_updateFont;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)dealloc;
-(double)displacement;
-(void)boldTextStatusDidChange:(id)arg1 ;
-(void)_updateViewsWithColor;
-(void)_updateAnimatingAnimated:(BOOL)arg1 ;
-(void)_updateDirectionTransform;
-(void)_updatePulsingWithDelay:(double)arg1 ;
-(void)_layoutIfNeededAnimated:(BOOL)arg1 ;
-(void)_updateLabelSize;
-(void)setMaximumLineSize:(CGSize)arg1 ;
-(CGSize)maximumLineSize;
@end
