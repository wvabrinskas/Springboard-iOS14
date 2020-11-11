/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayUnaryGradientKernel.h>

@interface MPSNDArrayLogSoftMaxGradient : MPSNDArrayUnaryGradientKernel {

	unsigned long long _axis;

}

@property (assign,nonatomic) unsigned long long axis;              //@synthesize axis=_axis - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(unsigned long long)axis;
-(void)setAxis:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 axis:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1 ;
-(1)dimensionsToBeRetained;
@end
