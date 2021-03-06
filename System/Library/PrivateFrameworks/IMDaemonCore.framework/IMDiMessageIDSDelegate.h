/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/IDSServiceDelegatePrivate.h>

@class IDSService, IMDiMessageIncomingMessageHandler, IMDMessageStore, IMDAccountController, IMDMessageFromStorageController, IMDChatRegistry, IMDMessageSuppressionController, IMDRecentsController, NSString;

@interface IMDiMessageIDSDelegate : NSObject <IDSServiceDelegatePrivate> {

	BOOL _runningInAutomation;
	IDSService* _idsService;
	IDSService* _bizChatService;
	IMDiMessageIncomingMessageHandler* _handler;
	IMDMessageStore* _messageStore;
	IMDAccountController* _accountController;
	IMDMessageFromStorageController* _messageFromStorageController;
	IMDChatRegistry* _chatRegistry;
	IMDMessageSuppressionController* _messageSuppressionController;
	IMDRecentsController* _recentsController;

}

@property (retain,readonly) IDSService * idsService;                                                     //@synthesize idsService=_idsService - In the implementation block
@property (retain,readonly) IDSService * bizChatService;                                                 //@synthesize bizChatService=_bizChatService - In the implementation block
@property (retain,readonly) IMDiMessageIncomingMessageHandler * handler;                                 //@synthesize handler=_handler - In the implementation block
@property (retain,readonly) IMDMessageStore * messageStore;                                              //@synthesize messageStore=_messageStore - In the implementation block
@property (retain,readonly) IMDAccountController * accountController;                                    //@synthesize accountController=_accountController - In the implementation block
@property (retain,readonly) IMDMessageFromStorageController * messageFromStorageController;              //@synthesize messageFromStorageController=_messageFromStorageController - In the implementation block
@property (retain,readonly) IMDChatRegistry * chatRegistry;                                              //@synthesize chatRegistry=_chatRegistry - In the implementation block
@property (retain,readonly) IMDMessageSuppressionController * messageSuppressionController;              //@synthesize messageSuppressionController=_messageSuppressionController - In the implementation block
@property (retain,readonly) IMDRecentsController * recentsController;                                    //@synthesize recentsController=_recentsController - In the implementation block
@property (assign) BOOL runningInAutomation;                                                             //@synthesize runningInAutomation=_runningInAutomation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_writePayload:(id)arg1 toURL:(id)arg2 ;
+(id)commandToHandlerBlock;
+(BOOL)isDefaultPairedDevice:(id)arg1 withAccount:(id)arg2 ;
-(IDSService *)idsService;
-(BOOL)runningInAutomation;
-(IMDAccountController *)accountController;
-(id)init;
-(id)broadcaster;
-(id)initWithiMessageService:(id)arg1 bizChatService:(id)arg2 incomingMessageHandler:(id)arg3 messageStore:(id)arg4 chatRegistry:(id)arg5 accountController:(id)arg6 messageSuppressionController:(id)arg7 storageController:(id)arg8 recentsController:(id)arg9 ;
-(IMDMessageSuppressionController *)messageSuppressionController;
-(IMDMessageFromStorageController *)messageFromStorageController;
-(void)service:(id)arg1 account:(id)arg2 incomingTopLevelMessage:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5 ;
-(IMDChatRegistry *)chatRegistry;
-(void)setRunningInAutomation:(BOOL)arg1 ;
-(IMDRecentsController *)recentsController;
-(IDSService *)bizChatService;
-(IMDiMessageIncomingMessageHandler *)handler;
-(IMDMessageStore *)messageStore;
@end

