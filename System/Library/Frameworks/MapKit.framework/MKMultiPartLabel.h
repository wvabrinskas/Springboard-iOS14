/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UITextView, NSDictionary, MKMultiPartAttributedString, UIFont, UIColor, _MKMultiPartLabelMetrics, NSString;

@interface MKMultiPartLabel : UIView {

	UITextView* _textView;
	CGRect _previousBounds;
	NSDictionary* _cachedTextAttributes;
	NSDictionary* _lastAppliedNonColorAttributes;
	BOOL _highlighted;
	MKMultiPartAttributedString* _multiPartString;
	UIFont* _font;
	UIColor* _textColor;
	long long _textAlignment;
	UIColor* _highlightedTextColor;
	_MKMultiPartLabelMetrics* _data;

}

@property (nonatomic,retain) _MKMultiPartLabelMetrics * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) MKMultiPartAttributedString * multiPartString;              //@synthesize multiPartString=_multiPartString - In the implementation block
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) UIFont * font;                                              //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                        //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLines; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) long long textAlignment;                                    //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textInset; 
@property (nonatomic,retain) UIColor * highlightedTextColor;                             //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                      //@synthesize highlighted=_highlighted - In the implementation block
+(id)_formattedStringsCache;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)lineBreakMode;
-(void)setText:(NSString *)arg1 ;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(id)viewForLastBaselineLayout;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(UIColor *)highlightedTextColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setData:(_MKMultiPartLabelMetrics *)arg1 ;
-(void)_updateStrings;
-(id)viewForFirstBaselineLayout;
-(void)setNumberOfLines:(unsigned long long)arg1 ;
-(void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2 ;
-(unsigned long long)numberOfLines;
-(long long)textAlignment;
-(UIFont *)font;
-(NSString *)text;
-(void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_MKMultiPartLabelMetrics *)data;
-(UIEdgeInsets)textInset;
-(BOOL)isHighlighted;
-(void)_setupTextView;
-(void)_updateColorsForCurrentState;
-(void)setMultiPartString:(MKMultiPartAttributedString *)arg1 ;
-(void)setTextInset:(UIEdgeInsets)arg1 ;
-(id)_attributedAdjustedMultiPartStringFromString:(id)arg1 ;
-(void)_updateTextViewTextAndInvalidateLayout:(id)arg1 ;
-(id)_addDefaultAttributesToAttributedString:(id)arg1 ;
-(MKMultiPartAttributedString *)multiPartString;
-(id)_textAttributes;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end
