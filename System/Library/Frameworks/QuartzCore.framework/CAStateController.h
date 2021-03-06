/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <QuartzCore/QuartzCore-Structs.h>
@class CALayer;

@interface CAStateController : NSObject {

	CAStateControllerData* _data;

}

@property (readonly) CALayer * layer; 
@property (__weak) NSObject*<CAStateControllerDelegate> delegate; 
-(void)restoreStateChanges:(id)arg1 ;
-(void)setInitialStatesOfLayer:(id)arg1 transitionSpeed:(float)arg2 ;
-(NSObject*<CAStateControllerDelegate>)delegate;
-(CALayer *)layer;
-(void)_removeTransition:(id)arg1 layer:(id)arg2 ;
-(void)setDelegate:(NSObject*<CAStateControllerDelegate>)arg1 ;
-(void)_applyTransition:(id)arg1 layer:(id)arg2 undo:(id)arg3 speed:(float)arg4 ;
-(id)initWithLayer:(id)arg1 ;
-(id)removeAllStateChanges;
-(void)cancelTimers;
-(void)setState:(id)arg1 ofLayer:(id)arg2 ;
-(id)stateOfLayer:(id)arg1 ;
-(void)_addAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3 undo:(id)arg4 ;
-(void)setInitialStatesOfLayer:(id)arg1 ;
-(void)_nextStateTimer:(id)arg1 ;
-(void)_applyTransitionElement:(id)arg1 layer:(id)arg2 undo:(id)arg3 speed:(float)arg4 ;
-(void)dealloc;
-(void)setState:(id)arg1 ofLayer:(id)arg2 transitionSpeed:(float)arg3 ;
@end

