/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UILabel, UIView, NSArray;

@interface PUTimeCodeOverlayView : UIView {

	UILabel* _timecodeLabelView;
	UIView* _timecodeBackgroundView;
	UIView* _verticalLineView;
	NSArray* _overlayConstraints;
	double _displayedTimeInterval;

}

@property (assign,nonatomic) double displayedTimeInterval;              //@synthesize displayedTimeInterval=_displayedTimeInterval - In the implementation block
-(void)didMoveToSuperview;
-(void)setDisplayedTimeInterval:(double)arg1 ;
-(void)updateTimeDisplay;
-(double)displayedTimeInterval;
@end
