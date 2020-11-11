/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSString, CATState;

@interface CATStateMachine : NSObject {

	NSMutableDictionary* mStateByName;
	NSString* mCalloutReason;
	NSString* _name;
	CATState* _initialState;
	CATState* _currentState;
	id _target;
	unsigned long long _logLevel;

}

@property (nonatomic,retain) CATState * currentState;                  //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) CATState * initialState;                  //@synthesize initialState=_initialState - In the implementation block
@property (nonatomic,__weak,readonly) id target;                       //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) unsigned long long logLevel;              //@synthesize logLevel=_logLevel - In the implementation block
+(id)new;
-(id)target;
-(CATState *)initialState;
-(CATState *)currentState;
-(void)setInitialState:(CATState *)arg1 ;
-(void)setCurrentState:(CATState *)arg1 ;
-(void)start;
-(id)init;
-(void)setLogLevel:(unsigned long long)arg1 ;
-(void)addState:(id)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(void)delegateDidEnterState:(id)arg1 event:(id)arg2 ;
-(id)eventForTriggeringEvent:(id)arg1 ;
-(id)addStateWithName:(id)arg1 ;
-(BOOL)canTransitionWithTriggeringEvent:(id)arg1 ;
-(unsigned long long)logLevel;
-(void)delegateWillExitState:(id)arg1 event:(id)arg2 ;
-(void)invokeAction:(SEL)arg1 event:(id)arg2 ;
-(id)stateWithName:(id)arg1 ;
-(void)transitionWithTriggeringEvent:(id)arg1 ;
-(void)dealloc;
@end
