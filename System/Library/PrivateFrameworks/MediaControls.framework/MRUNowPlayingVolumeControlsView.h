/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>

@class MRUNowPlayingVolumeSlider, MRUVolumeStepperView, MRUVisualStylingProvider;

@interface MRUNowPlayingVolumeControlsView : UIView {

	BOOL _onScreen;
	MRUNowPlayingVolumeSlider* _slider;
	MRUVolumeStepperView* _stepper;
	MRUVisualStylingProvider* _stylingProvider;

}

@property (nonatomic,readonly) MRUNowPlayingVolumeSlider * slider;                    //@synthesize slider=_slider - In the implementation block
@property (nonatomic,readonly) MRUVolumeStepperView * stepper;                        //@synthesize stepper=_stepper - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;              //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,getter=isOnScreen,nonatomic) BOOL onScreen;                         //@synthesize onScreen=_onScreen - In the implementation block
-(MRUNowPlayingVolumeSlider *)slider;
-(BOOL)isOnScreen;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOnScreen:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(MRUVolumeStepperView *)stepper;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)updateVolumeCapabilities;
@end

