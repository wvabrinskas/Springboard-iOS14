/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IMMessageLegacyProcessingParameter <IMPipelineParameter>
@required
-(id)chat;
-(id)fromIdentifier;
-(BOOL)isFromMe;
-(id)encryptionType;
-(id)groupID;
-(BOOL)wantsDeliveryReceipt;
-(BOOL)wantsCheckpointing;
-(id)currentGroupName;
-(id)groupPhotoCreationTime;
-(BOOL)isFromStorage;
-(BOOL)isLastFromStorage;
-(id)messageItems;
-(id)toIdentifier;
-(id)participantIdentifiers;
-(id)inlineAttachmentsDictionary;
-(id)attributionInfoArray;
-(id)nicknameDictionary;

@end

