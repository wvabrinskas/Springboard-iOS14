/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CIConvexFill : CIFilter {

	CIImage* inputImage;
	CIImage* inputCenter;
	NSNumber* inputThreshold;
	CIVector* inputAreaThresholdLoHi;
	NSNumber* inputSplat;

}

@property (nonatomic,retain) CIImage * inputCenter; 
@property (nonatomic,retain) NSNumber * inputThreshold; 
@property (nonatomic,retain) CIVector * inputAreaThresholdLoHi; 
@property (nonatomic,retain) NSNumber * inputSplat; 
-(CIImage *)inputCenter;
-(void)setInputCenter:(CIImage *)arg1 ;
-(NSNumber *)inputThreshold;
-(void)setInputThreshold:(NSNumber *)arg1 ;
-(NSNumber *)inputSplat;
-(void)setInputSplat:(NSNumber *)arg1 ;
-(CIVector *)inputAreaThresholdLoHi;
-(void)setInputAreaThresholdLoHi:(CIVector *)arg1 ;
-(id)outputImage;
@end

