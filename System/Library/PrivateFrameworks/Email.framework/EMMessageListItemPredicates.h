/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EFLoggable.h>

@class NSString;

@interface EMMessageListItemPredicates : NSObject <EFLoggable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicateForFlagColor:(unsigned long long)arg1 ;
+(id)predicateForExcludingMessagesInMailboxWithType:(long long)arg1 ;
+(BOOL)predicate:(id)arg1 appliesToFlagChange:(id)arg2 ;
+(id)predicateForVIPMessages;
+(id)threadScopeForPredicate:(id)arg1 ;
+(id)spotlightPredicateForPredicate:(id)arg1 ;
+(id)predicateForMessagesWithAttachments;
+(id)predicateForMessagesInMailboxes:(id)arg1 ;
+(id)predicateForMessagesWithThreadScope:(id)arg1 ;
+(id)predicateForFlaggedMessages;
+(id)predicateForExcludingMessagesInMailbox:(id)arg1 ;
+(id)predicateForMessagesInMailbox:(id)arg1 ;
+(id)predicateForToMeMessages;
+(id)predicateForExcludingMessagesInMailboxObjectID:(id)arg1 ;
+(id)_keyPathsForFlagChange:(id)arg1 ;
+(id)mailboxScopeForPredicate:(id)arg1 withMailboxTypeResolver:(id)arg2 ;
+(id)_predicateForMessagesInMailboxWithType:(id)arg1 ;
+(id)predicateForExcludingMessagesInMailboxes:(id)arg1 ;
+(id)log;
+(id)predicateForCCMeMessages;
+(id)predicateForMuteMessages;
+(id)predicateForMessagesInMailboxesWithObjectIDs:(id)arg1 ;
+(id)predicateForAccount:(id)arg1 ;
+(id)predicateFromPredicate:(id)arg1 ignoringKeyPaths:(id)arg2 ;
+(id)predicateForMessagesInMailboxWithType:(long long)arg1 ;
+(id)predicateForExcludingMessagesInMailboxesWithObjectIDs:(id)arg1 ;
+(id)predicateForMessagesWithMailboxScope:(id)arg1 ;
+(id)predicateForMessagesInConversation:(long long)arg1 ;
+(long long)dateSortOrderFromSortDescriptors:(id)arg1 ;
+(id)predicateForUnflaggedMessages;
+(id)predicateForExcludingMessagesInMailboxesWithTypes:(id)arg1 ;
+(id)predicateForNotifyMessages;
+(id)predicateForUnreadMessages;
+(id)predicateForMessagesNewerThanDate:(id)arg1 ;
+(id)_spotlightPredicateForPredicate:(id)arg1 ;
+(id)sortDescriptorForDateAscending:(BOOL)arg1 ;
+(id)predicateForIncludesMeMessages;
+(id)predicateForMessagesInMailboxWithObjectID:(id)arg1 ;
+(id)predicateForReadMessages;
+(id)predicateForExcludingMessagesInMailboxWithURL:(id)arg1 ;
+(id)_predicateForMessagesInMailboxWithURL:(id)arg1 ;
+(id)predicateForTodayMessages;
+(id)mailboxURLsForPredicate:(id)arg1 ;
+(id)predicateForMessagesWithSender:(id)arg1 ;
+(id)predicateForMessagesInMailboxesWithTypes:(id)arg1 ;
+(id)_predicateForKeyPath:(id)arg1 value:(id)arg2 ;
@end
