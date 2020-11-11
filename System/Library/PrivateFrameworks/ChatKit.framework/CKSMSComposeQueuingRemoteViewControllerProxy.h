/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKSMSCompose;
@class NSMutableArray;

@interface CKSMSComposeQueuingRemoteViewControllerProxy : NSObject {

	NSMutableArray* _queuedInvocations;
	id<CKSMSCompose> _serviceViewControllerProxy;

}

@property (nonatomic,retain) NSMutableArray * queuedInvocations;                       //@synthesize queuedInvocations=_queuedInvocations - In the implementation block
@property (nonatomic,retain) id<CKSMSCompose> serviceViewControllerProxy;              //@synthesize serviceViewControllerProxy=_serviceViewControllerProxy - In the implementation block
-(id)init;
-(void)setServiceViewControllerProxy:(id<CKSMSCompose>)arg1 ;
-(id<CKSMSCompose>)serviceViewControllerProxy;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(NSMutableArray *)queuedInvocations;
-(void)setQueuedInvocations:(NSMutableArray *)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)dealloc;
@end
