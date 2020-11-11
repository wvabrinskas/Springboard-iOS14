/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PodcastsUI/PodcastsUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol IMExpandingLabelDelegate;
@class CAGradientLayer, UITextView, NSString, NSDictionary, UIButton;

@interface IMExpandingLabel : UIView {

	CAGradientLayer* _gradientLayer;
	id _gradientClearColor;
	id _gradientSemiClearColor;
	id _gradientSolidColor;
	BOOL _expanded;
	BOOL _hasGradient;
	BOOL _fitsWithinLineLimit;
	UITextView* _textView;
	NSString* _text;
	NSDictionary* _textAttributes;
	unsigned long long _numberOfLines;
	long long _textMode;
	UIButton* _moreButton;
	double _gradientHeight;
	id<IMExpandingLabelDelegate> _delegate;
	unsigned long long _languageDirection;

}

@property (assign,nonatomic) BOOL fitsWithinLineLimit;                                  //@synthesize fitsWithinLineLimit=_fitsWithinLineLimit - In the implementation block
@property (assign,nonatomic) unsigned long long languageDirection;                      //@synthesize languageDirection=_languageDirection - In the implementation block
@property (nonatomic,retain) UITextView * textView;                                     //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) NSString * text;                                             //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSDictionary * textAttributes;                               //@synthesize textAttributes=_textAttributes - In the implementation block
@property (assign,getter=isScrollEnabled,nonatomic) BOOL scrollEnabled; 
@property (assign,nonatomic) unsigned long long numberOfLines;                          //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) long long textMode;                                        //@synthesize textMode=_textMode - In the implementation block
@property (nonatomic,retain) UIButton * moreButton;                                     //@synthesize moreButton=_moreButton - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                           //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) BOOL hasGradient;                                          //@synthesize hasGradient=_hasGradient - In the implementation block
@property (assign,nonatomic) double gradientHeight;                                     //@synthesize gradientHeight=_gradientHeight - In the implementation block
@property (assign,nonatomic,__weak) id<IMExpandingLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)isScrollEnabled;
-(UITextView *)textView;
-(void)setExpanded:(BOOL)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setLanguageDirection:(unsigned long long)arg1 ;
-(BOOL)isExpanded;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNumberOfLines:(unsigned long long)arg1 ;
-(NSDictionary *)textAttributes;
-(id<IMExpandingLabelDelegate>)delegate;
-(long long)textMode;
-(unsigned long long)numberOfLines;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(NSString *)text;
-(void)setTextView:(UITextView *)arg1 ;
-(void)setDelegate:(id<IMExpandingLabelDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(double)heightForWidth:(double)arg1 ;
-(void)setTextMode:(long long)arg1 ;
-(double)gradientHeight;
-(void)setGradientHeight:(double)arg1 ;
-(unsigned long long)languageDirection;
-(void)moreButtonTapped:(id)arg1 ;
-(UIButton *)moreButton;
-(void)setMoreButton:(UIButton *)arg1 ;
-(void)setFitsWithinLineLimit:(BOOL)arg1 ;
-(BOOL)fitsWithinLineLimit;
-(BOOL)hasGradient;
-(void)setHasGradient:(BOOL)arg1 ;
@end
