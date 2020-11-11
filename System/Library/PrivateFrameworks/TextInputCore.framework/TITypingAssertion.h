/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, NSTimer, PSPointerClientController;

@interface TITypingAssertion : NSObject {

	BOOL _active;
	NSMutableSet* _restingPathIndices;
	NSTimer* _timer;
	PSPointerClientController* _pointerClientController;

}

@property (nonatomic,retain) NSTimer * timer;                                                  //@synthesize timer=_timer - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (nonatomic,retain) PSPointerClientController * pointerClientController;              //@synthesize pointerClientController=_pointerClientController - In the implementation block
+(id)sharedTypingAssertion;
-(void)setActive:(BOOL)arg1 ;
-(id)init;
-(id)__restingPathIndices;
-(void)setPointerClientController:(PSPointerClientController *)arg1 ;
-(void)restTouchStartWithPathIndex:(long long)arg1 ;
-(NSTimer *)timer;
-(BOOL)isActive;
-(void)restTouchEndWithPathIndex:(long long)arg1 ;
-(void)touchWithReason:(long long)arg1 ;
-(void)restResetTouches;
-(void)_sbsSetTypingActive:(BOOL)arg1 ;
-(void)touchWithDuration:(double)arg1 reason:(long long)arg2 ;
-(PSPointerClientController *)pointerClientController;
-(void)timerFired:(id)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)dealloc;
@end
