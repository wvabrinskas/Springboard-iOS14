/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:44:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, CADisplayLink;

@interface _SBValueConvergenceAnimatorEngine : NSObject {

	NSMutableSet* _animators;
	CADisplayLink* _displayLink;
	NSMutableSet* _finishedAnimators;

}
+(id)sharedEngine;
-(void)_tearDownDisplayLink;
-(id)init;
-(void)_updateDisplayLink;
-(void)stopAnimator:(id)arg1 ;
-(void)_onDisplayLink:(id)arg1 ;
-(BOOL)isRunningAnimator:(id)arg1 ;
-(void)updateAnimator:(id)arg1 ;
-(void)startAnimator:(id)arg1 ;
-(void)_ensureDisplayLink;
@end

