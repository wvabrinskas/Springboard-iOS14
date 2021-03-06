/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ContactsAutocompleteUI/CNComposeRecipientGroup.h>
#import <libobjc.A.dylib/CKIMComposeRecipient.h>

@class NSString, NSArray, NSDate, CKIMComposeRecipient;

@interface CKIMGroupComposeRecipient : CNComposeRecipientGroup <CKIMComposeRecipient> {

	NSString* _conversationGUID;
	NSArray* _composeRecipients;
	NSArray* _handles;
	NSDate* _lastMessageDate;
	CKIMComposeRecipient* _matchingRecipient;
	NSString* _detailsString;

}

@property (nonatomic,retain) NSString * conversationGUID;                           //@synthesize conversationGUID=_conversationGUID - In the implementation block
@property (nonatomic,retain) NSArray * handles;                                     //@synthesize handles=_handles - In the implementation block
@property (nonatomic,retain) NSString * detailsString;                              //@synthesize detailsString=_detailsString - In the implementation block
@property (nonatomic,retain) NSDate * lastMessageDate;                              //@synthesize lastMessageDate=_lastMessageDate - In the implementation block
@property (nonatomic,retain) CKIMComposeRecipient * matchingRecipient;              //@synthesize matchingRecipient=_matchingRecipient - In the implementation block
@property (nonatomic,readonly) NSArray * composeRecipients;                         //@synthesize composeRecipients=_composeRecipients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)composeRecipientWithConversation:(id)arg1 searchTerm:(id)arg2 matchingRecipient:(id)arg3 ;
-(void)setHandles:(NSArray *)arg1 ;
-(NSArray *)handles;
-(NSString *)detailsString;
-(id)address;
-(void)setConversationGUID:(NSString *)arg1 ;
-(void)setDetailsString:(NSString *)arg1 ;
-(void)setLastMessageDate:(NSDate *)arg1 ;
-(void)setMatchingRecipient:(CKIMComposeRecipient *)arg1 ;
-(id)initWithGUID:(id)arg1 displayString:(id)arg2 detailsString:(id)arg3 handles:(id)arg4 lastMessageDate:(id)arg5 searchTerm:(id)arg6 matchingRecipient:(id)arg7 ;
-(CKIMComposeRecipient *)matchingRecipient;
-(NSArray *)composeRecipients;
-(id)compositeName;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isRemovableFromSearchResults;
-(void)releaseIMReferences;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)lastMessageDate;
-(NSString *)conversationGUID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

