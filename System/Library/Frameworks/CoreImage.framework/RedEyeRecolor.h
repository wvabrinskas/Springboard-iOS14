/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface RedEyeRecolor : CIFilter {

	CIImage* inputImage;
	CIImage* inputSource;
	CIImage* inputMask;
	NSNumber* inputNoiseAmount;
	NSNumber* inputBrightness;
	NSNumber* inputRecovery;
	CIVector* inputExtent;
	NSNumber* inputWhiteCutoff;
	NSNumber* inputChroma;

}

@property (nonatomic,retain) CIImage * inputSource; 
@property (nonatomic,retain) CIImage * inputMask; 
@property (nonatomic,retain) NSNumber * inputNoiseAmount; 
@property (nonatomic,retain) NSNumber * inputBrightness; 
@property (nonatomic,retain) NSNumber * inputRecovery; 
@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) NSNumber * inputWhiteCutoff; 
@property (nonatomic,retain) NSNumber * inputChroma; 
-(CIImage *)inputSource;
-(void)setInputSource:(CIImage *)arg1 ;
-(NSNumber *)inputBrightness;
-(void)setInputBrightness:(NSNumber *)arg1 ;
-(id)kernelRepair;
-(void)setInputMask:(CIImage *)arg1 ;
-(id)kernelRecovery;
-(NSNumber *)inputNoiseAmount;
-(NSNumber *)inputRecovery;
-(void)setInputNoiseAmount:(NSNumber *)arg1 ;
-(void)setInputRecovery:(NSNumber *)arg1 ;
-(NSNumber *)inputWhiteCutoff;
-(void)setInputWhiteCutoff:(NSNumber *)arg1 ;
-(NSNumber *)inputChroma;
-(void)setInputChroma:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputMask;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
@end

