/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:44:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKit/UIInteractionProgressObserver.h>
#import <libobjc.A.dylib/SBViewControllerInteractiveTransitioning.h>

@protocol SBViewControllerContextTransitioning;
@class UIInteractionProgress, NSString;

@interface SBHintInteractor : NSObject <UIInteractionProgressObserver, SBViewControllerInteractiveTransitioning> {

	id<SBViewControllerContextTransitioning> _transitionContext;
	SCD_Struct_SB8 _hintInterval;
	UIInteractionProgress* _interactionProgress;

}

@property (nonatomic,readonly) UIInteractionProgress * interactionProgress;              //@synthesize interactionProgress=_interactionProgress - In the implementation block
@property (nonatomic,readonly) double maxHintProgress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(void)cancelTransition;
-(BOOL)supportsRestarting;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(UIInteractionProgress *)interactionProgress;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)finishInteractiveTransition;
-(void)_updateInteractionPercentComplete:(double)arg1 ;
-(id)initWithInteractionProgress:(id)arg1 maxHintProgress:(double)arg2 ;
-(double)maxHintProgress;
-(void)updateTransition:(double)arg1 ;
@end

