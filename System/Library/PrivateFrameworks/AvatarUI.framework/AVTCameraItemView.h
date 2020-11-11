/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAShapeLayer, UIImageView, UIImageSymbolConfiguration;

@interface AVTCameraItemView : UIView {

	CAShapeLayer* _shapeLayer;
	UIImageView* _imageView;
	UIImageSymbolConfiguration* _cameraConfiguration;

}

@property (nonatomic,retain) CAShapeLayer * shapeLayer;                                     //@synthesize shapeLayer=_shapeLayer - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                       //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageSymbolConfiguration * cameraConfiguration;              //@synthesize cameraConfiguration=_cameraConfiguration - In the implementation block
-(UIImageSymbolConfiguration *)cameraConfiguration;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCameraConfiguration:(UIImageSymbolConfiguration *)arg1 ;
-(void)updateCameraImage;
-(CAShapeLayer *)shapeLayer;
-(void)layoutSubviews;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)imageView;
-(void)setShapeLayer:(CAShapeLayer *)arg1 ;
@end
