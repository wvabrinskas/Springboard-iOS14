/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWNoiseReductionAndFusionProcessorController <NSObject>
@required
+(id)new;
-(id)init;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 processErrorRecoveryFrame:(BOOL)arg3 processOriginalImage:(BOOL)arg4 clientBracketSequenceNumber:(int)arg5;
-(BOOL)finishProcessingCurrentInputNow;
-(id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg1 frameStatistics:(id)arg2 stationary:(BOOL)arg3 detectedObjects:(id)arg4;
-(id)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(id)arg1;
-(id)initWithConfiguration:(id)arg1;

@end
