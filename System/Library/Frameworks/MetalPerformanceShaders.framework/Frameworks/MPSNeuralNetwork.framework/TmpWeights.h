/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNConvolutionDataSource.h>

@protocol MPSCNNConvolutionDataSource;
@class MPSCNNConvolutionDescriptor, NSString;

@interface TmpWeights : NSObject <MPSCNNConvolutionDataSource> {

	id<MPSCNNConvolutionDataSource> _parentObj;
	MPSCNNConvolutionDescriptor* _convDesc;
	BOOL _hasBias;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)load;
-(unsigned)dataType;
-(void)purge;
-(id)label;
-(id)descriptor;
-(void*)weights;
-(id)initWithWeights:(id)arg1 useBias:(BOOL)arg2 desc:(id)arg3 ;
-(float*)biasTerms;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

