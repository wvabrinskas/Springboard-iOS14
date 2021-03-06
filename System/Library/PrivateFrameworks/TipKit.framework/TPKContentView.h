/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipKit.framework/TipKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TipKit/TipKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TPKContentViewDelegate;
@class UITraitCollection, NSString, NSBundle, UIView, NSLayoutConstraint, NSArray, TPKContent, UIColor;

@interface TPKContentView : UIView {

	BOOL _isPopOverView;
	UITraitCollection* __preferredTraitCollection;
	long long __cacheHorizontalSizeClass;
	NSString* __cacheContentSizeCategory;
	NSBundle* __frameworkBundle;
	UIView* __contentView;
	UIView* __bottomSeparatorView;
	NSLayoutConstraint* __bottomSeparatorHeightConstraint;
	NSLayoutConstraint* __contentViewBottomConstraint;
	NSLayoutConstraint* __contentViewTopConstraint;
	NSLayoutConstraint* __compactSizeClassLeadingConstraint;
	NSLayoutConstraint* __compactSizeClassTrailingConstraint;
	NSArray* _compactSizeClassHorizontalConstraints;
	NSArray* _regularSizeClassHorizontalConstraints;
	BOOL _displaysBottomSeparator;
	BOOL _asPopover;
	BOOL __accessbilitySizeCategory;
	TPKContent* _content;
	UIColor* _preferredIconImageTintColor;
	UIColor* _preferredActionTintColor;
	unsigned long long _arrowDirection;
	id<TPKContentViewDelegate> __delegate;
	CGSize _preferredMicaLayerSize;
	NSDirectionalEdgeInsets _defaultDirectionalEdgeInsets;

}

@property (assign,nonatomic) BOOL asPopover;                                                                 //@synthesize asPopover=_asPopover - In the implementation block
@property (assign,nonatomic) unsigned long long arrowDirection;                                              //@synthesize arrowDirection=_arrowDirection - In the implementation block
@property (assign,getter=_isAccessbilitySizeCategory,nonatomic) BOOL _accessbilitySizeCategory;              //@synthesize _accessbilitySizeCategory=__accessbilitySizeCategory - In the implementation block
@property (assign,nonatomic,__weak) id<TPKContentViewDelegate> _delegate;                                    //@synthesize _delegate=__delegate - In the implementation block
@property (nonatomic,copy) UIView * _contentView;                                                            //@synthesize _contentView=__contentView - In the implementation block
@property (nonatomic,copy) NSBundle * _frameworkBundle;                                                      //@synthesize _frameworkBundle=__frameworkBundle - In the implementation block
@property (nonatomic,copy) TPKContent * content;                                                             //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets defaultDirectionalEdgeInsets;                           //@synthesize defaultDirectionalEdgeInsets=_defaultDirectionalEdgeInsets - In the implementation block
@property (assign,nonatomic) BOOL displaysBottomSeparator;                                                   //@synthesize displaysBottomSeparator=_displaysBottomSeparator - In the implementation block
@property (assign,nonatomic) CGSize preferredMicaLayerSize;                                                  //@synthesize preferredMicaLayerSize=_preferredMicaLayerSize - In the implementation block
@property (nonatomic,copy) UIColor * contentBackgroundColor; 
@property (nonatomic,copy) UIColor * preferredIconImageTintColor;                                            //@synthesize preferredIconImageTintColor=_preferredIconImageTintColor - In the implementation block
@property (nonatomic,copy) UIColor * preferredActionTintColor;                                               //@synthesize preferredActionTintColor=_preferredActionTintColor - In the implementation block
+(id)SiriIconWithTraitCollection:(id)arg1 ;
+(CGSize)defaultMicaSize;
+(id)TipsIconWithTraitCollection:(id)arg1 ;
+(id)systemImageWithIdentifier:(id)arg1 ;
+(CGSize)preferredIconImageSizeWithImageSize:(CGSize)arg1 isSymbol:(BOOL)arg2 ;
-(void)_contentSizeCategoryDidChange;
-(double)topPadding;
-(double)bottomPadding;
-(id)init;
-(void)willMoveToWindow:(id)arg1 ;
-(NSBundle *)_frameworkBundle;
-(id)layoutIdentifier;
-(void)setContent:(TPKContent *)arg1 ;
-(void)setDisplaysBottomSeparator:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)set_delegate:(id<TPKContentViewDelegate>)arg1 ;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(id)_preferredTraitCollection;
-(id)_currentContentSizeCategory;
-(void)setPreferredMicaLayerSize:(CGSize)arg1 ;
-(CGSize)preferredMicaLayerSize;
-(id<TPKContentViewDelegate>)_delegate;
-(UIView *)_contentView;
-(unsigned long long)arrowDirection;
-(TPKContent *)content;
-(void)dealloc;
-(void)updateConstraints;
-(void)set_contentView:(UIView *)arg1 ;
-(double)sidePadding;
-(void)setAsPopover:(BOOL)arg1 ;
-(void)setContentBackgroundColor:(UIColor *)arg1 ;
-(void)updateHorizontalContraints;
-(BOOL)asPopover;
-(void)_configureAsPopover:(BOOL)arg1 withContent:(id)arg2 ;
-(BOOL)_isHorizontalSizeClassChanged:(id)arg1 ;
-(BOOL)_isAccessibilitySizeCategoryChanged;
-(void)_accessibilitySizeCategoryDidChange;
-(BOOL)_isContentSizeAccessibilityCategory;
-(void)setDefaultDirectionalEdgeInsets:(NSDirectionalEdgeInsets)arg1 ;
-(UIColor *)contentBackgroundColor;
-(id)_initWithContent:(id)arg1 asPopover:(BOOL)arg2 ;
-(void)_setPreferredTraitCollection:(id)arg1 ;
-(id)_currentContentLanguage;
-(BOOL)_isContentSizeCategoryChanged;
-(NSDirectionalEdgeInsets)defaultDirectionalEdgeInsets;
-(BOOL)displaysBottomSeparator;
-(UIColor *)preferredIconImageTintColor;
-(void)setPreferredIconImageTintColor:(UIColor *)arg1 ;
-(UIColor *)preferredActionTintColor;
-(void)setPreferredActionTintColor:(UIColor *)arg1 ;
-(BOOL)_isAccessbilitySizeCategory;
-(void)set_accessbilitySizeCategory:(BOOL)arg1 ;
-(void)set_frameworkBundle:(NSBundle *)arg1 ;
@end

