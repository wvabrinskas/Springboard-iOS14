/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUCenterFillOBWelcomeController.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class UIImageView, NSString;

@interface HUAnnounceTitleViewController : HUCenterFillOBWelcomeController <HUConfigurationViewController> {

	id<HUConfigurationViewControllerDelegate> delegate;
	UIImageView* _contentImageView;

}

@property (nonatomic,retain) UIImageView * contentImageView;                                         //@synthesize contentImageView=_contentImageView - In the implementation block
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate; 
@property (assign,nonatomic) BOOL isFinalStep; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(id)initWithHome:(id)arg1 ;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(UIImageView *)contentImageView;
-(void)continuePressed:(id)arg1 ;
-(void)setContentImageView:(UIImageView *)arg1 ;
-(BOOL)_limitToNonScrollingContentHeight;
@end

