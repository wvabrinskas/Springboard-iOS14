/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKSubcredentialProvisioningSharingSessionOperation.h>

@class PKAppletSubcredential, PKPaymentWebService, PKAppletSubcredentialSharingInvitationMetadata;

@interface PKSubcredentialProvisioningAccountAttestationOperation : PKSubcredentialProvisioningSharingSessionOperation {

	PKAppletSubcredential* _credential;
	PKPaymentWebService* _webService;
	PKAppletSubcredentialSharingInvitationMetadata* _metadata;
	BOOL _operationCompleted;

}
-(void)performOperation;
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(void)performOperationWithSession:(id)arg1 ;
-(void)accountAttesatationAnonymizationSaltWithCompletion:(/*^block*/id)arg1 ;
@end
