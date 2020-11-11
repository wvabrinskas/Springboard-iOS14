/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate, ECSubject, NSString, NSArray, ECMessageFlags, NSIndexSet, EMObjectID, EFFuture;


@protocol EMMessageListItem <EMCollectionItem,EMObject>
@property (readonly) NSDate * date; 
@property (readonly) ECSubject * subject; 
@property (copy,readonly) NSString * summary; 
@property (copy,readonly) NSArray * senderList; 
@property (copy,readonly) NSArray * toList; 
@property (copy,readonly) NSArray * ccList; 
@property (readonly) ECMessageFlags * flags; 
@property (readonly) BOOL hasUnflagged; 
@property (copy,readonly) NSIndexSet * flagColors; 
@property (readonly) BOOL isVIP; 
@property (readonly) BOOL isBlocked; 
@property (readonly) BOOL isToMe; 
@property (readonly) BOOL isCCMe; 
@property (readonly) BOOL hasAttachments; 
@property (readonly) long long conversationNotificationLevel; 
@property (readonly) unsigned long long count; 
@property (readonly) long long conversationID; 
@property (copy,readonly) NSArray * mailboxObjectIDs; 
@property (copy,readonly) NSArray * mailboxes; 
@property (readonly) id<EMCollectionItemID> displayMessageItemID; 
@property (readonly) EMObjectID * displayMessageObjectID; 
@property (readonly) EFFuture * displayMessage; 
@property (readonly) BOOL deleteMovesToTrash; 
@property (readonly) BOOL supportsArchiving; 
@property (readonly) BOOL shouldArchiveByDefault; 
@property (readonly) BOOL isEditable; 
@required
-(NSString *)summary;
-(BOOL)isEditable;
-(ECSubject *)subject;
-(BOOL)isVIP;
-(BOOL)isBlocked;
-(NSArray *)mailboxObjectIDs;
-(NSArray *)toList;
-(NSArray *)ccList;
-(ECMessageFlags *)flags;
-(BOOL)isToMe;
-(long long)conversationID;
-(BOOL)isCCMe;
-(unsigned long long)count;
-(NSDate *)date;
-(long long)conversationNotificationLevel;
-(BOOL)hasUnflagged;
-(NSIndexSet *)flagColors;
-(id<EMCollectionItemID>)displayMessageItemID;
-(BOOL)deleteMovesToTrash;
-(EMObjectID *)displayMessageObjectID;
-(BOOL)shouldArchiveByDefault;
-(EFFuture *)displayMessage;
-(BOOL)hasAttachments;
-(BOOL)supportsArchiving;
-(NSArray *)senderList;
-(NSArray *)mailboxes;

@end
