/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@protocol SBCrossfadingIconImageSource;
@class UIView;

@interface SBIconImageCrossfadeView : SBFTouchPassThroughView {

	double _containerScaleX;
	double _containerScaleY;
	BOOL _masksCorners;
	BOOL _performsTrueCrossfade;
	unsigned long long _crossfadeStyle;
	UIView* _containerView;
	id<SBCrossfadingIconImageSource> _iconImageSource;
	UIView* _iconImageView;
	UIView* _crossfadeView;
	UIView* _crossfadeContainerView;
	double _morphFraction;
	CGPoint _stretchAnchorPoint;

}

@property (nonatomic,readonly) UIView * containerView;                                        //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) id<SBCrossfadingIconImageSource> iconImageSource;              //@synthesize iconImageSource=_iconImageSource - In the implementation block
@property (nonatomic,readonly) UIView * iconImageView;                                        //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,readonly) UIView * crossfadeView;                                        //@synthesize crossfadeView=_crossfadeView - In the implementation block
@property (nonatomic,readonly) UIView * crossfadeContainerView;                               //@synthesize crossfadeContainerView=_crossfadeContainerView - In the implementation block
@property (nonatomic,readonly) double morphFraction;                                          //@synthesize morphFraction=_morphFraction - In the implementation block
@property (assign,nonatomic) BOOL masksCorners;                                               //@synthesize masksCorners=_masksCorners - In the implementation block
@property (assign,nonatomic) BOOL performsTrueCrossfade;                                      //@synthesize performsTrueCrossfade=_performsTrueCrossfade - In the implementation block
@property (assign,nonatomic) CGPoint stretchAnchorPoint;                                      //@synthesize stretchAnchorPoint=_stretchAnchorPoint - In the implementation block
@property (assign,nonatomic) unsigned long long crossfadeStyle;                               //@synthesize crossfadeStyle=_crossfadeStyle - In the implementation block
@property (nonatomic,readonly) BOOL reparentsSourceView; 
+(Class)_containerViewClass;
-(UIView *)iconImageView;
-(void)setPerformsTrueCrossfade:(BOOL)arg1 ;
-(UIView *)crossfadeView;
-(void)prepareGeometry;
-(void)_applyCrossfadeScaleX:(double)arg1 scaleY:(double)arg2 ;
-(void)_applyCornerRadius:(double)arg1 ;
-(void)_updateCornerMask;
-(void)setCrossfadeFraction:(double)arg1 ;
-(void)setMorphFraction:(double)arg1 ;
-(UIView *)crossfadeContainerView;
-(void)cleanup;
-(UIView *)containerView;
-(double)morphFraction;
-(void)layoutSubviews;
-(id)initWithSource:(id)arg1 crossfadeView:(id)arg2 ;
-(void)_setCornerRadiusEnabled:(BOOL)arg1 ;
-(void)setMasksCorners:(BOOL)arg1 ;
-(BOOL)reparentsSourceView;
-(id<SBCrossfadingIconImageSource>)iconImageSource;
-(void)setCrossfadeStyle:(unsigned long long)arg1 ;
-(CGPoint)stretchAnchorPoint;
-(BOOL)performsTrueCrossfade;
-(BOOL)masksCorners;
-(void)setAppSnapshotCornerRadius:(double)arg1 ;
-(unsigned long long)crossfadeStyle;
-(void)setStretchAnchorPoint:(CGPoint)arg1 ;
@end

