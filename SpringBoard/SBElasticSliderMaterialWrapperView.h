//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTMaterialShadowView, SBElasticSliderView;

@interface SBElasticSliderMaterialWrapperView : UIView
{
    UIView *_sliderWrapperView;
    UIView *_maskView;
    SBElasticSliderView *_sliderView;
    MTMaterialShadowView *_baseMaterialView;
    long long _shadowMode;
}


// Remaining properties
@property(readonly, nonatomic) MTMaterialShadowView *baseMaterialView; // @synthesize baseMaterialView=_baseMaterialView;
@property(readonly, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) long long shadowMode; // @synthesize shadowMode=_shadowMode;
@property(readonly, nonatomic) SBElasticSliderView *sliderView; // @synthesize sliderView=_sliderView;
@end
