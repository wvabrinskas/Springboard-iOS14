/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIGestureRecognizer.h>

@class NSSet, NSArray;

@interface CAMPhysicalCaptureRecognizer : UIGestureRecognizer {

	BOOL _suspended;
	NSSet* _activeButtons;
	long long _lastActiveButton;
	NSArray* _desiredButtons;
	long long _pressType;

}

@property (assign,nonatomic) long long pressType;                            //@synthesize pressType=_pressType - In the implementation block
@property (assign,nonatomic) long long lastActiveButton;                     //@synthesize lastActiveButton=_lastActiveButton - In the implementation block
@property (nonatomic,copy) NSSet * activeButtons;                            //@synthesize activeButtons=_activeButtons - In the implementation block
@property (nonatomic,copy) NSArray * desiredButtons;                         //@synthesize desiredButtons=_desiredButtons - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;              //@synthesize suspended=_suspended - In the implementation block
-(void)setDesiredButtons:(NSArray *)arg1 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NSArray *)desiredButtons;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(NSSet *)activeButtons;
-(void)setSuspended:(BOOL)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setPressType:(long long)arg1 ;
-(long long)pressType;
-(BOOL)isSuspended;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(long long)lastActiveButton;
-(void)setActiveButtons:(NSSet *)arg1 ;
-(void)_updateApplicationButtonStatus;
-(void)setLastActiveButton:(long long)arg1 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(long long)_captureButtonForPressType:(long long)arg1 ;
@end
