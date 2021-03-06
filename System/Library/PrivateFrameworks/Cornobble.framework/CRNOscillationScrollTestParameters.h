/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Cornobble.framework/Cornobble
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Cornobble/Cornobble-Structs.h>
#import <libobjc.A.dylib/CRNBlockBasedScrollTestParameters.h>
#import <libobjc.A.dylib/CRNScrollTestParameters.h>

@class NSString, RCPSyntheticEventStream;

@interface CRNOscillationScrollTestParameters : NSObject <CRNBlockBasedScrollTestParameters, CRNScrollTestParameters> {

	BOOL _shouldFlick;
	BOOL _preventDismissalGestures;
	BOOL _finishWithHalfIteration;
	NSString* _testName;
	/*^block*/id _completionHandler;
	unsigned long long _iterations;
	double _amplitudeVariationPerIteration;
	double _initialAmplitude;
	long long _initialDirection;
	double _iterationDuration;
	long long _realInitialDirection;
	CGRect _scrollingBounds;

}

@property (nonatomic,readonly) long long realInitialDirection;                     //@synthesize realInitialDirection=_realInitialDirection - In the implementation block
@property (assign,nonatomic) unsigned long long iterations;                        //@synthesize iterations=_iterations - In the implementation block
@property (assign,nonatomic) CGRect scrollingBounds;                               //@synthesize scrollingBounds=_scrollingBounds - In the implementation block
@property (assign,nonatomic) BOOL shouldFlick;                                     //@synthesize shouldFlick=_shouldFlick - In the implementation block
@property (assign,nonatomic) BOOL preventDismissalGestures;                        //@synthesize preventDismissalGestures=_preventDismissalGestures - In the implementation block
@property (assign,nonatomic) BOOL finishWithHalfIteration;                         //@synthesize finishWithHalfIteration=_finishWithHalfIteration - In the implementation block
@property (assign,nonatomic) double amplitudeVariationPerIteration;                //@synthesize amplitudeVariationPerIteration=_amplitudeVariationPerIteration - In the implementation block
@property (assign,nonatomic) double initialAmplitude;                              //@synthesize initialAmplitude=_initialAmplitude - In the implementation block
@property (assign,nonatomic) long long initialDirection;                           //@synthesize initialDirection=_initialDirection - In the implementation block
@property (assign,nonatomic) double iterationDuration;                             //@synthesize iterationDuration=_iterationDuration - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) RCPSyntheticEventStream * eventStream; 
@property (nonatomic,copy) NSString * testName;                                    //@synthesize testName=_testName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)testName;
-(RCPSyntheticEventStream *)eventStream;
-(id)initWithTestName:(id)arg1 iterations:(unsigned long long)arg2 scrollingBounds:(CGRect)arg3 useFlicks:(BOOL)arg4 preventDismissalGestures:(BOOL)arg5 initialAmplitude:(double)arg6 amplitudeVariationPerIteration:(double)arg7 initialDirection:(long long)arg8 iterationDuration:(double)arg9 finishWithHalfIteration:(BOOL)arg10 completionHandler:(/*^block*/id)arg11 ;
-(void)setInitialDirection:(long long)arg1 ;
-(long long)realInitialDirection;
-(BOOL)finishWithHalfIteration;
-(double)iterationDuration;
-(CGPoint)initialFingerPosition;
-(unsigned long long)iterations;
-(void)setShouldFlick:(BOOL)arg1 ;
-(id)completionHandler;
-(BOOL)preventDismissalGestures;
-(BOOL)shouldFlick;
-(void)setScrollingBounds:(CGRect)arg1 ;
-(void)setInitialAmplitude:(double)arg1 ;
-(void)setIterationDuration:(double)arg1 ;
-(long long)initialDirection;
-(double)initialAmplitude;
-(CGRect)scrollingBounds;
-(id)initWithTestName:(id)arg1 iterations:(unsigned long long)arg2 scrollingBounds:(CGRect)arg3 useFlicks:(BOOL)arg4 preventDismissalGestures:(BOOL)arg5 initialAmplitude:(double)arg6 amplitudeVariationPerIteration:(double)arg7 initialDirection:(long long)arg8 iterationDuration:(double)arg9 finishWithHalfIteration:(BOOL)arg10 ;
-(double)amplitudeVariationPerIteration;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setPreventDismissalGestures:(BOOL)arg1 ;
-(/*^block*/id)composerBlock;
-(void)setTestName:(NSString *)arg1 ;
-(CGPoint)finalFingerPosition;
-(void)scrollWithComposer:(id)arg1 fromPoint:(CGPoint)arg2 toPoint:(CGPoint)arg3 duration:(double)arg4 ;
-(void)setAmplitudeVariationPerIteration:(double)arg1 ;
-(void)setFinishWithHalfIteration:(BOOL)arg1 ;
-(void)setIterations:(unsigned long long)arg1 ;
@end

