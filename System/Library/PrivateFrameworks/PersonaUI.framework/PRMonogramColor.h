/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, UIColor, NSBundle;

@interface PRMonogramColor : NSObject {

	NSString* _colorName;
	UIColor* _color;
	UIColor* _gradientStartColor;
	UIColor* _gradientEndColor;
	UIColor* _selectedActiveColor;
	UIColor* _selectedInactiveColor;
	UIColor* _selectedActiveTextColor;
	NSBundle* _bundle;

}

@property (nonatomic,retain) UIColor * color;                                //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIColor * gradientStartColor;                   //@synthesize gradientStartColor=_gradientStartColor - In the implementation block
@property (nonatomic,retain) UIColor * gradientEndColor;                     //@synthesize gradientEndColor=_gradientEndColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedActiveColor;                  //@synthesize selectedActiveColor=_selectedActiveColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedInactiveColor;                //@synthesize selectedInactiveColor=_selectedInactiveColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedActiveTextColor;              //@synthesize selectedActiveTextColor=_selectedActiveTextColor - In the implementation block
@property (nonatomic,retain) NSBundle * bundle;                              //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) NSString * colorName;                         //@synthesize colorName=_colorName - In the implementation block
+(id)defaultSelectedActiveTextColor;
+(id)defaultBundle;
+(id)colorWithName:(id)arg1 inBundle:(id)arg2 ;
+(id)monogramGradientColorNamed:(id)arg1 ;
+(id)defaultSelectedActiveColor;
+(id)defaultSelectedInactiveColor;
+(id)defaultGradientStartColor;
+(id)generateMonogramGradientColorsByNameDictionary;
+(id)availableColorNames;
+(id)gradientStartColor:(id)arg1 ;
+(id)gradientEndName:(id)arg1 ;
+(id)availableColors;
+(id)gradientStartName:(id)arg1 ;
+(id)defaultGradientEndColor;
-(void)setBundle:(NSBundle *)arg1 ;
-(unsigned long long)hash;
-(id)initWithColorName:(id)arg1 ;
-(void)setColorName:(NSString *)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(NSBundle *)bundle;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)colorName;
-(void)setGradientStartColor:(UIColor *)arg1 ;
-(void)setGradientEndColor:(UIColor *)arg1 ;
-(UIColor *)gradientStartColor;
-(UIColor *)gradientEndColor;
-(UIColor *)color;
-(id)initWithRandomColor;
-(UIColor *)selectedActiveColor;
-(UIColor *)selectedInactiveColor;
-(UIColor *)selectedActiveTextColor;
-(id)initWithColorName:(id)arg1 inBundle:(id)arg2 ;
-(void)setSelectedActiveColor:(UIColor *)arg1 ;
-(void)setSelectedInactiveColor:(UIColor *)arg1 ;
-(void)setSelectedActiveTextColor:(UIColor *)arg1 ;
@end
