/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowEditor/POPAnimationEvent.h>

@interface POPAnimationValueEvent : POPAnimationEvent {

	id _value;
	id _velocity;

}

@property (nonatomic,retain) id velocity;              //@synthesize velocity=_velocity - In the implementation block
@property (nonatomic,readonly) id value;               //@synthesize value=_value - In the implementation block
-(void)setVelocity:(id)arg1 ;
-(id)velocity;
-(id)value;
-(id)initWithType:(unsigned long long)arg1 time:(double)arg2 value:(id)arg3 ;
-(void)_appendDescription:(id)arg1 ;
@end
