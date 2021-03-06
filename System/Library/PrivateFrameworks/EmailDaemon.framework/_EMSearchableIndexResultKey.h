/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol EDSearchableCriterion;
@class NSIndexSet;

@interface _EMSearchableIndexResultKey : NSObject {

	id<EDSearchableCriterion> _criterion;
	NSIndexSet* _mailboxIDs;

}

@property (nonatomic,retain) id<EDSearchableCriterion> criterion;              //@synthesize criterion=_criterion - In the implementation block
@property (nonatomic,copy) NSIndexSet * mailboxIDs;                            //@synthesize mailboxIDs=_mailboxIDs - In the implementation block
-(unsigned long long)hash;
-(NSIndexSet *)mailboxIDs;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCriterion:(id<EDSearchableCriterion>)arg1 ;
-(id<EDSearchableCriterion>)criterion;
-(void)setMailboxIDs:(NSIndexSet *)arg1 ;
@end

