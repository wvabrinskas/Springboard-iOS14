/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFCompactPlatterSizingDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/WFCompactPlatterPresentation.h>

@protocol WFCompactPlatterContentContainer;
@class WFCompactPlatterView, UIViewController, WFCompactPlatterTransitioningDelegate, UIScrollView, NSString;

@interface WFCompactPlatterViewController : UIViewController <WFCompactPlatterSizingDelegate, UIScrollViewDelegate, WFCompactPlatterPresentation> {

	BOOL _platterHeightAnimationsDisabled;
	WFCompactPlatterView* _platterView;
	id<WFCompactPlatterContentContainer> _platterContentContainer;
	UIViewController* _contentViewController;
	WFCompactPlatterTransitioningDelegate* _wf_transitioningDelegate;
	UIScrollView* _scrollView;
	CGSize _minimumPlatterSize;

}

@property (nonatomic,retain) WFCompactPlatterTransitioningDelegate * wf_transitioningDelegate;                 //@synthesize wf_transitioningDelegate=_wf_transitioningDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                                 //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) CGSize minimumPlatterSize;                                                        //@synthesize minimumPlatterSize=_minimumPlatterSize - In the implementation block
@property (nonatomic,__weak,readonly) WFCompactPlatterView * platterView;                                      //@synthesize platterView=_platterView - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;                                         //@synthesize contentViewController=_contentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WFCompactPlatterContentContainer> platterContentContainer;              //@synthesize platterContentContainer=_platterContentContainer - In the implementation block
@property (assign,nonatomic) BOOL platterHeightAnimationsDisabled;                                             //@synthesize platterHeightAnimationsDisabled=_platterHeightAnimationsDisabled - In the implementation block
-(void)setTransitioningDelegate:(id)arg1 ;
-(WFCompactPlatterView *)platterView;
-(id)init;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(UIScrollView *)scrollView;
-(BOOL)_canShowWhileLocked;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)loadView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIViewController *)contentViewController;
-(double)contentHeightForWidth:(double)arg1 withMaximumVisibleHeight:(double)arg2 ;
-(BOOL)platterHeightAnimationsDisabled;
-(void)setPlatterHeightAnimationsDisabled:(BOOL)arg1 ;
-(double)platterHeightForWidth:(double)arg1 withMaximumHeight:(double)arg2 ;
-(id<WFCompactPlatterContentContainer>)platterContentContainer;
-(void)setPlatterContentContainer:(id<WFCompactPlatterContentContainer>)arg1 ;
-(void)invalidateContentSize;
-(void)platterViewDidInvalidateSize:(id)arg1 ;
-(void)updateContentSizeAndPlatterPosition;
-(void)updatePlatterPosition;
-(double)maximumExpectedVisibleContentHeight;
-(void)invalidatePlatterSize;
-(WFCompactPlatterTransitioningDelegate *)wf_transitioningDelegate;
-(void)setWf_transitioningDelegate:(WFCompactPlatterTransitioningDelegate *)arg1 ;
-(CGSize)minimumPlatterSize;
-(void)setMinimumPlatterSize:(CGSize)arg1 ;
@end
