/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActivityRingsUI/ARUICountdownDefaultAnimation.h>
#import <libobjc.A.dylib/ARUICountdownAnimation.h>

@interface ARUICountdownCancel : ARUICountdownDefaultAnimation <ARUICountdownAnimation>
+(id)identifier;
-(double)delay;
-(id)identifier;
-(id)timingFunction;
-(BOOL)cancelable;
-(double)duration;
-(void)cancel;
-(void)applyToCountdownView:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

