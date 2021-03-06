/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface NNMKMailboxSelectionChanges : NSObject {

	NSArray* _mailboxesToUpdate;
	NSArray* _mailboxesToReSync;
	NSArray* _mailboxesToDisableSync;

}

@property (nonatomic,retain) NSArray * mailboxesToUpdate;                   //@synthesize mailboxesToUpdate=_mailboxesToUpdate - In the implementation block
@property (nonatomic,retain) NSArray * mailboxesToReSync;                   //@synthesize mailboxesToReSync=_mailboxesToReSync - In the implementation block
@property (nonatomic,retain) NSArray * mailboxesToDisableSync;              //@synthesize mailboxesToDisableSync=_mailboxesToDisableSync - In the implementation block
-(void)setMailboxesToUpdate:(NSArray *)arg1 ;
-(void)setMailboxesToReSync:(NSArray *)arg1 ;
-(void)setMailboxesToDisableSync:(NSArray *)arg1 ;
-(NSArray *)mailboxesToUpdate;
-(NSArray *)mailboxesToReSync;
-(NSArray *)mailboxesToDisableSync;
@end

