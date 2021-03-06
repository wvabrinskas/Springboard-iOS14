/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMAP/IMAPAccount.h>

@interface ExchangeAccount : IMAPAccount
+(id)accountTypeString;
-(Class)connectionClass;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg1 ;
-(id)_defaultSpecialMailboxNameForType:(int)arg1 ;
-(BOOL)shouldExpungeMessagesOnDelete;
-(void)_filterMailboxList:(id)arg1 forMailboxWithPath:(id)arg2 iisServer:(id)arg3 ;
-(BOOL)_syncOnly_defaultValueForShouldStoreJunkOnServer;
-(BOOL)storeDraftsOnServer;
-(BOOL)storeSentMessagesOnServer;
-(void)filterMailboxList:(id)arg1 forMailbox:(id)arg2 options:(int)arg3 ;
@end

