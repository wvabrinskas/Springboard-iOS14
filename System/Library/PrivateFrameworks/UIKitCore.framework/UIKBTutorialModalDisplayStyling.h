/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, UIColor;

@interface UIKBTutorialModalDisplayStyling : NSObject {

	NSArray* _backgroundEffects;
	UIColor* _backgroundColor;
	UIColor* _mainTextColor;
	UIColor* _buttonTextColor;

}

@property (nonatomic,retain) NSArray * backgroundEffects;              //@synthesize backgroundEffects=_backgroundEffects - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * mainTextColor;                  //@synthesize mainTextColor=_mainTextColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonTextColor;                //@synthesize buttonTextColor=_buttonTextColor - In the implementation block
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)initWithKeyboardAppearance:(long long)arg1 ;
-(NSArray *)backgroundEffects;
-(void)setBackgroundEffects:(NSArray *)arg1 ;
-(void)setButtonTextColor:(UIColor *)arg1 ;
-(UIColor *)buttonTextColor;
-(UIColor *)mainTextColor;
-(id)backgroundBlurEffects:(long long)arg1 ;
-(void)setMainTextColor:(UIColor *)arg1 ;
@end

