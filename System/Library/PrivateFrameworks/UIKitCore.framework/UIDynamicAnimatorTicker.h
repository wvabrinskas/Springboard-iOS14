/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIDynamicAnimator;

@interface UIDynamicAnimatorTicker : NSObject {

	UIDynamicAnimator* _animator;

}

@property (__weak) UIDynamicAnimator * animator;              //@synthesize animator=_animator - In the implementation block
-(void)_displayLinkTick:(id)arg1 ;
-(UIDynamicAnimator *)animator;
-(void)setAnimator:(UIDynamicAnimator *)arg1 ;
@end
