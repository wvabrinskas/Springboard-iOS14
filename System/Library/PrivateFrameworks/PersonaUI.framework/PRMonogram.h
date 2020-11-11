/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PersonaUI/PersonaUI-Structs.h>
@class NSString, UIColor, PRMonogramColor;

@interface PRMonogram : NSObject {

	NSString* _text;
	unsigned long long _fontIndex;
	UIColor* _color;
	PRMonogramColor* _monogramColor;

}

@property (nonatomic,copy) NSString * text;                                         //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) unsigned long long fontIndex;                          //@synthesize fontIndex=_fontIndex - In the implementation block
@property (nonatomic,retain) UIColor * color;                                       //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) PRMonogramColor * monogramColor;                       //@synthesize monogramColor=_monogramColor - In the implementation block
@property (nonatomic,readonly) UIColor * plateFlatColor; 
@property (nonatomic,readonly) UIColor * plateGradientStartColor; 
@property (nonatomic,readonly) UIColor * plateGradientEndColor; 
@property (nonatomic,readonly) UIColor * plateSelectedActiveColor; 
@property (nonatomic,readonly) UIColor * plateSelectedInactiveColor; 
@property (nonatomic,readonly) UIColor * plateSelectedActiveTextColor; 
+(id)_fontSpecs;
+(id)monogramWithData:(id)arg1 ;
+(void)updatePlateOverlayLayer:(id)arg1 ;
+(id)monogram;
+(unsigned long long)countOfFonts;
+(id)plateOverlayLayer;
+(double)kerningForFontIndex:(unsigned long long)arg1 fontSize:(double)arg2 ;
+(id)fontForIndex:(unsigned long long)arg1 plateDiameter:(double)arg2 ;
-(void)setText:(NSString *)arg1 ;
-(void)appendToRecipe:(id)arg1 text:(id)arg2 fontIndex:(unsigned char)arg3 ;
-(id)initWithText:(id)arg1 fontIndex:(unsigned long long)arg2 monogramColor:(id)arg3 ;
-(id)init;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(id)dataRepresentation;
-(id)stringAttributesForDiameter:(double)arg1 ;
-(NSString *)text;
-(void)setColor:(UIColor *)arg1 ;
-(UIColor *)plateSelectedActiveColor;
-(UIColor *)plateGradientEndColor;
-(id)description;
-(UIColor *)plateGradientStartColor;
-(BOOL)_renderTextInContext:(CGContextRef)arg1 frame:(CGRect)arg2 ;
-(UIColor *)plateSelectedActiveTextColor;
-(UIColor *)plateFlatColor;
-(id)dataRepresentationWithVersion:(unsigned char)arg1 ;
-(void)setMonogramColor:(PRMonogramColor *)arg1 ;
-(void)appendToRecipe:(id)arg1 text:(id)arg2 ;
-(void)setFontIndexToUnsupportedValue;
-(PRMonogramColor *)monogramColor;
-(id)snapshotWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3 ;
-(void)_takeValuesFromDataRepresentation:(id)arg1 ;
-(UIColor *)color;
-(id)_initWithData:(id)arg1 ;
-(unsigned long long)fontIndex;
-(UIColor *)plateSelectedInactiveColor;
@end
