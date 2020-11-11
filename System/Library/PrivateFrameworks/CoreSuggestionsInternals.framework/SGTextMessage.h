/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <CoreSuggestionsInternals/SGMessage.h>

@class CSPerson, NSArray, NSString;

@interface SGTextMessage : SGMessage {

	BOOL _senderIsAccountOwner;
	BOOL _senderIsBusinessChat;
	CSPerson* _sender;
	NSArray* _recipients;
	NSString* _conversationIdentifier;
	NSString* _nickname;
	NSString* _photoPath;
	NSString* _attachmentFilename;

}

@property (retain) CSPerson * sender;                              //@synthesize sender=_sender - In the implementation block
@property (retain) NSArray * recipients;                           //@synthesize recipients=_recipients - In the implementation block
@property (retain) NSString * conversationIdentifier;              //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
@property (retain) NSString * nickname;                            //@synthesize nickname=_nickname - In the implementation block
@property (retain) NSString * photoPath;                           //@synthesize photoPath=_photoPath - In the implementation block
@property (readonly) BOOL senderIsAccountOwner;                    //@synthesize senderIsAccountOwner=_senderIsAccountOwner - In the implementation block
@property (readonly) BOOL senderIsBusinessChat;                    //@synthesize senderIsBusinessChat=_senderIsBusinessChat - In the implementation block
@property (readonly) NSString * attachmentFilename;                //@synthesize attachmentFilename=_attachmentFilename - In the implementation block
+(BOOL)isSent:(id)arg1 ;
+(id)_nicknameCustomKey;
+(id)_photoPathCustomKey;
-(NSString *)photoPath;
-(NSString *)conversationIdentifier;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(CSPerson *)sender;
-(id)author;
-(void)setSender:(CSPerson *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)attachmentFilename;
-(void)setPhotoPath:(NSString *)arg1 ;
-(NSString *)nickname;
-(void)setConversationIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setNickname:(NSString *)arg1 ;
-(id)initWithSearchableItem:(id)arg1 ;
-(id)spotlightBundleIdentifier;
-(id)spotlightDomainIdentifier;
-(BOOL)senderIsAccountOwner;
-(BOOL)senderIsBusinessChat;
@end
