/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIView;


@protocol PLClickPresentationInteractionPresentable <NSObject>
@property (assign,nonatomic,__weak) id<PLClickPresentationInteractionPresenting> presenter; 
@property (nonatomic,readonly) UIView * viewWithContent; 
@property (nonatomic,readonly) UIView * viewForTouchContinuation; 
@optional
-(UIView *)viewForTouchContinuation;
-(UIView *)viewWithContent;

@required
-(void)setPresenter:(id)arg1;
-(id<PLClickPresentationInteractionPresenting>)presenter;

@end

