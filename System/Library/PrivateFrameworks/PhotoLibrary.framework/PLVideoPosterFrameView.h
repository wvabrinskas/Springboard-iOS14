/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface PLVideoPosterFrameView : UIView {

	UIImageView* _imageView;
	long long _scaleMode;

}

@property (nonatomic,readonly) CGRect imageFrame; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)image;
-(void)layoutSubviews;
-(void)setScaleMode:(long long)arg1 ;
-(id)imageView;
-(CGRect)imageFrame;
-(void)dealloc;
@end
