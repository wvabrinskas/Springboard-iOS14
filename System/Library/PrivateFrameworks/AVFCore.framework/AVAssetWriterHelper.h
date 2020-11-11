/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVAssetWriterConfigurationState, AVWeakReference, NSURL, AVMediaFileType, NSArray, NSError, NSString;

@interface AVAssetWriterHelper : NSObject {

	AVAssetWriterConfigurationState* _configurationState;
	AVWeakReference* _weakReferenceToAssetWriter;

}

@property (nonatomic,readonly) AVAssetWriterConfigurationState * configurationState;              //@synthesize configurationState=_configurationState - In the implementation block
@property (retain) AVWeakReference * weakReferenceToAssetWriter;                                  //@synthesize weakReferenceToAssetWriter=_weakReferenceToAssetWriter - In the implementation block
@property (nonatomic,readonly) NSURL * outputURL; 
@property (nonatomic,readonly) AVMediaFileType * mediaFileType; 
@property (nonatomic,readonly) NSArray * availableMediaTypes; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (__weak) id<AVAssetWriterDelegate> delegate; 
@property (assign,nonatomic) SCD_Struct_AV6 movieFragmentInterval; 
@property (assign,nonatomic) SCD_Struct_AV6 overallDurationHint; 
@property (assign,nonatomic) BOOL shouldOptimizeForNetworkUse; 
@property (nonatomic,copy) NSURL * directoryForTemporaryFiles; 
@property (assign,nonatomic) int movieTimeScale; 
@property (nonatomic,copy) NSArray * metadata; 
@property (assign,nonatomic) CGAffineTransform preferredTransform; 
@property (assign,nonatomic) float preferredVolume; 
@property (assign,nonatomic) float preferredRate; 
@property (assign,nonatomic) long long singlePassFileSize; 
@property (assign,nonatomic) long long singlePassMediaDataSize; 
@property (nonatomic,readonly) NSArray * inputs; 
@property (nonatomic,readonly) NSArray * inputGroups; 
@property (assign,nonatomic) SCD_Struct_AV6 preferredOutputSegmentInterval; 
@property (assign,nonatomic) SCD_Struct_AV6 initialSegmentStartTime; 
@property (nonatomic,copy) NSString * outputFileTypeProfile; 
@property (assign,nonatomic) long long initialMovieFragmentSequenceNumber; 
@property (assign,nonatomic) BOOL producesCombinableFragments; 
-(float)preferredVolume;
-(CGAffineTransform)preferredTransform;
-(void)flush;
-(id)init;
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg1 ;
-(id<AVAssetWriterDelegate>)delegate;
-(void)setMetadata:(NSArray *)arg1 ;
-(void)setMovieTimeScale:(int)arg1 ;
-(BOOL)canAddInputGroup:(id)arg1 ;
-(long long)status;
-(SCD_Struct_AV6)initialSegmentStartTime;
-(void)setProducesCombinableFragments:(BOOL)arg1 ;
-(void)endSessionAtSourceTime:(SCD_Struct_AV6)arg1 ;
-(NSError *)error;
-(void)setPreferredOutputSegmentInterval:(SCD_Struct_AV6)arg1 ;
-(NSArray *)metadata;
-(BOOL)canAddInput:(id)arg1 ;
-(void)flushSegment;
-(NSArray *)inputGroups;
-(BOOL)shouldOptimizeForNetworkUse;
-(void)setDirectoryForTemporaryFiles:(NSURL *)arg1 ;
-(NSString *)outputFileTypeProfile;
-(void)setSinglePassFileSize:(long long)arg1 ;
-(void)setSinglePassMediaDataSize:(long long)arg1 ;
-(void)setDelegate:(id<AVAssetWriterDelegate>)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(void)finishWriting;
-(void)addInput:(id)arg1 ;
-(long long)singlePassFileSize;
-(void)startWriting;
-(SCD_Struct_AV6)preferredOutputSegmentInterval;
-(long long)singlePassMediaDataSize;
-(void)cancelWriting;
-(void)setInitialMovieFragmentSequenceNumber:(long long)arg1 ;
-(SCD_Struct_AV6)movieFragmentInterval;
-(SCD_Struct_AV6)overallDurationHint;
-(NSURL *)directoryForTemporaryFiles;
-(void)setMovieFragmentInterval:(SCD_Struct_AV6)arg1 ;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(AVAssetWriterConfigurationState *)configurationState;
-(void)setWeakReferenceToAssetWriter:(AVWeakReference *)arg1 ;
-(NSArray *)availableMediaTypes;
-(BOOL)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 ;
-(void)transitionToFailedStatusWithError:(id)arg1 ;
-(BOOL)_canApplyTrackReferences:(id)arg1 exceptionReason:(id*)arg2 ;
-(BOOL)_canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 sourceFormat:(opaqueCMFormatDescriptionRef)arg3 exceptionReason:(id*)arg4 ;
-(AVWeakReference *)weakReferenceToAssetWriter;
-(BOOL)_transitionToClientInitiatedTerminalStatus:(long long)arg1 ;
-(id)initWithConfigurationState:(id)arg1 ;
-(void)setInitialSegmentStartTime:(SCD_Struct_AV6)arg1 ;
-(void)setPreferredRate:(float)arg1 ;
-(void)finishWritingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setOutputFileTypeProfile:(NSString *)arg1 ;
-(int)movieTimeScale;
-(NSURL *)outputURL;
-(float)preferredRate;
-(void)addInputGroup:(id)arg1 ;
-(AVMediaFileType *)mediaFileType;
-(void)startSessionAtSourceTime:(SCD_Struct_AV6)arg1 ;
-(NSArray *)inputs;
-(BOOL)producesCombinableFragments;
-(void)setOverallDurationHint:(SCD_Struct_AV6)arg1 ;
-(void)dealloc;
-(long long)initialMovieFragmentSequenceNumber;
@end
