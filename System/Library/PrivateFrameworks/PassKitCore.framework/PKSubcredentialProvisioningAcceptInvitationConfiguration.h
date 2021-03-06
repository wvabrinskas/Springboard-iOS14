/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKSubcredentialProvisioningLocalDeviceConfiguration.h>

@class PKAppletSubcredentialSharingSession, PKAppletSubcredentialSharingInvitation, PKAppletSubcredentialSharingInvitationMetadata, PKPaymentWebService;

@interface PKSubcredentialProvisioningAcceptInvitationConfiguration : PKSubcredentialProvisioningLocalDeviceConfiguration {

	BOOL _declineRelatedInvitations;
	PKAppletSubcredentialSharingSession* _session;
	PKAppletSubcredentialSharingInvitation* _invitation;
	PKAppletSubcredentialSharingInvitationMetadata* _metadata;
	PKPaymentWebService* _remoteDeviceWebService;

}

@property (nonatomic,__weak,readonly) PKAppletSubcredentialSharingSession * session;                   //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) PKAppletSubcredentialSharingInvitation * invitation;                    //@synthesize invitation=_invitation - In the implementation block
@property (nonatomic,readonly) PKAppletSubcredentialSharingInvitationMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) BOOL declineRelatedInvitations;                                         //@synthesize declineRelatedInvitations=_declineRelatedInvitations - In the implementation block
@property (nonatomic,readonly) PKPaymentWebService * remoteDeviceWebService;                           //@synthesize remoteDeviceWebService=_remoteDeviceWebService - In the implementation block
-(id)transitionTable;
-(long long)startingState;
-(BOOL)declineRelatedInvitations;
-(id)initWithSession:(id)arg1 invitation:(id)arg2 metadata:(id)arg3 declineRelatedInvitations:(BOOL)arg4 localDeviceWebService:(id)arg5 remoteDeviceWebService:(id)arg6 ;
-(id)initWithSession:(id)arg1 invitation:(id)arg2 metadata:(id)arg3 webService:(id)arg4 ;
-(PKAppletSubcredentialSharingInvitationMetadata *)metadata;
-(id)description;
-(PKAppletSubcredentialSharingInvitation *)invitation;
-(PKPaymentWebService *)remoteDeviceWebService;
-(PKAppletSubcredentialSharingSession *)session;
@end

