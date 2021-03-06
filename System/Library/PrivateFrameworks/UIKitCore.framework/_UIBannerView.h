/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIBannerContent, CALayer, UIView, UILabel, UIImageView;

@interface _UIBannerView : UIView {

	BOOL _highlighted;
	_UIBannerContent* _content;
	CALayer* _backgroundLayer;
	UIView* _highlightView;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UIImageView* _imageView;

}

@property (nonatomic,retain) _UIBannerContent * content;              //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) CALayer * backgroundLayer;               //@synthesize backgroundLayer=_backgroundLayer - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                  //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                     //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                 //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                        //@synthesize highlighted=_highlighted - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setHighlightView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)highlightView;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(CALayer *)backgroundLayer;
-(void)setBackgroundLayer:(CALayer *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 initialPress:(BOOL)arg2 ;
-(void)setContent:(_UIBannerContent *)arg1 ;
-(void)layoutSubviews;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)imageView;
-(UILabel *)bodyLabel;
-(BOOL)highlighted;
-(_UIBannerContent *)content;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updateConstraints;
@end

