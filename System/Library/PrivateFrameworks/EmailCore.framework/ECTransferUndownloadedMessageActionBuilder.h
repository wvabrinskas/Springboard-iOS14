/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSURL, NSString, NSArray;


@protocol ECTransferUndownloadedMessageActionBuilder <ECLocalMessageActionBuilder>
@property (assign,nonatomic) long long transferType; 
@property (nonatomic,retain) NSURL * sourceMailboxURL; 
@property (nonatomic,retain) NSURL * destinationMailboxURL; 
@property (nonatomic,copy) NSString * oldestPersistedRemoteID; 
@property (nonatomic,retain) NSArray * itemsToDelete; 
@required
-(void)setDestinationMailboxURL:(id)arg1;
-(NSArray *)itemsToDelete;
-(NSURL *)sourceMailboxURL;
-(NSURL *)destinationMailboxURL;
-(NSString *)oldestPersistedRemoteID;
-(void)setOldestPersistedRemoteID:(id)arg1;
-(long long)transferType;
-(void)setTransferType:(long long)arg1;
-(void)setSourceMailboxURL:(id)arg1;
-(void)setItemsToDelete:(id)arg1;

@end

