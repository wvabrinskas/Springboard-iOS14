/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@interface FigCaptureSessionPreparedBracket : NSObject {

	unsigned _outputFormat;
	SCD_Struct_BW2 _outputDimensions;
	unsigned _imageCount;
	int _colorSpaceProperties;

}

@property (assign,nonatomic) unsigned outputFormat;                        //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 outputDimensions;              //@synthesize outputDimensions=_outputDimensions - In the implementation block
@property (assign,nonatomic) unsigned imageCount;                          //@synthesize imageCount=_imageCount - In the implementation block
@property (assign,nonatomic) int colorSpaceProperties;                     //@synthesize colorSpaceProperties=_colorSpaceProperties - In the implementation block
-(int)colorSpaceProperties;
-(unsigned)imageCount;
-(SCD_Struct_BW2)outputDimensions;
-(unsigned)outputFormat;
-(void)setOutputFormat:(unsigned)arg1 ;
-(void)setImageCount:(unsigned)arg1 ;
-(void)setColorSpaceProperties:(int)arg1 ;
-(void)setOutputDimensions:(SCD_Struct_BW2)arg1 ;
@end

