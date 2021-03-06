/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthExposureNotificationUI.framework/HealthExposureNotificationUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/ENUIHostViewControllerProtocol.h>

@protocol ENUIHostViewControllerDelegate;
@interface ENUIHostViewController : _UIRemoteViewController <ENUIHostViewControllerProtocol> {

	id<ENUIHostViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) id<ENUIRemoteViewControllerProtocol> _remoteViewControllerProxy; 
@property (assign,nonatomic,__weak) id<ENUIHostViewControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)requestRemoteViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(void)show;
-(void)didFinishWithError:(id)arg1 ;
-(id<ENUIHostViewControllerDelegate>)delegate;
-(void)setDelegate:(id<ENUIHostViewControllerDelegate>)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)viewDidLoad;
-(id<ENUIRemoteViewControllerProtocol>)_remoteViewControllerProxy;
-(void)setPresentationRequest:(id)arg1 ;
@end

