/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface AMSBagKeySetAggregator : NSObject {

	NSMutableDictionary* _bagKeySets;

}

@property (nonatomic,retain) NSMutableDictionary * bagKeySets;              //@synthesize bagKeySets=_bagKeySets - In the implementation block
-(id)init;
-(NSMutableDictionary *)bagKeySets;
-(id)generateAggregatedBagKeySet;
-(BOOL)hasBagKeySetForConsumer:(Class)arg1 ;
-(void)setBagKeySets:(NSMutableDictionary *)arg1 ;
-(void)addBagKeySet:(id)arg1 forConsumer:(Class)arg2 ;
@end
