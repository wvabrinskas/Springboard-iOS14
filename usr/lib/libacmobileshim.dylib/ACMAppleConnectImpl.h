/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libacmobileshim.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ACMAppleConnectImpl.h>
@class ACMAppleConnectImplComponents, UIView;


@protocol ACMAppleConnectImpl <NSObject>
@property (readonly) ACMAppleConnectImplComponents * components; 
@property (readonly) unsigned long long signInDialogContentStyle; 
@property (readonly) UIView * managerApprovalDialogSummaryView; 
@required
-(ACMAppleConnectImplComponents *)components;
-(unsigned long long)signInDialogContentStyle;
-(void)logoutUser:(id)arg1 inRealm:(id)arg2;
-(void)updateLogLevel;
-(UIView *)managerApprovalDialogSummaryView;

@end

#import <libobjc.A.dylib/ACMUIControllerDelegate.h>

@class ACMAppleConnectImplComponents, UIView, NSError, NSMutableSet, NSString;

@interface ACMAppleConnectImpl : NSObject <ACMAppleConnectImpl, ACMUIControllerDelegate> {

	NSError* _memoryError;
	NSMutableSet* _handlers;

}

@property (assign) long long logLevel; 
@property (retain,readonly) NSMutableSet * handlers; 
@property (readonly) ACMAppleConnectImplComponents * components; 
@property (readonly) unsigned long long signInDialogContentStyle; 
@property (readonly) UIView * managerApprovalDialogSummaryView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableSet *)handlers;
-(id)init;
-(void)setLogLevel:(long long)arg1 ;
-(void)cancelRequests;
-(long long)logLevel;
-(ACMAppleConnectImplComponents *)components;
-(void)dealloc;
-(void)authenticate:(id)arg1 ;
-(unsigned long long)signInDialogContentStyle;
-(void)scheduleHandler:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)unscheduleHandler:(id)arg1 ;
-(void)logoutUser:(id)arg1 inRealm:(id)arg2 ;
-(void)updateLogLevel;
-(UIView *)managerApprovalDialogSummaryView;
-(void)authenticateRunningOnMainThreadWithRequest:(id)arg1 ;
-(void)unscheduleAllHandlers;
-(void)changeGestureRunningOnMainThreadWithRequest:(id)arg1 ;
-(void)changePasswordRunningOnMainThreadWithRequest:(id)arg1 ;
-(void)uiControllerOnLogOut:(id)arg1 ;
-(unsigned long long)uiControllerSignInDialogContentStyle:(id)arg1 ;
-(id)uiControllerManagerApprovalDialogSummaryView:(id)arg1 ;
-(id)memoryError;
-(void)changeUserPasswordWithRequest:(id)arg1 isGesture:(BOOL)arg2 ;
-(BOOL)shouldReleaseOnMemoryWarning;
-(void)verifyServiceTicket:(id)arg1 ;
@end
