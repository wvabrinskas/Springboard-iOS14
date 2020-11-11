/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PlatterKit/PLClickPresentationTransition.h>

@class PLClickPresentationPresentationTransition;

@interface PLClickPresentationDismissalTransition : PLClickPresentationTransition {

	PLClickPresentationPresentationTransition* _presentationTransition;

}

@property (assign,nonatomic,__weak) PLClickPresentationPresentationTransition * presentationTransition;              //@synthesize presentationTransition=_presentationTransition - In the implementation block
-(PLClickPresentationPresentationTransition *)presentationTransition;
-(void)setPresentationTransition:(PLClickPresentationPresentationTransition *)arg1 ;
-(id)initWithTransitionDelegate:(id)arg1 presentingViewController:(id)arg2 presentedViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_configureTransitionContextWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)updateBackgroundViewForTransition;
-(id)_newAnimator;
@end
