/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuickLook/QuickLook-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PHVideoScrubberFilmstripView.h>

@class AVAsset, UIImage, UIView, UIImageView, NSString;

@interface QLWaveformView : UIView <PHVideoScrubberFilmstripView> {

	CGSize _waveSize;
	UIView* _lineView;
	UIImage* _waveImage;
	UIImageView* _waveView;
	AVAsset* _asset;
	UIImage* placeholderImage;
	CGRect visibleRect;

}

@property (nonatomic,copy) AVAsset * asset;                           //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage; 
@property (assign,nonatomic) CGRect visibleRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)visibleRect;
-(AVAsset *)asset;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)setAsset:(AVAsset *)arg1 ;
-(void)_updateWithWaveformImage:(id)arg1 ;
-(void)_expandWaveform;
-(void)updateImage;
-(void)layoutSubviews;
-(UIImage *)placeholderImage;
-(void)setVisibleRect:(CGRect)arg1 ;
@end

