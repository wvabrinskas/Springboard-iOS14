/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIButton.h>

@class UISegment;

@interface UISegmentAccessibilityButton : UIButton {

	UISegment* _segment;

}

@property (nonatomic,retain) UISegment * segment;              //@synthesize segment=_segment - In the implementation block
+(id)buttonWithSegment:(id)arg1 ;
-(void)setSegment:(UISegment *)arg1 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)layoutSubviews;
-(UISegment *)segment;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

