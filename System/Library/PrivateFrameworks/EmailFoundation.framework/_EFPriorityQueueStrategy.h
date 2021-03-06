/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EFQueueingStrategy.h>

@class NSString;

@interface _EFPriorityQueueStrategy : NSObject <EFQueueingStrategy> {

	/*^block*/id _comparator;

}

@property (nonatomic,readonly) id comparator;                           //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,readonly) NSString * descriptionType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)comparator;
-(id)initWithComparator:(/*^block*/id)arg1 ;
-(unsigned long long)_insertionIndexForObject:(id)arg1 buffer:(id)arg2 ;
-(unsigned long long)_indexForObject:(id)arg1 buffer:(id)arg2 ;
-(void)enqueueObject:(id)arg1 replaceIfExists:(BOOL)arg2 buffer:(id)arg3 ;
-(NSString *)descriptionType;
-(void)dequeueObject:(id)arg1 buffer:(id)arg2 ;
@end

