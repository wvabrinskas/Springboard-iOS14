/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, NSFileProviderEnumerationObserver;
@class NSMutableOrderedSet, NSObject;

@interface BRCRecentsEnumeratorBatch : NSObject {

	NSMutableOrderedSet* _toIndexItems;
	NSMutableOrderedSet* _deletedItemIDs;
	NSObject*<OS_dispatch_queue> _queue;
	id<NSFileProviderEnumerationObserver> _observer;
	unsigned long long _rank;

}

@property (assign,nonatomic) unsigned long long rank;              //@synthesize rank=_rank - In the implementation block
-(unsigned long long)rank;
-(id)init;
-(id)description;
-(unsigned long long)batchCount;
-(void)setRank:(unsigned long long)arg1 ;
-(void)addIndexOfItem:(id)arg1 ;
-(void)addDeletionOfFileObjectID:(id)arg1 rank:(unsigned long long)arg2 ;
-(void)listItems:(/*^block*/id)arg1 ;
@end

