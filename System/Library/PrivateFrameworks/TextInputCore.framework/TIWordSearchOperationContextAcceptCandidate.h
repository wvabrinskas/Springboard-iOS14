/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TIWordSearchOperation.h>

@class TIMecabraEnvironment;

@interface TIWordSearchOperationContextAcceptCandidate : TIWordSearchOperation {

	void* _mecabraCandidate;
	BOOL _partialCandidate;
	BOOL _prediction;
	TIMecabraEnvironment* _mecabraEnvironment;

}

@property (nonatomic,retain) TIMecabraEnvironment * mecabraEnvironment;                    //@synthesize mecabraEnvironment=_mecabraEnvironment - In the implementation block
@property (assign,getter=isPartialCandidate,nonatomic) BOOL partialCandidate;              //@synthesize partialCandidate=_partialCandidate - In the implementation block
@property (assign,getter=isPrediction,nonatomic) BOOL prediction;                          //@synthesize prediction=_prediction - In the implementation block
-(void)perform;
-(BOOL)isPartialCandidate;
-(void)setPartialCandidate:(BOOL)arg1 ;
-(void)setPrediction:(BOOL)arg1 ;
-(BOOL)isPrediction;
-(void)cancel;
-(void)dealloc;
-(id)initWithWordSearch:(id)arg1 mecabraCandidate:(void*)arg2 isPartial:(BOOL)arg3 isPrediction:(BOOL)arg4 ;
-(TIMecabraEnvironment *)mecabraEnvironment;
-(void)setMecabraEnvironment:(TIMecabraEnvironment *)arg1 ;
@end

