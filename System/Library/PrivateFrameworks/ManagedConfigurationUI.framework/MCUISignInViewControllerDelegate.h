/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MCUISignInViewControllerDelegate <NSObject>
@optional
-(void)signInViewController:(id)arg1 willAuthenticateWithCompletionHandler:(/*^block*/id)arg2;
-(void)signInViewControllerDidCancelAuthentication:(id)arg1;

@required
-(void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;

@end
