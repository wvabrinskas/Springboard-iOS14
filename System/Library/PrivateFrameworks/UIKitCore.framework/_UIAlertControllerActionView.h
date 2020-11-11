/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIAlertActionViewRepresentation_Internal.h>

@class UIView, UILabel, NSLayoutConstraint, NSArray, UIImageView, UIAlertAction, UIAlertControllerVisualStyle, _UIAlertControllerActionViewMetrics, UIAlertController, NSString;

@interface _UIAlertControllerActionView : UIView <UIGestureRecognizerDelegate, UIAlertActionViewRepresentation_Internal> {

	BOOL _highlighted;
	UIView* _labelContainerView;
	UILabel* _label;
	NSLayoutConstraint* _axLabelContainerWidthConstraint;
	NSLayoutConstraint* _labelContainerLeadingConstraint;
	NSLayoutConstraint* _labelContainerTrailingConstraint;
	NSLayoutConstraint* _labelContainerCenterXConstraint;
	NSLayoutConstraint* _labelContainerLeadingPinConstraint;
	NSLayoutConstraint* _labelContainerTrailingPinConstraint;
	NSLayoutConstraint* _labelWidthConstraint;
	NSLayoutConstraint* _labelCenterLeadingConstraint;
	UIView* _contentViewControllerContainerView;
	NSArray* _contentViewControllerConstraints;
	UILabel* _descriptiveLabel;
	NSArray* _havingDescriptiveLabelConstraints;
	NSArray* _notHavingDescriptiveLabelConstraints;
	NSLayoutConstraint* _descriptiveLabelWidthConstraint;
	NSLayoutConstraint* _descriptiveLabelTrailingToLabelLeadingLabelConstraint;
	NSLayoutConstraint* _descriptiveLabelTrailingToContainerCenterConstraint;
	UIImageView* _checkView;
	NSLayoutConstraint* _checkToMarginConstraint;
	UIImageView* _imageView;
	NSLayoutConstraint* _marginToImageConstraint;
	NSLayoutConstraint* _imageViewBaselineOrCenterYConstraint;
	NSLayoutConstraint* _imageViewTopConstraint;
	NSLayoutConstraint* _imageViewBottomConstraint;
	NSLayoutConstraint* _minimumHeightConstraint;
	UIAlertAction* _action;
	UIAlertControllerVisualStyle* _visualStyle;
	_UIAlertControllerActionViewMetrics* _metrics;
	BOOL _hasDescriptiveText;
	double _axEnforcedWidth;
	UIAlertController* _alertController;

}

@property (retain) NSLayoutConstraint * labelContainerCenterXConstraint;                     //@synthesize labelContainerCenterXConstraint=_labelContainerCenterXConstraint - In the implementation block
@property (retain) NSLayoutConstraint * labelContainerLeadingPinConstraint;                  //@synthesize labelContainerLeadingPinConstraint=_labelContainerLeadingPinConstraint - In the implementation block
@property (retain) NSLayoutConstraint * labelContainerTrailingPinConstraint;                 //@synthesize labelContainerTrailingPinConstraint=_labelContainerTrailingPinConstraint - In the implementation block
@property (nonatomic,copy) UIAlertAction * action; 
@property (assign,nonatomic,__weak) UIAlertController * alertController;                     //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic,__weak) UIAlertControllerVisualStyle * visualStyle;              //@synthesize visualStyle=_visualStyle - In the implementation block
@property (readonly) double currentDescriptiveLabelTextWidth; 
@property (readonly) double currentLabelTextWidth; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
-(UIAlertControllerVisualStyle *)visualStyle;
-(UIAlertController *)alertController;
-(void)setVisualStyle:(UIAlertControllerVisualStyle *)arg1 ;
-(void)applyMetrics:(id)arg1 ;
-(BOOL)hasLayoutHeightConstraintsIdenticalToInterfaceActionCustomView:(id)arg1 ;
-(void)tintColorDidChange;
-(void)_updateTextAlignmentForHavingDescriptiveText:(BOOL)arg1 titleTextAlignment:(long long)arg2 ;
-(void)_updateStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_removeContentViewControllerContainerViewSubviews;
-(void)_updateContentViewControllerContainerViewConstraints;
-(void)_buildContentViewControllerContainerConstraints;
-(void)_prepareConstraintsForHavingDescriptiveText:(BOOL)arg1 ;
-(void)underlyingInterfaceActionRepresentationDidChange;
-(void)_loadContentViewControllerContainerViewIfNecessary;
-(void)_buildNotHavingDescriptiveLabelConstraints;
-(BOOL)hasActiveMinimumSizeConstraintsWithSize:(CGSize)arg1 ;
-(void)_updateHavingDescriptiveLabelConstraints;
-(void)_action:(id)arg1 updatedImageTintColor:(id)arg2 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)_action:(id)arg1 changedToChecked:(BOOL)arg2 ;
-(void)setLabelContainerLeadingPinConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLabelContainerTrailingPinConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateImageView;
-(void)_buildHavingDescriptiveLabelConstraints;
-(void)updateHeightUsingAXEnforcedWidth:(double)arg1 ;
-(NSString *)description;
-(NSLayoutConstraint *)labelContainerLeadingPinConstraint;
-(void)_updateLabelContainerConstraints;
-(double)currentDescriptiveLabelTextWidth;
-(void)setAction:(UIAlertAction *)arg1 ;
-(void)setLabelContainerCenterXConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelContainerTrailingPinConstraint;
-(void)_action:(id)arg1 changedToBePreferred:(BOOL)arg2 ;
-(void)_loadContentViewControllerView;
-(BOOL)isHighlighted;
-(NSLayoutConstraint *)labelContainerCenterXConstraint;
-(void)_action:(id)arg1 updatedTitleTextColor:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_interfaceActionViewState;
-(void)_action:(id)arg1 changedToTitle:(id)arg2 ;
-(void)_updateImageViewAttributes;
-(void)_buildImageViewConstraints;
-(void)_buildCheckViewConstraints;
-(void)_prepareConstraintsForImage:(id)arg1 ;
-(long long)_effectiveTitleTextAlignment;
-(void)_action:(id)arg1 changedToEnabled:(BOOL)arg2 ;
-(void)_loadImageView;
-(void)_loadCheckView;
-(void)_buildConstraints;
-(void)_recomputeColors;
-(void)_updateMinimumHeight;
-(void)_contentSizeChanged;
-(void)_updateImageMargins;
-(void)_loadDescriptiveLabel;
-(void)_updateCheckImageView;
-(double)currentLabelTextWidth;
-(void)_updateLabelAttributes;
-(void)_action:(id)arg1 changedToTitleTextAlignment:(long long)arg2 ;
-(void)_updateDescriptiveText;
-(void)dealloc;
-(UIAlertAction *)action;
-(void)setHighlighted:(BOOL)arg1 ;
@end
