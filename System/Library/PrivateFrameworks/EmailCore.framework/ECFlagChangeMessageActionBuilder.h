/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSSet, NSArray, ECMessageFlagChange;


@protocol ECFlagChangeMessageActionBuilder <ECLocalMessageActionBuilder>
@property (nonatomic,copy) NSSet * remoteIDs; 
@property (nonatomic,copy) NSArray * messages; 
@property (nonatomic,retain) ECMessageFlagChange * flagChange; 
@required
-(void)setMessages:(id)arg1;
-(void)setFlagChange:(id)arg1;
-(NSArray *)messages;
-(NSSet *)remoteIDs;
-(ECMessageFlagChange *)flagChange;
-(void)setRemoteIDs:(id)arg1;

@end
