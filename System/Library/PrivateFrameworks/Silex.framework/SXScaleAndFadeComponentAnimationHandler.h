/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/SXComponentAnimationHandler.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface SXScaleAndFadeComponentAnimationHandler : SXComponentAnimationHandler <CAAnimationDelegate> {

	double _initialAlpha;
	double _initialScale;

}

@property (assign,nonatomic) double initialAlpha;                   //@synthesize initialAlpha=_initialAlpha - In the implementation block
@property (assign,nonatomic) double initialScale;                   //@synthesize initialScale=_initialScale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)startAnimation;
-(void)setInitialScale:(double)arg1 ;
-(double)initialScale;
-(id)initWithComponent:(id)arg1 withAnimation:(id)arg2 ;
-(double)initialAlpha;
-(void)prepareAnimation;
-(void)updateAnimationWithFactor:(double)arg1 ;
-(void)finishAnimation;
-(void)setInitialAlpha:(double)arg1 ;
@end

