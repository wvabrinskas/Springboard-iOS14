/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class AVLayoutView;

@interface AVBackgroundView : UIView {

	BOOL _automaticallyDrawsRoundedCorners;
	BOOL _prefersLowQualityEffects;
	BOOL _circular;
	AVLayoutView* _layoutView;

}

@property (nonatomic,retain) AVLayoutView * layoutView;                          //@synthesize layoutView=_layoutView - In the implementation block
@property (assign,nonatomic) BOOL automaticallyDrawsRoundedCorners;              //@synthesize automaticallyDrawsRoundedCorners=_automaticallyDrawsRoundedCorners - In the implementation block
@property (assign,nonatomic) BOOL prefersLowQualityEffects;                      //@synthesize prefersLowQualityEffects=_prefersLowQualityEffects - In the implementation block
@property (assign,getter=isCircular,nonatomic) BOOL circular;                    //@synthesize circular=_circular - In the implementation block
-(void)_ensureOrRemoveLayoutView;
-(AVLayoutView *)layoutView;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_isContainedInOverlappingBackgroundView;
-(BOOL)automaticallyDrawsRoundedCorners;
-(BOOL)prefersLowQualityEffects;
-(void)setAutomaticallyDrawsRoundedCorners:(BOOL)arg1 ;
-(void)_updateBackdropShape;
-(void)addSubview:(id)arg1 applyingMaterialStyle:(long long)arg2 tintEffectStyle:(long long)arg3 ;
-(void)setPrefersLowQualityEffects:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)didMoveToSuperview;
-(void)setCircular:(BOOL)arg1 ;
-(BOOL)isCircular;
-(void)setLayoutView:(AVLayoutView *)arg1 ;
@end
