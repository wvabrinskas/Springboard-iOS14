/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSSet;

@interface BMDatedBasket : NSObject {

	NSDate* _date;
	NSSet* _basket;

}

@property (nonatomic,copy,readonly) NSDate * date;               //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSSet * basket;              //@synthesize basket=_basket - In the implementation block
+(id)undated:(id)arg1 ;
-(NSDate *)date;
-(NSSet *)basket;
-(id)initWithBasket:(id)arg1 Date:(id)arg2 ;
@end

