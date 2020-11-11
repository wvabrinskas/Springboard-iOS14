/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@protocol MTLBuffer, MPSCNNConvolutionDataSource;
@class MPSCNNNeuron, NSData, MPSNNNeuronDescriptor;

@interface MPSCNNConvolution : MPSCNNKernel {

	unsigned long long _inputFeatureChannels;
	unsigned long long _outputFeatureChannels;
	unsigned long long _layout;
	unsigned long long _groups;
	MPSCNNNeuron* _neuron_deprecated;
	id<MTLBuffer> _weights;
	id<MTLBuffer> _bias;
	unsigned long long _flags;
	BOOL _fullyConnected;
	BOOL _convolutionTranspose;
	BOOL _convertFloat32Weights;
	id<MTLBuffer> _qWts;
	int _qType;
	unsigned long long _scaleFactor;
	unsigned long long _channelMultiplier;
	unsigned _weightsDataType;
	unsigned _weightsLayout;
	NSData* _biasOriginal;
	id<MTLBuffer> _neuronABuffer;
	unsigned long long _accumulatorPrecisionOption;
	id<MPSCNNConvolutionDataSource> _dataSource;
	NSData* _batchNormalizationData;
	MPSNNNeuronDescriptor* _fusedNeuronDescriptor;
	unsigned long long _featureChannelsLayout;

}

@property (nonatomic,readonly) unsigned long long featureChannelsLayout;                       //@synthesize featureChannelsLayout=_featureChannelsLayout - In the implementation block
@property (nonatomic,readonly) unsigned long long weightsBufferLength; 
@property (nonatomic,readonly) unsigned long long inputFeatureChannels;                        //@synthesize inputFeatureChannels=_inputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long outputFeatureChannels;                       //@synthesize outputFeatureChannels=_outputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long groups;                                      //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain,readonly) id<MPSCNNConvolutionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) unsigned long long subPixelScaleFactor;                         //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (nonatomic,readonly) MPSCNNNeuron * neuron;                                          //@synthesize neuron_deprecated=_neuron_deprecated - In the implementation block
@property (nonatomic,readonly) int neuronType; 
@property (nonatomic,readonly) float neuronParameterA; 
@property (nonatomic,readonly) float neuronParameterB; 
@property (nonatomic,readonly) float neuronParameterC; 
@property (nonatomic,readonly) MPSNNNeuronDescriptor * fusedNeuronDescriptor;                  //@synthesize fusedNeuronDescriptor=_fusedNeuronDescriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long channelMultiplier;                           //@synthesize channelMultiplier=_channelMultiplier - In the implementation block
@property (assign,nonatomic) unsigned long long accumulatorPrecisionOption; 
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(unsigned long long)maxBatchSize;
-(id)initWithDevice:(id)arg1 ;
-(id)resultStateBatchForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(int)neuronType;
-(id)initWithDevice:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float*)arg3 biasTerms:(const float*)arg4 flags:(unsigned long long)arg5 fullyConnected:(BOOL)arg6 ;
-(float)neuronParameterC;
-(id)resourceListForSourceImages:(id)arg1 destinationImages:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(BOOL)appendBatchBarrier;
-(unsigned long long)outputFeatureChannels;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)convolutionTranspose;
-(unsigned)weightsLayout;
-(id)debugDescription;
-(id)exportWeightsAndBiasesWithCommandBuffer:(id)arg1 resultStateCanBeTemporary:(BOOL)arg2 ;
-(BOOL)initialize:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const void*)arg3 dataType:(unsigned)arg4 weightsLayout:(unsigned)arg5 range:(const 4*)arg6 lookUpTable:(const float*)arg7 qType:(int)arg8 biasTerms:(const float*)arg9 flags:(unsigned long long)arg10 fullyConnected:(BOOL)arg11 convolutionTranspose:(BOOL)arg12 preferredWeightsDataType:(unsigned)arg13 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(SCD_Struct_MP11*)arg4 kernelOffset:(SCD_Struct_MP11*)arg5 ;
-(unsigned long long)inputFeatureChannels;
-(float)neuronParameterA;
-(unsigned long long)featureChannelsLayout;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 ;
-(int)quantizationType;
-(void)reloadWeightsAndBiasesWithDataSource:(id)arg1 ;
-(MPSCNNNeuron *)neuron;
-(void)reloadWeightsAndBiasesFromDataSource;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(SCD_Struct_MP11*)arg4 ;
-(void)setFusedNeuronDescriptor:(MPSNNNeuronDescriptor *)arg1 ;
-(id)initWithDevice:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float*)arg3 biasTerms:(const float*)arg4 flags:(unsigned long long)arg5 fullyConnected:(BOOL)arg6 convolutionTranspose:(BOOL)arg7 ;
-(unsigned)weightsDataType;
-(unsigned long long)channelMultiplier;
-(id<MPSCNNConvolutionDataSource>)dataSource;
-(unsigned long long)weightsBufferLength;
-(void)reloadWeightsAndBiasesWithCommandBuffer:(id)arg1 state:(id)arg2 ;
-(id)neuronABuffer;
-(BOOL)PrepareAndLoadData:(id)arg1 dataType:(unsigned)arg2 weightsLayout:(unsigned)arg3 weights:(const void*)arg4 biases:(const float*)arg5 quantizationType:(int)arg6 ranges:(const 5*)arg7 lookUpTable:(const float*)arg8 convertFloat32Weights:(BOOL)arg9 ;
-(unsigned long long)batchEncodingStorageSizeForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)temporaryResultStateBatchForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)initializeWithDevice:(id)arg1 weights:(id)arg2 fullyConnected:(BOOL)arg3 convolutionTranspose:(BOOL)arg4 ;
-(unsigned long long)subPixelScaleFactor;
-(unsigned long long)groups;
-(unsigned long long)encodingStorageSizeForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)biases;
-(id)initWithDevice:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float*)arg3 biasTerms:(const float*)arg4 flags:(unsigned long long)arg5 ;
-(void)setAccumulatorPrecisionOption:(unsigned long long)arg1 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(id)weights;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 fullyConnected:(BOOL)arg3 ;
-(void)copyToGradientState:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)quantizationBuffer;
-(id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(unsigned long long)accumulatorPrecisionOption;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3 state:(id*)arg4 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(MPSNNNeuronDescriptor *)fusedNeuronDescriptor;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 fullyConnected:(BOOL)arg3 convolutionTranspose:(BOOL)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)dealloc;
-(float)neuronParameterB;
@end
