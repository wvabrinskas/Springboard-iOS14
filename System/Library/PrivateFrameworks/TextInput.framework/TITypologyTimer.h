/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TITypologyTimer : NSObject {

	BOOL _foundFirstInput;
	double _elapsedTime;
	double _mostRecentTimestamp;
	double _maxTimeIntervalBetweenInputs;

}

@property (assign,nonatomic) double elapsedTime;                               //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign,nonatomic) double mostRecentTimestamp;                       //@synthesize mostRecentTimestamp=_mostRecentTimestamp - In the implementation block
@property (assign,nonatomic) double maxTimeIntervalBetweenInputs;              //@synthesize maxTimeIntervalBetweenInputs=_maxTimeIntervalBetweenInputs - In the implementation block
@property (assign,nonatomic) BOOL foundFirstInput;                             //@synthesize foundFirstInput=_foundFirstInput - In the implementation block
-(void)setElapsedTime:(double)arg1 ;
-(double)maxTimeIntervalBetweenInputs;
-(double)elapsedTime;
-(void)addInputEventWithTimestamp:(double)arg1 ;
-(void)setMostRecentTimestamp:(double)arg1 ;
-(double)mostRecentTimestamp;
-(void)setMaxTimeIntervalBetweenInputs:(double)arg1 ;
-(BOOL)foundFirstInput;
-(void)setFoundFirstInput:(BOOL)arg1 ;
@end
