/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIImage;

@interface SBFluidSwitcherIconImageContainerView : UIView {

	UIImageView* _imageView;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;              //@synthesize image=_image - In the implementation block
-(void)_configureIconImageView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)_crossfadeToImage:(id)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)layoutSubviews;
@end

