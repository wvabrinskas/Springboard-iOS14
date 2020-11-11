/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIButton.h>

@interface HUColoredButton : UIButton {

	BOOL _backgroundColorFollowsTintColor;
	double _highlightedAlpha;
	double _highlightedTextAlpha;

}

@property (assign,nonatomic) double highlightedAlpha;                           //@synthesize highlightedAlpha=_highlightedAlpha - In the implementation block
@property (assign,nonatomic) double highlightedTextAlpha;                       //@synthesize highlightedTextAlpha=_highlightedTextAlpha - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) BOOL backgroundColorFollowsTintColor;              //@synthesize backgroundColorFollowsTintColor=_backgroundColorFollowsTintColor - In the implementation block
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(double)highlightedAlpha;
-(void)setHighlightedAlpha:(double)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 highlightedAlpha:(double)arg2 highlightedTextAlpha:(double)arg3 ;
-(void)setHighlightedTextAlpha:(double)arg1 ;
-(double)highlightedTextAlpha;
-(BOOL)backgroundColorFollowsTintColor;
-(void)setBackgroundColorFollowsTintColor:(BOOL)arg1 ;
@end
