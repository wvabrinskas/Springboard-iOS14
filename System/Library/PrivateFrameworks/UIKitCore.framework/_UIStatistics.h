/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableSet;

@interface _UIStatistics : NSObject {

	NSString* _key;
	double _sampleValue;
	NSMutableSet* _children;
	double _sampleRate;

}

@property (assign,nonatomic) double sampleRate;              //@synthesize sampleRate=_sampleRate - In the implementation block
+(unsigned long long)currentTime;
+(id)pinchGestureCount;
+(id)recentsInputViewItemSelectedCount;
+(id)scrubberUsageTime;
+(id)_sharedStatisticWithDomain:(id)arg1 statisticsClass:(Class)arg2 identifierReporting:(long long)arg3 ;
+(id)alertButtonTapCount;
+(id)feedbackEnginePrewarmCountWithSuffix:(id)arg1 ;
+(id)feedbackGeneratorPreparationCountWithSuffix:(id)arg1 ;
+(id)recentsInputViewNewEntryCount;
+(id)coverSheetButtonFirstActivationDurationWithCategory:(id)arg1 ;
+(id)feedbackEngineActivationDurationWithSuffix:(id)arg1 ;
+(id)controlInteractionDurationDistributionWithCategory:(id)arg1 suffix:(id)arg2 ;
+(id)previewInteractionPopForce;
+(id)maxForce;
+(id)scrubberUsageCount;
+(id)previewInteractionPeekCount;
+(id)coverSheetButtonMaximumForceWithActivation:(BOOL)arg1 category:(id)arg2 ;
+(id)previewInteractionTapCount;
+(id)feedbackGeneratorPlayCountWithSuffix:(id)arg1 ;
+(id)feedbackEnginePrewarmDurationWithSuffix:(id)arg1 ;
+(id)coverSheetButtonInteractionCountWithActivation:(BOOL)arg1 category:(id)arg2 ;
+(id)recentsInputViewNumberOfItems;
+(id)zoomGestureCount;
+(id)feedbackGeneratorActivationDurationWithSuffix:(id)arg1 ;
+(id)coverSheetButtonInteractionDurationWithCategory:(id)arg1 ;
+(id)scrollBounceCount;
+(id)previewInteractionPeekDuration;
+(id)feedbackEngineOutOfChannelsCountWithSuffix:(id)arg1 ;
+(id)feedbackGeneratorActivationTimeOutCountWithSuffix:(id)arg1 ;
+(id)controlTapCountWithCategory:(id)arg1 suffix:(id)arg2 ;
+(id)previewInteractionAlertPresentationCount;
+(id)controlValueChangeEmittedCountWithCategory:(id)arg1 suffix:(id)arg2 ;
+(id)feedbackGeneratorActivationCountWithSuffix:(id)arg1 ;
+(id)previewInteractionPeekForce;
+(id)feedbackEngineActivationCountWithSuffix:(id)arg1 ;
+(id)previewInteractionPopCount;
+(id)recentsInputViewPresentationCount;
-(id)_key;
-(id)init;
-(id)initWithDomain:(id)arg1 ;
-(void)_resetValue;
-(void)_resetDistributionToValue:(double)arg1 ;
-(void)_resetDistribution;
-(BOOL)_shouldSample;
-(id)initWithDomain:(id)arg1 identifierReporting:(long long)arg2 ;
-(void)_recordDistributionValue:(double)arg1 ;
-(void)_recordDistributionTime:(unsigned long long)arg1 ;
-(void)_incrementValueBy:(long long)arg1 ;
-(void)_addChildStatistic:(id)arg1 ;
-(void)_removeChildStatistic:(id)arg1 ;
-(void)randomizeSampleValue;
-(id)description;
-(void)setSampleRate:(double)arg1 ;
-(double)sampleRate;
-(void)_setValue:(long long)arg1 ;
@end

