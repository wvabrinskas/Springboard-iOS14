/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PreferenceBundles/CarrierSettings.bundle/CarrierSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView;

@interface PHSpinnerAndCheckmarkCell : PSTableCell {

	UIActivityIndicatorView* _spinner;
	unsigned _loading : 1;
	unsigned _rightAlignSpinner : 1;
	int _row;

}
-(void)setLoading:(BOOL)arg1 ;
-(void)setRow:(int)arg1 ;
-(void)setChecked:(BOOL)arg1 ;
-(void)_addSpinner;
-(void)setReallyChecked:(BOOL)arg1 ;
-(void)_removeSpinner;
@end

