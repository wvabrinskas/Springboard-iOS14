/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AKAuthorizationSubPaneAdding.h>

@class UIViewController, UIView;

@interface AKAuthorizationSubPane : NSObject <AKAuthorizationSubPaneAdding> {

	UIViewController* _viewController;
	UIView* _internalView;
	double _internalCustomSpacingAfter;

}

@property (nonatomic,readonly) UIView * internalView;                          //@synthesize internalView=_internalView - In the implementation block
@property (assign,nonatomic) double internalCustomSpacingAfter;                //@synthesize internalCustomSpacingAfter=_internalCustomSpacingAfter - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic) double customSpacingAfter; 
-(id)initWithView:(id)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(UIView *)view;
-(UIViewController *)viewController;
-(UIView *)internalView;
-(double)internalCustomSpacingAfter;
-(void)setInternalCustomSpacingAfter:(double)arg1 ;
-(void)addToStackView:(id)arg1 context:(id)arg2 ;
-(void)addToConstraints:(id)arg1 context:(id)arg2 ;
-(double)customSpacingAfter;
-(void)setCustomSpacingAfter:(double)arg1 ;
@end

