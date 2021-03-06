/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MIME/MFMessage.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>
#import <libobjc.A.dylib/EDIndexableMessage.h>
#import <libobjc.A.dylib/MFBaseMessage.h>

@class NSArray, MFMessageInfo, NSURL, NSString, EMMessageObjectID, MFMailboxUid, MFMessageHeaders, MailAccount, ECSubject, NSDate, ECMessageFlags, NSDictionary, ECAngleBracketIDHash, NSSet, NSUUID;

@interface MFMailMessage : MFMessage <NSItemProviderWriting, EDIndexableMessage, MFBaseMessage> {

	unsigned long long _messageFlags;
	unsigned long long _modSequenceNumber;
	MFMessageInfo* _info;
	NSURL* _globalMessageURL;
	BOOL _useInternalSourceIsManaged;
	BOOL _sourceIsManaged;
	BOOL _shouldUseMailDrop;
	long long _globalMessageID;

}

@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) EMMessageObjectID * objectID; 
@property (nonatomic,readonly) MFMailboxUid * mailbox; 
@property (assign) unsigned long long modSequenceNumber; 
@property (assign,nonatomic) BOOL shouldUseMailDrop;                                                     //@synthesize shouldUseMailDrop=_shouldUseMailDrop - In the implementation block
@property (assign,nonatomic) unsigned long long messageFlags; 
@property (assign,nonatomic) long long globalMessageID;                                                  //@synthesize globalMessageID=_globalMessageID - In the implementation block
@property (nonatomic,readonly) MFMessageHeaders * headers; 
@property (nonatomic,readonly) MailAccount * account; 
@property (assign,nonatomic) BOOL sourceIsManaged; 
@property (nonatomic,readonly) unsigned long long fileSize; 
@property (nonatomic,copy,readonly) NSString * persistentID; 
@property (nonatomic,copy,readonly) ECSubject * subject; 
@property (nonatomic,copy,readonly) NSArray * from; 
@property (nonatomic,copy,readonly) NSArray * to; 
@property (nonatomic,copy,readonly) NSArray * cc; 
@property (nonatomic,copy,readonly) NSArray * bcc; 
@property (nonatomic,copy,readonly) NSArray * senders; 
@property (nonatomic,readonly) NSDate * dateReceived; 
@property (nonatomic,readonly) NSDate * dateSent; 
@property (nonatomic,copy,readonly) NSArray * listUnsubscribe; 
@property (nonatomic,copy,readonly) NSString * remoteID; 
@property (nonatomic,readonly) long long conversationID; 
@property (nonatomic,readonly) BOOL isServerSearchResult; 
@property (nonatomic,readonly) ECMessageFlags * flags; 
@property (getter=isPartOfExistingThread,nonatomic,readonly) BOOL partOfExistingThread; 
@property (nonatomic,readonly) id<ECMimePart> bodyPart; 
@property (nonatomic,copy,readonly) NSDictionary * headersDictionary; 
@property (nonatomic,copy,readonly) NSString * messageIDHeader; 
@property (nonatomic,readonly) ECAngleBracketIDHash * messageIDHeaderHash; 
@property (readonly) NSSet * labels; 
@property (nonatomic,copy,readonly) NSArray * references; 
@property (nonatomic,copy,readonly) NSUUID * documentID; 
@property (nonatomic,readonly) unsigned long long numberOfAttachments; 
@property (nonatomic,readonly) ECAngleBracketIDHash * listIDHash; 
@property (nonatomic,readonly) unsigned uid; 
@property (nonatomic,readonly) unsigned dateReceivedInterval; 
@property (nonatomic,readonly) unsigned dateSentInterval; 
@property (nonatomic,readonly) long long conversationHash; 
@property (nonatomic,readonly) long long mailboxID; 
@property (nonatomic,readonly) long long messageIDHash; 
@property (nonatomic,readonly) BOOL flagged; 
@property (nonatomic,readonly) BOOL read; 
@property (nonatomic,readonly) BOOL deleted; 
@property (nonatomic,readonly) BOOL senderVIP; 
@property (getter=isKnownToHaveAttachments,nonatomic,readonly) BOOL knownToHaveAttachments; 
@property (getter=isLibraryMessage,nonatomic,readonly) BOOL libraryMessage; 
@property (nonatomic,readonly) long long libraryID; 
+(BOOL)dragItemsAreAllMessages:(id)arg1 ;
+(id)writableTypeIdentifiersForItemProvider;
+(unsigned)validatePriority:(int)arg1 ;
+(id)forwardedMessagePrefixWithSpacer:(BOOL)arg1 ;
+(Class)dataMessageStoreToUse;
+(unsigned)displayablePriorityForPriority:(int)arg1 ;
-(id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1 ;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(void)_loadMessageDataWithCompletion:(/*^block*/id)arg1 ;
-(id)_attributedSubject;
-(NSArray *)from;
-(EMMessageObjectID *)objectID;
-(BOOL)sourceIsManaged;
-(BOOL)junk;
-(NSSet *)labels;
-(MailAccount *)account;
-(ECMessageFlags *)flags;
-(MFMailboxUid *)mailbox;
-(BOOL)answered;
-(BOOL)deleted;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(BOOL)flagged;
-(unsigned long long)conversationFlags;
-(BOOL)isSearchResultWithBogusRemoteId;
-(id)loadMeetingData;
-(unsigned long long)messageFlags;
-(void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1 ;
-(NSArray *)references;
-(id)originalMailboxURL;
-(id)copyMessageInfo;
-(void)loadCachedHeaderValuesFromHeaders:(id)arg1 ;
-(id)bestAlternativePart:(BOOL*)arg1 ;
-(NSArray *)listUnsubscribe;
-(BOOL)isServerSearchResult;
-(BOOL)isPartOfExistingThread;
-(NSDictionary *)headersDictionary;
-(void)setMessageFlags:(unsigned long long)arg1 ;
-(void)setMutableInfoFromMessage:(id)arg1 ;
-(void)markAsViewed;
-(void)markAsNotViewed;
-(void)markAsFlagged;
-(void)markAsNotFlagged;
-(void)markAsReplied;
-(void)markAsForwarded;
-(id)preferredAccountToUseForReplying;
-(void)setConversationFlags:(unsigned long long)arg1 ;
-(int)priority;
-(long long)libraryID;
-(id<ECMimePart>)bodyPart;
-(unsigned long long)numberOfAttachments;
-(void)setSummary:(id)arg1 ;
-(id)globalMessageURL;
-(id)messageStore;
-(void)setPriorityFromHeaders:(id)arg1 ;
-(id)mailMessageStore;
-(void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 summary:(id)arg8 withOptions:(unsigned)arg9 ;
-(BOOL)read;
-(long long)conversationHash;
-(BOOL)senderVIP;
-(BOOL)isKnownToHaveAttachments;
-(unsigned long long)modSequenceNumber;
-(void)setModSequenceNumber:(unsigned long long)arg1 ;
-(id)loadMeetingExternalID;
-(id)preferredEmailAddressToReplyWith;
-(id)loadMeetingMetadata;
-(id)remoteMailboxURL;
-(BOOL)shouldSetSummary;
-(id)externalConversationID;
-(id)bestAlternativePart;
-(BOOL)conversationVIP;
-(BOOL)conversationMuted;
-(BOOL)shouldUseMailDrop;
-(void)setShouldUseMailDrop:(BOOL)arg1 ;
-(void)setGlobalMessageID:(long long)arg1 ;
-(id)URL;
-(long long)globalMessageID;
@end

