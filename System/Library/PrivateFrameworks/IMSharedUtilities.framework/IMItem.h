/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <IMSharedUtilities/IMRemoteObjectCoding.h>

@class NSString, NSDictionary, NSDate, NSData;

@interface IMItem : NSObject <NSSecureCoding, NSCopying, IMRemoteObjectCoding> {

	NSString* _handle;
	NSString* _service;
	NSString* _account;
	NSString* _unformattedID;
	NSString* _accountID;
	NSString* _roomName;
	NSDictionary* _senderInfo;
	NSString* _guid;
	NSDate* _time;
	NSString* _countryCode;
	long long _messageID;
	id _context;
	long long _type;
	NSString* _balloonBundleID;
	unsigned long long _sortID;
	NSString* _destinationCallerID;
	NSDate* _clientSendTime;
	NSString* _replyToGUID;
	NSString* _personCentric;
	long long _cloudKitSyncState;
	NSString* _cloudKitRecordID;
	NSData* _cloudKitServerChangeTokenBlob;
	NSString* _cloudKitRecordChangeTag;
	NSString* _parentChatID;
	long long _srCloudKitSyncState;
	NSString* _srCloudKitRecordID;
	NSString* _srCloudKitRecordChangeTag;

}

@property (assign,nonatomic) long long type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * guid;                                        //@synthesize guid=_guid - In the implementation block
@property (assign,setter=_setMessageID:,nonatomic) long long messageID;              //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,retain) NSString * account;                                     //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * roomName;                                    //@synthesize roomName=_roomName - In the implementation block
@property (nonatomic,retain) NSString * service;                                     //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSString * accountID;                                   //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) NSString * destinationCallerID;                         //@synthesize destinationCallerID=_destinationCallerID - In the implementation block
@property (nonatomic,retain) NSDate * time;                                          //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) NSDate * clientSendTime;                                //@synthesize clientSendTime=_clientSendTime - In the implementation block
@property (assign,nonatomic) unsigned long long sortID;                              //@synthesize sortID=_sortID - In the implementation block
@property (nonatomic,copy) NSString * replyToGUID;                                   //@synthesize replyToGUID=_replyToGUID - In the implementation block
@property (nonatomic,retain) NSString * handle;                                      //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) NSString * unformattedID;                               //@synthesize unformattedID=_unformattedID - In the implementation block
@property (nonatomic,retain) NSString * countryCode;                                 //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSString * personCentric;                               //@synthesize personCentric=_personCentric - In the implementation block
@property (nonatomic,retain) NSString * personCentricID; 
@property (nonatomic,retain) NSString * sender; 
@property (nonatomic,retain) NSDictionary * senderInfo;                              //@synthesize senderInfo=_senderInfo - In the implementation block
@property (nonatomic,retain) id context;                                             //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,retain) NSString * balloonBundleID;                             //@synthesize balloonBundleID=_balloonBundleID - In the implementation block
@property (nonatomic,readonly) BOOL isFirstMessageCandidate; 
@property (nonatomic,readonly) BOOL isLastMessageCandidate; 
@property (assign,nonatomic) long long cloudKitSyncState;                            //@synthesize cloudKitSyncState=_cloudKitSyncState - In the implementation block
@property (nonatomic,copy) NSString * cloudKitRecordID;                              //@synthesize cloudKitRecordID=_cloudKitRecordID - In the implementation block
@property (nonatomic,copy) NSData * cloudKitServerChangeTokenBlob;                   //@synthesize cloudKitServerChangeTokenBlob=_cloudKitServerChangeTokenBlob - In the implementation block
@property (nonatomic,copy) NSString * cloudKitRecordChangeTag;                       //@synthesize cloudKitRecordChangeTag=_cloudKitRecordChangeTag - In the implementation block
@property (nonatomic,copy) NSString * parentChatID;                                  //@synthesize parentChatID=_parentChatID - In the implementation block
@property (assign,nonatomic) long long srCloudKitSyncState;                          //@synthesize srCloudKitSyncState=_srCloudKitSyncState - In the implementation block
@property (nonatomic,copy) NSString * srCloudKitRecordID;                            //@synthesize srCloudKitRecordID=_srCloudKitRecordID - In the implementation block
@property (nonatomic,copy) NSString * srCloudKitRecordChangeTag;                     //@synthesize srCloudKitRecordChangeTag=_srCloudKitRecordChangeTag - In the implementation block
+(Class)contextClass;
+(id)stringGUID;
+(Class)classForMessageItemDictionary:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(Class)classForIMItemType:(long long)arg1 ;
-(id)_copy;
-(id)message;
-(id)_senderHandle;
-(id)_otherHandle;
-(id)_service;
-(void)_updateContextWithSenderHandle:(id)arg1 otherHandle:(id)arg2 ;
-(void)_setInvitation:(BOOL)arg1 ;
-(BOOL)_isInvitation;
-(BOOL)shouldGenerateTopLevelChatItem;
-(id)_newChatItems;
-(BOOL)_hasMessageChatItem;
-(id)_serviceHandle;
-(BOOL)isTypingOrCancelTypingMessage;
-(BOOL)isIncomingTypingOrCancelTypingMessage;
-(void)setHandle:(NSString *)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(NSString *)guid;
-(NSString *)handle;
-(void)setAccountID:(NSString *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSRange)associatedMessageRange;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)account;
-(unsigned long long)sortID;
-(NSDictionary *)senderInfo;
-(NSString *)accountID;
-(unsigned long long)hash;
-(void)setSenderInfo:(NSDictionary *)arg1 ;
-(long long)cloudKitSyncState;
-(NSString *)cloudKitRecordID;
-(NSString *)destinationCallerID;
-(void)setUnformattedID:(NSString *)arg1 ;
-(void)setCloudKitSyncState:(long long)arg1 ;
-(void)setReplyToGUID:(NSString *)arg1 ;
-(void)setCloudKitRecordID:(NSString *)arg1 ;
-(void)setCloudKitServerChangeTokenBlob:(NSData *)arg1 ;
-(void)setCloudKitRecordChangeTag:(NSString *)arg1 ;
-(void)setDestinationCallerID:(NSString *)arg1 ;
-(void)setSrCloudKitSyncState:(long long)arg1 ;
-(void)setSrCloudKitRecordID:(NSString *)arg1 ;
-(void)setSortID:(unsigned long long)arg1 ;
-(NSString *)sender;
-(void)setSrCloudKitRecordChangeTag:(NSString *)arg1 ;
-(id)initWithSenderInfo:(id)arg1 time:(id)arg2 guid:(id)arg3 messageID:(long long)arg4 account:(id)arg5 accountID:(id)arg6 service:(id)arg7 handle:(id)arg8 roomName:(id)arg9 unformattedID:(id)arg10 countryCode:(id)arg11 type:(long long)arg12 ;
-(NSDate *)clientSendTime;
-(void)setClientSendTime:(NSDate *)arg1 ;
-(NSData *)cloudKitServerChangeTokenBlob;
-(NSString *)cloudKitRecordChangeTag;
-(NSString *)srCloudKitRecordID;
-(NSString *)srCloudKitRecordChangeTag;
-(NSString *)replyToGUID;
-(id)copyDictionaryRepresentation;
-(id)initWithSender:(id)arg1 time:(id)arg2 guid:(id)arg3 type:(long long)arg4 ;
-(void)setPersonCentricID:(NSString *)arg1 ;
-(BOOL)isOlderThanItem:(id)arg1 ;
-(BOOL)unsentIsFromMeItem;
-(BOOL)isFirstMessageCandidate;
-(BOOL)isLastMessageCandidate;
-(void)setSender:(NSString *)arg1 ;
-(void)setAccount:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)_setMessageID:(long long)arg1 ;
-(NSString *)personCentric;
-(void)setPersonCentric:(NSString *)arg1 ;
-(NSString *)parentChatID;
-(void)setParentChatID:(NSString *)arg1 ;
-(long long)srCloudKitSyncState;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)encodeWithIMRemoteObjectSerializedDictionary:(id)arg1 ;
-(id)initWithIMRemoteObjectSerializedDictionary:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSString *)countryCode;
-(BOOL)isBreadcrumb;
-(id)associatedMessageGUID;
-(id)context;
-(NSString *)unformattedID;
-(id)description;
-(BOOL)isAssociatedMessageItem;
-(BOOL)isMessageEdit;
-(BOOL)isMessageAcknowledgment;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)roomName;
-(BOOL)isFromMe;
-(void)setTime:(NSDate *)arg1 ;
-(NSString *)balloonBundleID;
-(long long)type;
-(NSDate *)time;
-(id)initWithCoder:(id)arg1 ;
-(long long)messageID;
-(long long)associatedMessageType;
-(void)setRoomName:(NSString *)arg1 ;
-(BOOL)isSticker;
-(void)setContext:(id)arg1 ;
-(void)setBalloonBundleID:(NSString *)arg1 ;
-(NSString *)service;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)pluginSessionGUID;
-(BOOL)isReply;
-(void)dealloc;
-(NSString *)personCentricID;
-(id)consumedSessionPayloads;
@end

