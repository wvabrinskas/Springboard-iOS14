/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@class SCNAction, NSString;

@interface SCNActionRunAction : SCNAction {

	SCNAction* _action;
	NSString* _subSpriteKey;
	NSString* _actionKey;
	BOOL _waitForKeyedAction;
	BOOL _runOnSubSprite;
	BOOL _fired;

}
+(id)runAction:(id)arg1 onFirstChildWithName:(id)arg2 ;
+(id)runAction:(id)arg1 afterActionWithKey:(id)arg2 ;
-(id)init;
-(BOOL)isCustom;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)reversedAction;
-(void)updateWithTarget:(id)arg1 forTime:(double)arg2 ;
-(void)willStartWithTarget:(id)arg1 atTime:(double)arg2 ;
@end

