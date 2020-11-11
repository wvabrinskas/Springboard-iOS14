/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UINavigationController.h>

@interface MCUINavigationViewController : UINavigationController {

	/*^block*/id _showViewControllerCompletionBlock;

}

@property (nonatomic,copy) id showViewControllerCompletionBlock;              //@synthesize showViewControllerCompletionBlock=_showViewControllerCompletionBlock - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLoad;
-(BOOL)shouldAutorotate;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setShowViewControllerCompletionBlock:(id)arg1 ;
-(id)showViewControllerCompletionBlock;
@end
