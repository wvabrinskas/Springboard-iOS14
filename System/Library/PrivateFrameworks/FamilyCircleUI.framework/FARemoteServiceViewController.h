/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/FARemoteServiceProtocol.h>
#import <libobjc.A.dylib/RUIPresentationHandling.h>

@class FACircleContext, NSXPCConnection, NSString;

@interface FARemoteServiceViewController : UIViewController <FARemoteServiceProtocol, RUIPresentationHandling> {

	FACircleContext* _circleContext;
	NSXPCConnection* _lookupConnection;
	BOOL _isFlowStarted;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(unsigned long long)supportedInterfaceOrientations;
-(void)dealloc;
-(void)_showFamilyFlow;
-(void)_dismissAndExit;
-(void)_main_dismissAndExit;
-(void)startFlowWithContext:(id)arg1 ;
-(void)_presentAsChildViewController:(id)arg1 ;
-(void)presentModalRUIController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)replaceModalRUIController:(id)arg1 byController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissModalRUIController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)ruiPresentAlertController:(id)arg1 ;
-(void)ruiDidDismissAlertController:(id)arg1 ;
@end
