/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIStepperControl.h>

@protocol UIStepperVisualElement;
@class NSMutableDictionary, UIView;

@interface UIStepper : UIControl <UIStepperControl> {

	NSMutableDictionary* _dividerImages;
	NSMutableDictionary* _incrementImages;
	NSMutableDictionary* _decrementImages;
	NSMutableDictionary* _backgroundImages;
	BOOL _continuous;
	BOOL _autorepeat;
	BOOL _wraps;
	double _value;
	double _minimumValue;
	double _maximumValue;
	double _stepValue;
	UIView*<UIStepperVisualElement> _visualElement;

}

@property (nonatomic,retain) UIView*<UIStepperVisualElement> visualElement;              //@synthesize visualElement=_visualElement - In the implementation block
@property (assign,getter=isContinuous,nonatomic) BOOL continuous;                        //@synthesize continuous=_continuous - In the implementation block
@property (assign,nonatomic) BOOL autorepeat;                                            //@synthesize autorepeat=_autorepeat - In the implementation block
@property (assign,nonatomic) BOOL wraps;                                                 //@synthesize wraps=_wraps - In the implementation block
@property (assign,nonatomic) double value;                                               //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double minimumValue;                                        //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) double maximumValue;                                        //@synthesize maximumValue=_maximumValue - In the implementation block
@property (assign,nonatomic) double stepValue;                                           //@synthesize stepValue=_stepValue - In the implementation block
+(void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)arg1 ;
+(BOOL)_allowsUnsupportedMacIdiomBehavior;
+(id)visualElementForTraitCollection:(id)arg1 ;
+(Class)_fallbackVisualElementClass;
+(Class)visualElementClassForTraitCollection:(id)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(double)stepValue;
-(BOOL)wraps;
-(unsigned long long)_controlEventsForActionTriggered;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)setContinuous:(BOOL)arg1 ;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)backgroundImageForState:(unsigned long long)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setWraps:(BOOL)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)autorepeat;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)visualElementDidSetValue:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setIncrementImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)incrementImageForState:(unsigned long long)arg1 ;
-(void)setDecrementImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)decrementImageForState:(unsigned long long)arg1 ;
-(id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 ;
-(void)visualElementSendValueChangedEvent:(id)arg1 ;
-(void)setMaximumValue:(double)arg1 ;
-(double)minimumValue;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView*<UIStepperVisualElement>)visualElement;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(double)maximumValue;
-(double)value;
-(id)initWithCoder:(id)arg1 ;
-(void)_refreshVisualElementForTraitCollection:(id)arg1 populatingAPIProperties:(BOOL)arg2 ;
-(void)setValue:(double)arg1 ;
-(void)setStepValue:(double)arg1 ;
-(void)setVisualElement:(UIView*<UIStepperVisualElement>)arg1 ;
-(void)_emitValueChanged;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setMinimumValue:(double)arg1 ;
-(void)_refreshVisualElement;
-(void)setAutorepeat:(BOOL)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isContinuous;
-(void)_commonStepperInit;
@end

