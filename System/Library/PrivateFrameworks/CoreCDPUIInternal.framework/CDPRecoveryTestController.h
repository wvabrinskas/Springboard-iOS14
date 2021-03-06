/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPUIInternal.framework/CoreCDPUIInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CDPDBackupInfoRecoveryFlowController, NSArray, UINavigationController;

@interface CDPRecoveryTestController : NSObject {

	CDPDBackupInfoRecoveryFlowController* _recoveryController;
	NSArray* _mockDevices;
	UINavigationController* _navController;

}
-(void)setUp;
-(id)initWithDevices:(id)arg1 andNavigationController:(id)arg2 ;
-(void)beginIDMSRecoveryFlowWithSecretFailure;
-(void)beginIDMSRecoveryFlow;
-(id)dummyRecoveryInfo;
@end

