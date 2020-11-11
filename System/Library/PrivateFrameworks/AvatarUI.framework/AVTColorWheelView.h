/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AvatarUI/AvatarUI-Structs.h>
#import <AvatarUI/AVTAttributeValueView.h>

@class UIView, NSArray;

@interface AVTColorWheelView : AVTAttributeValueView {

	UIView* _containerView;
	NSArray* _circleViews;

}

@property (nonatomic,retain) UIView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSArray * circleViews;               //@synthesize circleViews=_circleViews - In the implementation block
+(id)buildCircleViewWithDiameter:(double)arg1 ;
+(BOOL)colorItems:(id)arg1 containColorItem:(id)arg2 ;
+(id)colorItemsFrom:(id)arg1 excluding:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)buildAllCircleViews;
-(void)setCircleViews:(NSArray *)arg1 ;
-(CGPoint)rotatePoint:(CGPoint)arg1 aroundCenter:(CGPoint)arg2 withAngle:(double)arg3 ;
-(NSArray *)circleViews;
-(void)updateWithPrimaryItems:(id)arg1 extendedItems:(id)arg2 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
@end
