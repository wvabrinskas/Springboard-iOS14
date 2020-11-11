/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UITapGestureRecognizer, SKUIImagePlaceholder, CAShapeLayer, UIImage;

@interface SKUIImageView : UIImageView {

	UITapGestureRecognizer* _tapRecognizer;
	CGSize _lastLayoutSize;
	SKUIImagePlaceholder* _placeholder;
	/*^block*/id _cornerPathBlock;
	CGSize _imageSize;

}

@property (nonatomic,readonly) CAShapeLayer * layer; 
@property (nonatomic,copy) id cornerPathBlock;                                      //@synthesize cornerPathBlock=_cornerPathBlock - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                      //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapRecognizer; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) SKUIImagePlaceholder * placeholder;                    //@synthesize placeholder=_placeholder - In the implementation block
+(Class)layerClass;
-(CGSize)imageSize;
-(UITapGestureRecognizer *)tapRecognizer;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setPlaceholder:(SKUIImagePlaceholder *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContents:(id)arg1 ;
-(SKUIImagePlaceholder *)placeholder;
-(id)cornerPathBlock;
-(void)setCornerPathBlock:(id)arg1 ;
@end
