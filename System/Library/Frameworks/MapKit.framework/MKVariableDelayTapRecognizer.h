/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITapGestureRecognizer.h>

@protocol MKVariableDelayTapRecognizerDelegate;
@interface MKVariableDelayTapRecognizer : UITapGestureRecognizer {

	double originalMaximumIntervalBetweenSuccessiveTaps;
	id<MKVariableDelayTapRecognizerDelegate> tapDelayDelegate;

}

@property (assign,nonatomic,__weak) id<MKVariableDelayTapRecognizerDelegate> tapDelayDelegate; 
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)reset;
-(void)setTapDelayDelegate:(id<MKVariableDelayTapRecognizerDelegate>)arg1 ;
-(id<MKVariableDelayTapRecognizerDelegate>)tapDelayDelegate;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
@end

