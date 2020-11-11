/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BBSyncServiceDelegate <NSObject>
@required
-(id)syncService:(id)arg1 universalSectionIdentifierForSectionIdentifier:(id)arg2;
-(BOOL)syncService:(id)arg1 shouldAbortDelayedDismissalForBulletin:(id)arg2;
-(void)syncService:(id)arg1 receivedDismissalDictionaries:(id)arg2 dismissalIDs:(id)arg3 inSection:(id)arg4 forFeeds:(unsigned long long)arg5;
-(id)syncService:(id)arg1 sectionIdentifiersForUniversalSectionIdentifier:(id)arg2;

@end
