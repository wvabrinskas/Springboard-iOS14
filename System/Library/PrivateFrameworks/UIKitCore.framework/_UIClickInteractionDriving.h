/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIView, UIGestureRecognizer;


@protocol _UIClickInteractionDriving <NSObject>
@property (assign,nonatomic,__weak) id<_UIClickInteractionDriverDelegate> delegate; 
@property (assign,nonatomic,__weak) UIView * view; 
@property (assign,nonatomic) double allowableMovement; 
@property (assign,nonatomic) BOOL cancelsTouchesInView; 
@property (nonatomic,readonly) UIGestureRecognizer * primaryGestureRecognizer; 
@property (nonatomic,readonly) double touchDuration; 
@property (nonatomic,readonly) BOOL hasExceededAllowableMovement; 
@property (nonatomic,readonly) BOOL isCurrentlyAcceleratedByForce; 
@property (nonatomic,readonly) BOOL clicksUpAutomaticallyAfterTimeout; 
@property (nonatomic,readonly) double maximumEffectProgress; 
@property (nonatomic,readonly) unsigned long long inputPrecision; 
@property (assign,nonatomic) unsigned long long behavior; 
@optional
-(void)setBehavior:(unsigned long long)arg1;
-(unsigned long long)behavior;

@required
+(BOOL)requiresForceCapability;
+(BOOL)prefersCancelsTouchesInView;
-(BOOL)cancelsTouchesInView;
-(UIGestureRecognizer *)primaryGestureRecognizer;
-(unsigned long long)inputPrecision;
-(BOOL)clicksUpAutomaticallyAfterTimeout;
-(BOOL)isCurrentlyAcceleratedByForce;
-(void)cancelInteraction;
-(CGPoint*)locationInCoordinateSpace:(id)arg1;
-(double)allowableMovement;
-(void)setAllowableMovement:(double)arg1;
-(id<_UIClickInteractionDriverDelegate>)delegate;
-(UIView *)view;
-(void)setView:(id)arg1;
-(double)maximumEffectProgress;
-(void)setDelegate:(id)arg1;
-(void)setCancelsTouchesInView:(BOOL)arg1;
-(BOOL)hasExceededAllowableMovement;
-(double)touchDuration;

@end
