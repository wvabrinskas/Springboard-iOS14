/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIView;

@interface SBSimplePasscodeEntryFieldButton : UIView {

	BOOL _useLightStyle;
	BOOL _revealed;
	UIEdgeInsets _paddingOutsideRing;
	UIColor* _color;
	UIView* _ringView;
	BOOL _animatingUnreveal;

}

@property (assign,getter=isAnimatingUnreveal,nonatomic) BOOL animatingUnreveal;              //@synthesize animatingUnreveal=_animatingUnreveal - In the implementation block
-(void)layoutSubviews;
-(void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 delay:(double)arg3 ;
-(id)initWithFrame:(CGRect)arg1 paddingOutsideRing:(UIEdgeInsets)arg2 useLightStyle:(BOOL)arg3 ;
-(void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isAnimatingUnreveal;
-(void)setAnimatingUnreveal:(BOOL)arg1 ;
@end

