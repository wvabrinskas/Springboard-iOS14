/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SUICFlameGroup : NSObject {

	BOOL _isAura;
	BOOL _isDyingOff;
	float _stateTime;
	float _zTime;
	float _globalAlpha;
	float _transitionPhase;
	float* _transitionPhasePtr;
	* _stateModifiersPtr;
	 _stateModifiers;

}

@property (assign,nonatomic) float stateTime;                        //@synthesize stateTime=_stateTime - In the implementation block
@property (assign,nonatomic) float zTime;                            //@synthesize zTime=_zTime - In the implementation block
@property (assign,nonatomic) float globalAlpha;                      //@synthesize globalAlpha=_globalAlpha - In the implementation block
@property (assign,nonatomic) float transitionPhase;                  //@synthesize transitionPhase=_transitionPhase - In the implementation block
@property (assign,nonatomic) float* transitionPhasePtr;              //@synthesize transitionPhasePtr=_transitionPhasePtr - In the implementation block
@property (assign,nonatomic)  stateModifiers;                        //@synthesize stateModifiers=_stateModifiers - In the implementation block
@property (assign,nonatomic) * stateModifiersPtr;                    //@synthesize stateModifiersPtr=_stateModifiersPtr - In the implementation block
@property (assign,nonatomic) BOOL isAura;                            //@synthesize isAura=_isAura - In the implementation block
@property (assign,nonatomic) BOOL isDyingOff;                        //@synthesize isDyingOff=_isDyingOff - In the implementation block
-(id)init;
-(void)setGlobalAlpha:(float)arg1 ;
-(float)stateTime;
-(BOOL)isAura;
-(void)setTransitionPhasePtr:(float*)arg1 ;
-(void)setIsAura:(BOOL)arg1 ;
-(float*)transitionPhasePtr;
-(void)setStateModifiersPtr:(*)arg1 ;
-(id)description;
-(float)transitionPhase;
-(void)setZTime:(float)arg1 ;
-(BOOL)isDyingOff;
-(void)setTransitionPhase:(float)arg1 ;
-(*)stateModifiersPtr;
-(void)setStateTime:(float)arg1 ;
-()stateModifiers;
-(float)globalAlpha;
-(void)setStateModifiers:;
-(void)setIsDyingOff:(BOOL)arg1 ;
-(float)zTime;
@end
