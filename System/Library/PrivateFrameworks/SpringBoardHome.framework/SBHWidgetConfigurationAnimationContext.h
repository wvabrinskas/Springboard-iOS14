/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIView, SBIconView, MTMaterialView;


@protocol SBHWidgetConfigurationAnimationContext
@property (nonatomic,readonly) long long operation; 
@property (nonatomic,readonly) BOOL wantsAnimation; 
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) CGRect contentBoundingRect; 
@property (nonatomic,readonly) UIView * homeScreenContentView; 
@property (nonatomic,readonly) SBIconView * sourceView; 
@property (nonatomic,readonly) SBIconView * referenceView; 
@property (nonatomic,readonly) CGRect sourceContentFrame; 
@property (nonatomic,readonly) UIView * targetView; 
@property (nonatomic,readonly) CGRect targetContentFrame; 
@property (nonatomic,readonly) MTMaterialView * backgroundView; 
@property (nonatomic,readonly) UIView * backgroundTintView; 
@required
-(BOOL)wantsAnimation;
-(UIView *)targetView;
-(SBIconView *)sourceView;
-(MTMaterialView *)backgroundView;
-(UIView *)containerView;
-(long long)operation;
-(UIView *)backgroundTintView;
-(CGRect)contentBoundingRect;
-(CGRect)sourceContentFrame;
-(UIView *)homeScreenContentView;
-(CGRect)targetContentFrame;
-(SBIconView *)referenceView;

@end

