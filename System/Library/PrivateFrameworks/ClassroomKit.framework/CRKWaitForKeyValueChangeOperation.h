/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATOperation.h>

@class NSObject, NSSet;

@interface CRKWaitForKeyValueChangeOperation : CATOperation {

	BOOL _observing;
	NSObject* _object;
	NSSet* _keyPaths;
	/*^block*/id _conditionEvaluator;

}

@property (nonatomic,readonly) NSObject * object;                            //@synthesize object=_object - In the implementation block
@property (nonatomic,copy,readonly) NSSet * keyPaths;                        //@synthesize keyPaths=_keyPaths - In the implementation block
@property (nonatomic,copy) id conditionEvaluator;                            //@synthesize conditionEvaluator=_conditionEvaluator - In the implementation block
@property (assign,getter=isObserving,nonatomic) BOOL observing;              //@synthesize observing=_observing - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isAsynchronous;
-(void)main;
-(BOOL)isObserving;
-(NSObject *)object;
-(void)cancel;
-(NSSet *)keyPaths;
-(void)setObserving:(BOOL)arg1 ;
-(void)endObservingObject;
-(void)setConditionEvaluator:(id)arg1 ;
-(void)beginObservingObject;
-(void)evaluateConditions;
-(id)conditionEvaluator;
-(id)initWithObject:(id)arg1 keyPaths:(id)arg2 conditionEvaluator:(/*^block*/id)arg3 ;
@end

