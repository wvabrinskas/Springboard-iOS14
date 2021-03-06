/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/HMUserManagementRemoteHost.h>

@protocol HMUserManagementRemoteHost;
@interface HMUserListRemoteViewController : _UIRemoteViewController <HMUserManagementRemoteHost> {

	id<HMUserManagementRemoteHost> _delegate;

}

@property (assign,nonatomic,__weak) id<HMUserManagementRemoteHost> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
+(id)serviceViewControllerInterface;
-(id<HMUserManagementRemoteHost>)delegate;
-(void)userManagementDidFinishWithError:(id)arg1 ;
-(void)userManagementDidLoad;
-(void)setDelegate:(id<HMUserManagementRemoteHost>)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)viewDidLoad;
@end

