/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusTest.h>

@protocol UIFocusItem;
@class NSTimer, UIScrollView;

@interface _UIFocusFastScrollingTest : _UIFocusTest {

	unsigned long long _currentScroll;
	CGPoint _originalContentOffset;
	id<UIFocusItem> _originalFocusedItem;
	NSTimer* _delayTimer;
	UIScrollView* _scrollView;
	double _peakScrollVelocity;
	unsigned long long _numberOfScrollsToPerform;
	double _delayBetweenScrolls;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) double peakScrollVelocity;                                //@synthesize peakScrollVelocity=_peakScrollVelocity - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfScrollsToPerform;              //@synthesize numberOfScrollsToPerform=_numberOfScrollsToPerform - In the implementation block
@property (assign,nonatomic) double delayBetweenScrolls;                               //@synthesize delayBetweenScrolls=_delayBetweenScrolls - In the implementation block
-(void)main;
-(UIScrollView *)scrollView;
-(void)reset;
-(double)peakScrollVelocity;
-(void)setPeakScrollVelocity:(double)arg1 ;
-(double)delayBetweenScrolls;
-(void)_performFocusFastScrolling;
-(unsigned long long)numberOfScrollsToPerform;
-(void)setNumberOfScrollsToPerform:(unsigned long long)arg1 ;
-(void)setDelayBetweenScrolls:(double)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)cancel;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)prepareWithCompletionHandler:(/*^block*/id)arg1 ;
@end

