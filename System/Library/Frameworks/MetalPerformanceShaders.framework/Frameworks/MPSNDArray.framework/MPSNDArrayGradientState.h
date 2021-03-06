/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSCore/MPSState.h>

@interface MPSNDArrayGradientState : MPSState {

	unsigned long long _srcCount;
	NDArraySrcInfo* _srcInfo;
	unsigned _provenance;

}
-(id)initWithSourceCount:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg1 sourceGradientIndex:(unsigned long long)arg2 ;
@end

