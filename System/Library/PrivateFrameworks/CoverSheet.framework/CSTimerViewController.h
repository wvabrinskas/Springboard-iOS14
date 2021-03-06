/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@protocol CSTimerViewControllerDelegate;
@class NSTimer, NSDate, MTTimerManager;

@interface CSTimerViewController : CSCoverSheetViewControllerBase {

	BOOL _enabled;
	NSTimer* _updateTimer;
	NSDate* _endDate;
	MTTimerManager* _timerManager;
	id<CSTimerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSTimerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                  //@synthesize enabled=_enabled - In the implementation block
-(void)_stopTimerNotifyingDelegate:(BOOL)arg1 ;
-(id<CSTimerViewControllerDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setEndDate:(id)arg1 ;
-(id)timerView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)isTimerActive;
-(void)setDelegate:(id<CSTimerViewControllerDelegate>)arg1 ;
-(void)_stopTimer;
-(void)_updateNextTimer;
-(void)_nextTimerChanged:(id)arg1 ;
-(BOOL)isEndDateValid;
-(void)_startTimer;
-(void)_updateTimerFired;
-(BOOL)isEnabled;
-(void)loadView;
-(void)_updateTimerLabelView;
-(void)dealloc;
@end

