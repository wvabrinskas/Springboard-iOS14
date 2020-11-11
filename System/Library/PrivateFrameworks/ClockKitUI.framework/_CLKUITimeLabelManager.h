/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIView, UIColor;


@protocol _CLKUITimeLabelManager
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) CGSize intrinsicSize; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) BOOL animationsPaused; 
@property (nonatomic,readonly) UIEdgeInsets opticalInsets; 
@property (assign,nonatomic) BOOL showSeconds; 
@required
-(id)viewForLastBaselineLayout;
-(UIView *)view;
-(CGSize)intrinsicSize;
-(UIColor *)textColor;
-(void)setTextColor:(id)arg1;
-(void)traitCollectionDidChange:(id)arg1;
-(void)setMaxWidth:(double)arg1;
-(void)setStyle:(id)arg1;
-(double)_lastLineBaseline;
-(void)updateTimeText;
-(CGSize*)sizeThatFits;
-(UIEdgeInsets)opticalInsets;
-(void)setShowSeconds:(BOOL)arg1;
-(void)setShowsDesignator:(BOOL)arg1;
-(BOOL)showSeconds;
-(id)effectiveFont;
-(id)initWithForDevice:(id)arg1 timeFormatter:(id)arg2 options:(unsigned long long)arg3 labelFactory:(/*^block*/id)arg4;
-(void)sizeViewToFit;
-(id)effectiveAttributedText;
-(void)enumerateUnderlyingLabelsWithBlock:(/*^block*/id)arg1;
-(BOOL)animationsPaused;
-(void)setAnimationsPaused:(BOOL)arg1;

@end
