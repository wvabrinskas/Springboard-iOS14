/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIImageProcessorKernel.h>

@interface CIMorphologyProcessor : CIImageProcessorKernel
+(BOOL)canReduceOutputChannels;
+(CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(CGRect)arg3 ;
+(BOOL)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4 ;
+(BOOL)synchronizeInputs;
+(int)formatForInputAtIndex:(int)arg1 ;
+(BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1 ;
+(BOOL)allowSRGBTranferFuntionOnOutput;
+(int)outputFormat;
+(id)applyBoxToImage:(id)arg1 width:(int)arg2 height:(int)arg3 doMin:(BOOL)arg4 ;
@end

