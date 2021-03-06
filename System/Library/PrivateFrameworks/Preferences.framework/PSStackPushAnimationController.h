/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSArray, NSMutableArray, UINavigationController, NSString;

@interface PSStackPushAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {

	NSArray* _snapshots;
	NSMutableArray* _animationsToRunAlongsideToVC;
	BOOL _hasStartedAnimation;
	NSArray* _viewControllers;
	UINavigationController* _navigationController;
	/*^block*/id _completionBlock;
	long long _animationPreset;
	double _startStagger;
	double _completionStagger;
	double _pushDuration;
	double _springDamping;

}

@property (nonatomic,retain) NSArray * viewControllers;                                         //@synthesize viewControllers=_viewControllers - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                  //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) long long animationPreset;                                         //@synthesize animationPreset=_animationPreset - In the implementation block
@property (assign,nonatomic) double startStagger;                                               //@synthesize startStagger=_startStagger - In the implementation block
@property (assign,nonatomic) double completionStagger;                                          //@synthesize completionStagger=_completionStagger - In the implementation block
@property (assign,nonatomic) double pushDuration;                                               //@synthesize pushDuration=_pushDuration - In the implementation block
@property (assign,nonatomic) double springDamping;                                              //@synthesize springDamping=_springDamping - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_snapshotOfViewController:(id)arg1 withNavigationBar:(id)arg2 prevViewController:(id)arg3 ;
+(id)_animationParametersForPreset:(long long)arg1 ;
+(void)setDefaultAnimationPreset:(long long)arg1 ;
+(void)resetDefaultAnimationParameters;
+(id)controllerWithViewControllerStack:(id)arg1 navigationController:(id)arg2 ;
-(void)animationEnded:(BOOL)arg1 ;
-(id)completionBlock;
-(void)setViewControllers:(NSArray *)arg1 ;
-(id)init;
-(NSArray *)viewControllers;
-(double)transitionDuration:(id)arg1 ;
-(void)_loadDefaultValues;
-(BOOL)_shouldSkipFirstPush;
-(double)_desiredDuration;
-(double)_actualDuration;
-(void)_addAnimation:(/*^block*/id)arg1 forViewAtIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 ;
-(double)startStagger;
-(long long)animationPreset;
-(id)_valueForAnimationParameter:(id)arg1 ;
-(void)setAnimationPreset:(long long)arg1 ;
-(void)setStartStagger:(double)arg1 ;
-(double)completionStagger;
-(void)setCompletionStagger:(double)arg1 ;
-(double)pushDuration;
-(void)setPushDuration:(double)arg1 ;
-(double)springDamping;
-(void)setSpringDamping:(double)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setCompletionBlock:(id)arg1 ;
-(UINavigationController *)navigationController;
-(void)animateAlongsideToViewController:(/*^block*/id)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
@end

