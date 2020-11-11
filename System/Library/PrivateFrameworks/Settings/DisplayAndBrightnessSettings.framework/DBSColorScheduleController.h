/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DisplayAndBrightnessSettings/DisplayAndBrightnessSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSDateTimePickerCellDelegate.h>

@class CBClient, PSSpecifier, NSDateFormatter, UIDatePicker;

@interface DBSColorScheduleController : PSListController <PSDateTimePickerCellDelegate> {

	CBClient* _brightnessClient;
	PSSpecifier* _radioGroup;
	PSSpecifier* _sunsetToSunriseRadioSpecifier;
	PSSpecifier* _scheduleRadioSpecifier;
	PSSpecifier* _timeGroup;
	PSSpecifier* _startTimePickerSpecifier;
	PSSpecifier* _endTimePickerSpecifier;
	NSDateFormatter* _timeFormatter;
	BOOL _showingScheduleSpecifiers;
	UIDatePicker* _startTimePicker;
	UIDatePicker* _endTimePicker;

}
-(id)endTime;
-(id)specifiers;
-(id)startTime;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)datePickerChanged:(id)arg1 ;
-(id)datePickerForSpecifier:(id)arg1 ;
-(void)willResignActive;
-(void)dealloc;
-(void)handleBlueLightStatusChanged:(SCD_Struct_DB2*)arg1 ;
-(void)showScheduleSpecifiers:(BOOL)arg1 animated:(BOOL)arg2 ;
-(int)blueLightMode;
@end
