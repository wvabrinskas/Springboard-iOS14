/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSObservationSource.h>

@class NSNumber, NSISLinearExpression, NSISEngine, NSMutableArray;

@interface _NSISLinearExpressionObservable : NSObservationSource {

	NSNumber* _lastValue;
	NSISLinearExpression* _expression;
	NSISEngine* _associatedEngine;
	NSMutableArray* _variableObservations;
	id _changeTransactionObservation;
	BOOL _valueIsDirtied;

}
+(id)observableForExpression:(id)arg1 inEngine:(id)arg2 ;
-(BOOL)_overrideUseFastBlockObservers;
-(id)addObserverBlock:(/*^block*/id)arg1 ;
-(id)addObserver:(id)arg1 ;
-(void)dealloc;
@end
