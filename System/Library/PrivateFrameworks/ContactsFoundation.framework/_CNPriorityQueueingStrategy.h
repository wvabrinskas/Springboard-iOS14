/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNQueueingStrategy.h>

@class NSString;

@interface _CNPriorityQueueingStrategy : NSObject <CNQueueingStrategy> {

	/*^block*/id _priorityComparator;

}

@property (nonatomic,copy,readonly) id priorityComparator;              //@synthesize priorityComparator=_priorityComparator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)enqueueObject:(id)arg1 buffer:(id)arg2 ;
-(id)initWithComparator:(/*^block*/id)arg1 ;
-(id)priorityComparator;
-(unsigned long long)_insertionIndexForObject:(id)arg1 buffer:(id)arg2 ;
@end
