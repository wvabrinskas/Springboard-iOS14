/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@interface _SFPinnableBanner : UIView {

	BOOL _pinnedToTop;
	BOOL _initiallyBehindNavigationBar;

}

@property (assign,getter=isPinnedToTop,nonatomic) BOOL pinnedToTop;                                                //@synthesize pinnedToTop=_pinnedToTop - In the implementation block
@property (assign,getter=isInitiallyBehindNavigationBar,nonatomic) BOOL initiallyBehindNavigationBar;              //@synthesize initiallyBehindNavigationBar=_initiallyBehindNavigationBar - In the implementation block
+(double)unpinAnimationDuration;
+(double)unpinAnimationDelay;
+(double)pinAnimationDelay;
-(BOOL)isPinnedToTop;
-(void)setPinnedToTop:(BOOL)arg1 ;
-(void)contentSizeCategoryDidChange;
-(BOOL)isInitiallyBehindNavigationBar;
-(void)setInitiallyBehindNavigationBar:(BOOL)arg1 ;
-(void)invalidateBannerLayout;
@end

