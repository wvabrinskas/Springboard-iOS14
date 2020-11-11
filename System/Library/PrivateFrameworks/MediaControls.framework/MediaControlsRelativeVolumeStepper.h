/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>

@class MPVolumeController, MTVisualStylingProvider, MTMaterialView, MPButton, NSBundle;

@interface MediaControlsRelativeVolumeStepper : UIView {

	MPVolumeController* _volumeController;
	MTVisualStylingProvider* _visualStylingProvider;
	MTMaterialView* _increaseBackground;
	MTMaterialView* _decreaseBackground;
	MPButton* _increaseButton;
	MPButton* _decreaseButton;
	NSBundle* _mediaControlsBundle;

}

@property (nonatomic,retain) MTMaterialView * increaseBackground;                          //@synthesize increaseBackground=_increaseBackground - In the implementation block
@property (nonatomic,retain) MTMaterialView * decreaseBackground;                          //@synthesize decreaseBackground=_decreaseBackground - In the implementation block
@property (nonatomic,retain) MPButton * increaseButton;                                    //@synthesize increaseButton=_increaseButton - In the implementation block
@property (nonatomic,retain) MPButton * decreaseButton;                                    //@synthesize decreaseButton=_decreaseButton - In the implementation block
@property (nonatomic,retain) NSBundle * mediaControlsBundle;                               //@synthesize mediaControlsBundle=_mediaControlsBundle - In the implementation block
@property (nonatomic,retain) MPVolumeController * volumeController;                        //@synthesize volumeController=_volumeController - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * visualStylingProvider;              //@synthesize visualStylingProvider=_visualStylingProvider - In the implementation block
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(void)increaseTouchUpInside:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(MPVolumeController *)volumeController;
-(MTMaterialView *)decreaseBackground;
-(void)setVolumeController:(MPVolumeController *)arg1 ;
-(void)decreaseButtonHoldBegan:(id)arg1 ;
-(MPButton *)increaseButton;
-(void)decreaseTouchUpInside:(id)arg1 ;
-(void)setIncreaseBackground:(MTMaterialView *)arg1 ;
-(void)setDecreaseBackground:(MTMaterialView *)arg1 ;
-(MPButton *)decreaseButton;
-(void)layoutSubviews;
-(void)decreaseButtonHoldReleased:(id)arg1 ;
-(void)setIncreaseButton:(MPButton *)arg1 ;
-(void)setMediaControlsBundle:(NSBundle *)arg1 ;
-(void)setDecreaseButton:(MPButton *)arg1 ;
-(NSBundle *)mediaControlsBundle;
-(MTMaterialView *)increaseBackground;
-(void)increaseButtonHoldReleased:(id)arg1 ;
-(void)increaseButtonHoldBegan:(id)arg1 ;
@end
