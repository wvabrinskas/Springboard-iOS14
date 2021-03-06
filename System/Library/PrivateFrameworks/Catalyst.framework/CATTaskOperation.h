/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATOperation.h>

@protocol CATTaskOperationNotificationDelegate;
@class CATTaskRequest, NSUUID;

@interface CATTaskOperation : CATOperation {

	CATTaskRequest* _request;
	id<CATTaskOperationNotificationDelegate> _notificationDelegate;
	NSUUID* _remoteUUID;

}

@property (nonatomic,copy) NSUUID * remoteUUID;                                                                 //@synthesize remoteUUID=_remoteUUID - In the implementation block
@property (nonatomic,readonly) CATTaskRequest * request;                                                        //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<CATTaskOperationNotificationDelegate> notificationDelegate;              //@synthesize notificationDelegate=_notificationDelegate - In the implementation block
+(BOOL)isCancelable;
+(id)new;
+(BOOL)validateRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)canSendNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)setRemoteUUID:(NSUUID *)arg1 ;
-(id)cat_assertions;
-(void)cat_addAssertion:(id)arg1 ;
-(NSUUID *)remoteUUID;
-(void)processNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(CATTaskRequest *)request;
-(id<CATTaskOperationNotificationDelegate>)notificationDelegate;
-(void)processMessage:(id)arg1 ;
-(void)postNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(void)setNotificationDelegate:(id<CATTaskOperationNotificationDelegate>)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)main;
@end

