/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUIDynamic.framework/AppleMediaServicesUIDynamic
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AMSUICommonViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class ACAccount, AMSProcessInfo, NSDictionary, UINavigationItem, NSString;

@interface AMSUIDDynamicViewController : AMSUICommonViewController <UIViewControllerTransitioningDelegate> {

	 account;
	 anonymousMetrics;
	 bag;
	 clientInfo;
	 clientOptions;
	 delegate;
	 internalClientOptions;
	 metricsOverlay;
	 automaticErrorRetry;
	 child;
	 $__lazy_storage_$_childNavigationController;
	 objectGraph;
	 urlPromise;

}

@property (retain,nonatomic) ACAccount * account; 
@property (assign,nonatomic) BOOL anonymousMetrics; 
@property (retain,nonatomic) id<AMSBagProtocol> bag; 
@property (retain,nonatomic) AMSProcessInfo * clientInfo; 
@property (copy,nonatomic) NSDictionary * clientOptions; 
@property (assign,__weak,nonatomic) id<AMSUIDDynamicViewControllerDelegate> delegate; 
@property (copy,nonatomic) NSDictionary * internalClientOptions; 
@property (copy,nonatomic) NSDictionary * metricsOverlay; 
@property (readonly,nonatomic) UINavigationItem * navigationItem; 
@property (copy,nonatomic) NSString * title; 
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(id)init;
-(ACAccount *)account;
-(id<AMSUIDDynamicViewControllerDelegate>)delegate;
-(void)didEnterBackground;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)willEnterForeground;
-(id<AMSBagProtocol>)bag;
-(UINavigationItem *)navigationItem;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setDelegate:(id<AMSUIDDynamicViewControllerDelegate>)arg1 ;
-(void)setClientOptions:(NSDictionary *)arg1 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(void)viewDidLoad;
-(NSDictionary *)metricsOverlay;
-(void)setMetricsOverlay:(NSDictionary *)arg1 ;
-(NSString *)title;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)cancelButtonAction;
-(void)setTitle:(NSString *)arg1 ;
-(void)loadView;
-(void)dealloc;
-(void)setAnonymousMetrics:(BOOL)arg1 ;
-(id)initWithBag:(id)arg1 URL:(id)arg2 ;
-(id)initWithBag:(id)arg1 bagValue:(id)arg2 ;
-(BOOL)anonymousMetrics;
-(NSDictionary *)clientOptions;
-(NSDictionary *)internalClientOptions;
-(void)setInternalClientOptions:(NSDictionary *)arg1 ;
-(void)reloadContentViewImpressionItems;
-(void)legacyPurchaseDidSucceed:(id)arg1 ;
@end
