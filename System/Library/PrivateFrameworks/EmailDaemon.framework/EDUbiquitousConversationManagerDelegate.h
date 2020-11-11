/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol EDUbiquitousConversationManagerDelegate <NSObject>
@required
-(void)clearConversationFlagsAndSyncKeyForConversationIDs:(id)arg1;
-(void)pruneConversationTables:(double)arg1;
-(id)messageIDsForConversationID:(long long)arg1 limit:(unsigned long long)arg2;
-(long long)conversationIDForMessageIDs:(id)arg1;
-(void)remoteMessageIDsAdded:(id)arg1 forConversationID:(long long)arg2;
-(id)syncedConversationIDsBySyncKey;
-(unsigned long long)persistenceConversationFlagsForConversationID:(long long)arg1;
-(void)setPersistenceConversationFlags:(unsigned long long)arg1 syncKey:(id)arg2 forConversationID:(long long)arg3 reason:(long long)arg4;

@end
