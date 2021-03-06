/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@class AMSUIWebViewController, ACAccount, AMSProcessInfo, NSDictionary, NSString;

@interface AMSUISubscriptionsViewController : UIViewController <AMSBagConsumer> {

	AMSUIWebViewController* _webViewController;

}

@property (nonatomic,readonly) AMSUIWebViewController * webViewController;              //@synthesize webViewController=_webViewController - In the implementation block
@property (nonatomic,retain) ACAccount * account; 
@property (nonatomic,retain) id<AMSBagProtocol> bag; 
@property (nonatomic,retain) AMSProcessInfo * clientInfo; 
@property (nonatomic,retain) NSDictionary * metricsOverlay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createBagForSubProfile;
+(id)bagSubProfile;
+(id)bagKeySet;
+(id)bagSubProfileVersion;
-(void)_setup;
-(void)viewWillLayoutSubviews;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(ACAccount *)account;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)_startLoading;
-(id)initWithAccount:(id)arg1 bag:(id)arg2 ;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(void)viewDidLoad;
-(void)_setupChildViewController;
-(NSDictionary *)metricsOverlay;
-(void)setMetricsOverlay:(NSDictionary *)arg1 ;
-(AMSUIWebViewController *)webViewController;
-(void)_setChildViewController:(id)arg1 ;
-(id)initWithAccount:(id)arg1 bag:(id)arg2 clientInfo:(id)arg3 ;
-(void)_setupLayout;
@end

