/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemoteTextInput/RTIInputSystemSession.h>
#import <libobjc.A.dylib/RTIInputSystemPayloadDelegate.h>

@protocol RTIInputSystemPayloadDelegate;
@class RTIDataPayload, NSString;

@interface RTIInputSystemSourceSession : RTIInputSystemSession <RTIInputSystemPayloadDelegate> {

	id<RTIInputSystemPayloadDelegate> _forwardingPayloadDelegate;
	id<RTIInputSystemPayloadDelegate> _payloadDelegate;

}

@property (assign,nonatomic,__weak) id<RTIInputSystemPayloadDelegate> payloadDelegate;                        //@synthesize payloadDelegate=_payloadDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<RTIInputSystemPayloadDelegate> forwardingPayloadDelegate;              //@synthesize forwardingPayloadDelegate=_forwardingPayloadDelegate - In the implementation block
@property (nonatomic,copy,readonly) RTIDataPayload * currentForwardingDataPayload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)flushOperations;
-(void)addSessionDelegate:(id)arg1 ;
-(id<RTIInputSystemPayloadDelegate>)payloadDelegate;
-(id<RTIInputSystemPayloadDelegate>)forwardingPayloadDelegate;
-(void)handleTextActionPayload:(id)arg1 ;
-(void)setForwardingPayloadDelegate:(id<RTIInputSystemPayloadDelegate>)arg1 ;
-(RTIDataPayload *)currentForwardingDataPayload;
-(void)setPayloadDelegate:(id<RTIInputSystemPayloadDelegate>)arg1 ;
-(void)handleForwardingResponseActionPayload:(id)arg1 ;
-(void)setSessionDelegate:(id)arg1 ;
@end
