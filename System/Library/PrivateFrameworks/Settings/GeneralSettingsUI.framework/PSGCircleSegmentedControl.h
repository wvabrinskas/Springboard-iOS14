/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIControl.h>

@protocol PSGCircleSegmentedControlDelegate;
@class NSMutableArray, UIStackView, PSGCircleSegment, UIImage, UILabel;

@interface PSGCircleSegmentedControl : UIControl {

	NSMutableArray* _segmentPlaceholders;
	NSMutableArray* _segments;
	UIStackView* _stack;
	PSGCircleSegment* _selectedSegment;
	NSMutableArray* _segmentConstraints;
	NSMutableArray* _selectedSegmentConstraints;
	UIImage* _placeholderImage;
	UIImage* _buttonImage;
	UIImage* _highlightedImage;
	UIImage* _activeImage;
	id<PSGCircleSegmentedControlDelegate> _delegate;
	UILabel* _label;

}

@property (assign,nonatomic,__weak) id<PSGCircleSegmentedControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * label;                                                    //@synthesize label=_label - In the implementation block
-(UILabel *)label;
-(id)init;
-(id<PSGCircleSegmentedControlDelegate>)delegate;
-(void)addSegmentWithTitle:(id)arg1 ;
-(void)setDelegate:(id<PSGCircleSegmentedControlDelegate>)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setSelectedSegmentIndex:(unsigned long long)arg1 ;
-(id)styleSensitiveImage:(/*^block*/id)arg1 ;
-(id)_circleImageWithColor:(id)arg1 fillColor:(id)arg2 diameter:(double)arg3 ;
-(void)segmentTapped:(id)arg1 ;
-(void)setPositionConstraintsActive:(BOOL)arg1 forButtonAtIndex:(unsigned long long)arg2 ;
-(void)selectSegmentAtIndex:(unsigned long long)arg1 ;
-(void)menuButtonPressed;
@end
