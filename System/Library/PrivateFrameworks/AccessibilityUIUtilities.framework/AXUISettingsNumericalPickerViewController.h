/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccessibilityUIUtilities/AXUISettingsSetupCapableListController.h>
#import <libobjc.A.dylib/AXUISettingsEditableTableCellWithStepperDelegate.h>

@class NSString;

@interface AXUISettingsNumericalPickerViewController : AXUISettingsSetupCapableListController <AXUISettingsEditableTableCellWithStepperDelegate> {

	double _cachedNumericalValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(id)localizedTitle;
-(double)minimumValue;
-(void)viewDidLoad;
-(double)maximumValue;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)userCanDisableNumericalPreference;
-(BOOL)shouldDisablePreferenceEntirely;
-(id)localizedFooterText;
-(void)setDelayEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)delayEnabled:(id)arg1 ;
-(BOOL)numericalPreferenceEnabled;
-(id)localizedPickerFooterText;
-(id)_delayPickerSpecifier;
-(void)setNumericalPreferenceEnabledFromUser:(BOOL)arg1 ;
-(BOOL)shouldSaveOnExit;
-(id)_delayPickerFooterSpecifier;
-(void)setNumericalPreferenceValueFromUser:(double)arg1 ;
-(double)stepAmount;
-(double)numericalPreferenceValue;
-(id)stringValueForSpecifier:(id)arg1 ;
-(double)valueForSpecifier:(id)arg1 ;
-(id)localizedTextForValue:(double)arg1 ;
-(void)specifier:(id)arg1 setValue:(double)arg2 ;
-(double)stepValueForSpecifier:(id)arg1 ;
-(double)minimumValueForSpecifier:(id)arg1 ;
-(double)maximumValueForSpecifier:(id)arg1 ;
@end

