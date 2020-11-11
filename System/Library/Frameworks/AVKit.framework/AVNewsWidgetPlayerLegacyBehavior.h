/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVNewsWidgetPlayerBehavior.h>

@protocol AVPlayerViewControllerContentTransitioning_NewsOnly;
@interface AVNewsWidgetPlayerLegacyBehavior : AVNewsWidgetPlayerBehavior {

	id<AVPlayerViewControllerContentTransitioning_NewsOnly> _legacyDelegate;

}

@property (assign,nonatomic,__weak) id<AVPlayerViewControllerContentTransitioning_NewsOnly> legacyDelegate;              //@synthesize legacyDelegate=_legacyDelegate - In the implementation block
-(id<AVPlayerViewControllerContentTransitioning_NewsOnly>)legacyDelegate;
-(void)setLegacyDelegate:(id<AVPlayerViewControllerContentTransitioning_NewsOnly>)arg1 ;
-(id)playerForContentTransitionType:(long long)arg1 ;
-(void)willBeginContentTransition;
-(void)didUpdateContentTransitionProgress:(double)arg1 ;
-(void)willCompleteContentTransition;
-(void)didCompleteContentTransition;
-(void)willCancelContentTransition;
-(void)didCancelContentTransition;
@end
