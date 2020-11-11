/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, IKViewElementStyle, TVAppStyle, NSString, NSShadow, TVColor;

@interface TVViewElementStyle : NSObject <NSCopying> {

	NSMutableDictionary* _cachedColorObjects;
	IKViewElementStyle* _style;

}

@property (nonatomic,__weak,readonly) IKViewElementStyle * style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) TVAppStyle * styleMetrics; 
@property (nonatomic,readonly) NSString * textTransform; 
@property (nonatomic,readonly) NSShadow * shadow; 
@property (nonatomic,readonly) TVColor * backgroundColor; 
@property (nonatomic,readonly) TVColor * color; 
@property (nonatomic,readonly) double fontSize; 
@property (nonatomic,readonly) NSString * fontWeight; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) UIEdgeInsets margin; 
@property (nonatomic,readonly) UIEdgeInsets focusMargin; 
@property (nonatomic,readonly) double maxHeight; 
@property (nonatomic,readonly) double maxWidth; 
@property (nonatomic,readonly) double minHeight; 
@property (nonatomic,readonly) double minWidth; 
@property (nonatomic,readonly) UIEdgeInsets padding; 
@property (nonatomic,readonly) long long textAlignment; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) long long alignment; 
@property (nonatomic,readonly) long long contentAlignment; 
@property (nonatomic,readonly) TVColor * highlightColor; 
@property (nonatomic,readonly) NSString * imageTreatmentName; 
@property (nonatomic,readonly) double interitemSpacing; 
@property (nonatomic,readonly) NSString * textHighlightStyle; 
@property (nonatomic,readonly) double textMinimumScaleFactor; 
@property (nonatomic,readonly) long long position; 
@property (nonatomic,readonly) NSString * ratingStyle; 
@property (nonatomic,readonly) unsigned long long maxTextLines; 
@property (nonatomic,readonly) NSString * textStyle; 
@property (nonatomic,readonly) TVColor * tintColor; 
-(NSShadow *)shadow;
-(UIEdgeInsets)margin;
-(double)interitemSpacing;
-(NSString *)fontWeight;
-(double)height;
-(double)width;
-(double)maxWidth;
-(double)minWidth;
-(long long)textAlignment;
-(double)fontSize;
-(id)initWithStyle:(id)arg1 ;
-(double)minHeight;
-(TVColor *)backgroundColor;
-(UIEdgeInsets)padding;
-(NSString *)textStyle;
-(IKViewElementStyle *)style;
-(long long)alignment;
-(long long)position;
-(double)maxHeight;
-(TVColor *)tintColor;
-(long long)contentAlignment;
-(TVColor *)color;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TVColor *)highlightColor;
-(NSString *)textTransform;
-(id)darkTintColor;
-(unsigned long long)maxTextLines;
-(UIEdgeInsets)focusMargin;
-(NSString *)textHighlightStyle;
-(id)valueForStyleProperty:(id)arg1 ;
-(TVAppStyle *)styleMetrics;
-(void)setStyleMetrics:(TVAppStyle *)arg1 ;
-(id)cssValueForStyleProperty:(id)arg1 ;
-(NSString *)imageTreatmentName;
-(double)textMinimumScaleFactor;
-(NSString *)ratingStyle;
@end
