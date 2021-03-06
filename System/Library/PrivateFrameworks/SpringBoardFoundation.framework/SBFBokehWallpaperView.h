/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFWallpaperView.h>

@class CADisplayLink, SBFMotionManager, NSMutableArray, NSDictionary, UIImage, CAGradientLayer;

@interface SBFBokehWallpaperView : SBFWallpaperView {

	CADisplayLink* _displayLink;
	SBFMotionManager* _motionManager;
	NSMutableArray* _circleArray;
	NSDictionary* _options;
	long long _circleFillColor;
	UIImage* _cachedSnapshotImage;
	IOSurfaceRef _snapshotBuffer;
	UIImage* _cachedFolderBlurImage;
	BOOL _isOnLockScreen;
	BOOL _contentIsVisible;
	BOOL _hasSingleVariant;
	BOOL _blursNeedInvalidation;

}

@property (nonatomic,readonly) CAGradientLayer * layer; 
+(id)silverGradient;
+(Class)layerClass;
+(id)defaultGradientSilver;
+(BOOL)_allowsParallax;
+(id)greenGradient;
+(id)defaultGradient;
+(id)yellowGradient;
+(id)blueGradient;
+(id)orangeGradient;
+(id)redGradient;
+(id)purpleGradient;
-(id)cacheGroup;
-(void)_wallpaperDidChange:(id)arg1 ;
-(id)snapshotImage;
-(id)_computeAverageColor;
-(void)_styleModeChanged:(id)arg1 ;
-(void)setWallpaperAnimationEnabled:(BOOL)arg1 ;
-(void)_thermalStateDidChange:(id)arg1 ;
-(id)_imageFromColor:(id)arg1 ;
-(void)_initDisplayLink;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6 ;
-(CAGradientLayer *)layer;
-(BOOL)_needsFallbackImageForBackdropGeneratedImage:(id)arg1 ;
-(long long)wallpaperType;
-(void)_updateVariantStatus;
-(void)_handleVariantChange;
-(CGRect)newRectForCircle:(id)arg1 potentialX:(double)arg2 potentialY:(double)arg3 ;
-(void)_screenDimmed:(id)arg1 ;
-(void)_screenUndimmed:(id)arg1 ;
-(BOOL)_lowPowerModeIsEnabled;
-(BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2 ;
-(id)_imageForBackdropParameters:(SCD_Struct_SB17)arg1 includeTint:(BOOL)arg2 overrideTraitCollection:(id)arg3 ;
-(void)_screenDidUpdate;
-(void)_updateCircleFillColor;
-(void)_destroyDisplayLink;
-(void)_toggleCircleAnimations:(BOOL)arg1 ;
-(void)_updateGradientAndFillColor;
-(IOSurfaceRef)_createSnapshotBuffer;
-(void)_updateOrientationIfNeeded;
-(id)_folderBlurImage;
-(void)_addBokehCircles:(long long)arg1 ;
-(BOOL)_thermalStateIsCritical;
-(BOOL)_layerIsOutOfBounds:(id)arg1 ;
-(void)_correctGyroValues:(inout double*)arg1 y:(inout double*)arg2 ;
-(long long)userInterfaceStyle;
-(void)invalidate;
-(void)dealloc;
@end

