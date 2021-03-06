/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LocalAuthenticationPrivateUI/LocalAuthenticationPrivateUI-Structs.h>
#import <LocalAuthenticationPrivateUI/LAUIRenderLoop.h>

@protocol CAMetalDrawable, MTLDevice;
@class CAMetalLayer, CALayer;

@interface LAUIMetalRenderLoop : LAUIRenderLoop {

	CAMetalLayer* _layer;
	BOOL _drawable_size_dirty;
	id<CAMetalDrawable> _current_drawable;
	unsigned long long _pixel_format;
	id<MTLDevice> _device;
	CGSize _drawable_size;

}

@property (nonatomic,readonly) unsigned long long pixelFormat;                             //@synthesize pixel_format=_pixel_format - In the implementation block
@property (nonatomic,readonly) id<MTLDevice> device;                                       //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) CALayer * layer; 
@property (assign,nonatomic) BOOL framebufferOnly; 
@property (assign,nonatomic) CGSize drawableSize;                                          //@synthesize drawable_size=_drawable_size - In the implementation block
@property (assign,nonatomic,__weak) id<LAUIMetalRenderLoopDelegate> delegate; 
-(BOOL)isDrawableAvailable;
-(id<MTLDevice>)device;
-(BOOL)framebufferOnly;
-(id)init;
-(id)currentDrawable;
-(void)setDrawableSize:(CGSize)arg1 ;
-(unsigned long long)pixelFormat;
-(CALayer *)layer;
-(CGSize)drawableSize;
-(void)setFramebufferOnly:(BOOL)arg1 ;
-(void)_didInvalidate;
-(void)_didDraw;
-(void)_willDraw;
-(id)initWithPixelFormat:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(BOOL)_preferredPauseState;
@end

