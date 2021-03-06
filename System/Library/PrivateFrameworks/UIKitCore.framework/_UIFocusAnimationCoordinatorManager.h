/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIFocusAnimationCoordinator, NSHashTable, NSNumber;

@interface _UIFocusAnimationCoordinatorManager : NSObject {

	UIFocusAnimationCoordinator* _activeFocusAnimationCoordinator;
	NSHashTable* _unfocusingItems;
	double _lastFocusUpdateTime;
	UIFocusAnimationCoordinator* _lastFocusingItemAnimationCoordinator;
	NSNumber* _inheritedAnimationCoordinatorActiveAnimation;

}

@property (nonatomic,readonly) NSHashTable * unfocusingItems;                                                 //@synthesize unfocusingItems=_unfocusingItems - In the implementation block
@property (assign,nonatomic) double lastFocusUpdateTime;                                                      //@synthesize lastFocusUpdateTime=_lastFocusUpdateTime - In the implementation block
@property (nonatomic,retain) UIFocusAnimationCoordinator * activeFocusAnimationCoordinator;                   //@synthesize activeFocusAnimationCoordinator=_activeFocusAnimationCoordinator - In the implementation block
@property (nonatomic,retain) UIFocusAnimationCoordinator * lastFocusingItemAnimationCoordinator;              //@synthesize lastFocusingItemAnimationCoordinator=_lastFocusingItemAnimationCoordinator - In the implementation block
@property (nonatomic,retain) NSNumber * inheritedAnimationCoordinatorActiveAnimation;                         //@synthesize inheritedAnimationCoordinatorActiveAnimation=_inheritedAnimationCoordinatorActiveAnimation - In the implementation block
-(id)init;
-(NSHashTable *)unfocusingItems;
-(UIFocusAnimationCoordinator *)activeFocusAnimationCoordinator;
-(void)setLastFocusUpdateTime:(double)arg1 ;
-(void)_performDelayedFocusingAnimationIfNecessary;
-(void)setInheritedAnimationCoordinatorActiveAnimation:(NSNumber *)arg1 ;
-(void)setActiveFocusAnimationCoordinator:(UIFocusAnimationCoordinator *)arg1 ;
-(double)lastFocusUpdateTime;
-(void)setLastFocusingItemAnimationCoordinator:(UIFocusAnimationCoordinator *)arg1 ;
-(UIFocusAnimationCoordinator *)lastFocusingItemAnimationCoordinator;
-(id)willUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 fromItem:(id)arg2 ;
-(NSNumber *)inheritedAnimationCoordinatorActiveAnimation;
@end

