/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmailDaemon/EDMailboxPersistence.h>

@class EDPersistenceDatabase, MFMailMessageLibrary, MFMailboxProvider;

@interface MFMailboxPersistence_iOS : EDMailboxPersistence {

	EDPersistenceDatabase* _database;
	MFMailMessageLibrary* _library;

}

@property (nonatomic,readonly) EDPersistenceDatabase * database;                   //@synthesize database=_database - In the implementation block
@property (nonatomic,__weak,readonly) MFMailMessageLibrary * library;              //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) MFMailboxProvider * mailboxProvider; 
-(BOOL)createMailbox:(id)arg1 parentMailboxID:(id)arg2 ;
-(MFMailMessageLibrary *)library;
-(BOOL)moveMailbox:(id)arg1 newParentMailboxID:(id)arg2 ;
-(BOOL)deleteMailbox:(id)arg1 ;
-(BOOL)renameMailbox:(id)arg1 newName:(id)arg2 ;
-(id)initWithMailboxProvider:(id)arg1 database:(id)arg2 library:(id)arg3 ;
-(EDPersistenceDatabase *)database;
-(id)mailboxDatabaseIDsForMailboxObjectIDs:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(void)serverCountsForMailboxScope:(id)arg1 block:(/*^block*/id)arg2 ;
@end

