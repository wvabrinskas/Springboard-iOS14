/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIDynamicValueConvergenceAnimation, NSHashTable;

@interface _UIFocusEffectsController : NSObject {

	_UIDynamicValueConvergenceAnimation* _rollbackAnimation;
	NSHashTable* _observers;
	CGPoint _displayOffset;
	double _displayMovementAdjustment;
	BOOL _displayOffsetAccumulatorEnabled;
	CGPoint _currentOffset;

}

@property (nonatomic,readonly) CGPoint currentOffset;                           //@synthesize currentOffset=_currentOffset - In the implementation block
@property (nonatomic,readonly) CGPoint displayOffset; 
@property (assign,nonatomic) BOOL displayOffsetAccumulatorEnabled;              //@synthesize displayOffsetAccumulatorEnabled=_displayOffsetAccumulatorEnabled - In the implementation block
-(void)removeObserver:(id)arg1 ;
-(id)init;
-(void)setDisplayOffsetAccumulatorEnabled:(BOOL)arg1 ;
-(CGPoint)currentOffset;
-(void)cancelRollbackAnimation;
-(void)updateCurrentOffset:(CGPoint)arg1 ;
-(void)adjustDisplayOffsetAccumulationFactorForFocusTransfer;
-(void)updateCurrentOffset:(CGPoint)arg1 overrideDisplayOffset:(id)arg2 ;
-(void)startRollbackAnimation;
-(void)resetDisplayOffsetAccumulationFactor;
-(void)reset;
-(CGPoint)displayOffset;
-(void)_notifyObserversForMovementDirection:(CGVector)arg1 ;
-(BOOL)displayOffsetAccumulatorEnabled;
-(void)addObserver:(id)arg1 ;
@end
