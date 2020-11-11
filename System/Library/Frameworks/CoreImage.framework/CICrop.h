/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>
#import <libobjc.A.dylib/_CIFilterProperties.h>

@class CIImage, CIVector;

@interface CICrop : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	CIVector* inputRectangle;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputRectangle; 
+(id)customAttributes;
-(void)setInputRectangle:(CIVector *)arg1 ;
-(CIVector *)inputRectangle;
-(id)outputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
@end
