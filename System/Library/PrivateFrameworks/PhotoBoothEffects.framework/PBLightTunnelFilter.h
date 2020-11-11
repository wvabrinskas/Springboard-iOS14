/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoBoothEffects/PhotoBoothEffects-Structs.h>
#import <PhotoBoothEffects/PBFilter.h>

@interface PBLightTunnelFilter : PBFilter {

	BOOL firstTime;
	float _inputAmount;
	float lastInputX;
	float lastInputY;
	float lastInputRadius;
	float lastInputRotation;
	float inputRotation;
	CGPoint inputPoint;

}

@property (assign) CGPoint inputPoint; 
@property (assign) float inputAmount; 
@property (assign) float inputRotation; 
-(void)setInputPoint:(CGPoint)arg1 ;
-(float)inputAmount;
-(void)setInputAmount:(float)arg1 ;
-(float)inputRotation;
-(void)setInputRotation:(float)arg1 ;
-(CGPoint)inputPoint;
-(void)setDefaults;
-(id)ciFilterName;
-(BOOL)needsWrapMirror;
-(void)applyParametersToCIFilter:(BOOL)arg1 extent:(CGRect)arg2 ;
@end
