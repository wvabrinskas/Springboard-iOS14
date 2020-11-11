/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKTableViewCell.h>

@class PKPaymentAuthorizationLayout, UILabel, NSMutableArray, UIView, UIImageView, NSString, NSAttributedString, UIImage;

@interface PKPaymentAuthorizationItemCell : PKTableViewCell {

	PKPaymentAuthorizationLayout* _layout;
	UILabel* _labelView;
	NSMutableArray* _valueViews;
	UIView* _separatorView;
	UIImageView* _arrowView;
	UIImageView* _alertView;
	UIImageView* _labelImageView;
	NSMutableArray* _constraints;
	BOOL _constraintsDirty;
	BOOL _showsDisclosure;
	BOOL _showsSeparator;
	BOOL _centered;
	NSString* _accessibilityLabel;

}

@property (nonatomic,copy) NSAttributedString * label; 
@property (nonatomic,copy) UIImage * labelImage; 
@property (nonatomic,copy) NSString * accessibilityLabel;                  //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (assign,nonatomic) BOOL showsDisclosure;                         //@synthesize showsDisclosure=_showsDisclosure - In the implementation block
@property (assign,nonatomic) BOOL showsSeparator;                          //@synthesize showsSeparator=_showsSeparator - In the implementation block
@property (assign,getter=isCentered,nonatomic) BOOL centered;              //@synthesize centered=_centered - In the implementation block
-(NSString *)accessibilityLabel;
-(id)addValue:(id)arg1 ;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(NSAttributedString *)label;
-(id)_createValueView;
-(id)colorForValueType:(unsigned long long)arg1 ;
-(id)_applyStylingToValueString:(id)arg1 defaultColor:(id)arg2 ;
-(BOOL)showsDisclosure;
-(BOOL)showsSeparator;
-(id)initWithLayout:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)_createSubviews;
-(void)setShowsDisclosure:(BOOL)arg1 ;
-(id)addValue:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setLabelImage:(UIImage *)arg1 ;
-(BOOL)isCentered;
-(void)setLabel:(NSAttributedString *)arg1 ;
-(void)prepareForReuse;
-(void)setShowsSeparator:(BOOL)arg1 ;
-(UIImage *)labelImage;
-(void)setCentered:(BOOL)arg1 ;
-(void)dealloc;
-(void)updateConstraints;
@end
