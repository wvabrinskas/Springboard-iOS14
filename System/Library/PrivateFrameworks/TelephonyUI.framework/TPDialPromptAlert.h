/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TelephonyUI/TPAlert.h>
#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>

@class SBSRemoteAlertHandle, NSString, NSSet, BSProcessHandle;

@interface TPDialPromptAlert : TPAlert <SBSRemoteAlertHandleObserver> {

	SBSRemoteAlertHandle* _remoteAlertHandle;
	/*^block*/id _dialAction;
	NSString* _buttonTitle;
	NSSet* _handles;
	BSProcessHandle* _processHandle;

}

@property (nonatomic,retain) SBSRemoteAlertHandle * remoteAlertHandle;              //@synthesize remoteAlertHandle=_remoteAlertHandle - In the implementation block
@property (nonatomic,copy) id dialAction;                                           //@synthesize dialAction=_dialAction - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonTitle;                         //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSSet * handles;                                //@synthesize handles=_handles - In the implementation block
@property (nonatomic,readonly) BSProcessHandle * processHandle;                     //@synthesize processHandle=_processHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)show;
-(NSSet *)handles;
-(BSProcessHandle *)processHandle;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(NSString *)buttonTitle;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(id)title;
-(id)initWithDialRequest:(id)arg1 dialAction:(/*^block*/id)arg2 ;
-(id)initWithJoinRequest:(id)arg1 dialAction:(/*^block*/id)arg2 ;
-(id)defaultButtonTitle;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)dealloc;
-(id)otherButtonTitle;
-(void)setRemoteAlertHandle:(SBSRemoteAlertHandle *)arg1 ;
-(SBSRemoteAlertHandle *)remoteAlertHandle;
-(id)initWithButtonTitle:(id)arg1 handles:(id)arg2 dialAction:(/*^block*/id)arg3 ;
-(id)phoneNumberHandle;
-(void)defaultResponse;
-(void)otherResponse;
-(id)dialAction;
-(void)setDialAction:(id)arg1 ;
@end
