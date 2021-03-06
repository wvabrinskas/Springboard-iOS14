/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface FCTagSubscriptionOrderAssigner : NSObject {

	long long _initialOrder;
	long long _orderSpacing;

}

@property (nonatomic,readonly) long long initialOrder;              //@synthesize initialOrder=_initialOrder - In the implementation block
@property (nonatomic,readonly) long long orderSpacing;              //@synthesize orderSpacing=_orderSpacing - In the implementation block
-(id)init;
-(id)_assignOrderToSubscriptionsInOpenRange:(id)arg1 ;
-(id)assignOrderToTagSubscriptions:(id)arg1 ;
-(long long)orderSpacing;
-(id)initWithInitialOrder:(long long)arg1 orderSpacing:(long long)arg2 ;
-(id)_assignOrderToSubscriptions:(id)arg1 inOpenEndRangeWithPreviousValue:(long long)arg2 ;
-(id)_assignOrderToSubscriptions:(id)arg1 withInitialOrder:(long long)arg2 orderSpacing:(long long)arg3 ;
-(long long)initialOrder;
-(id)_assignOrderToSubscriptions:(id)arg1 inClosedRangeWithPreviousValue:(long long)arg2 nextValue:(long long)arg3 ;
-(id)_assignOrderToSubscriptions:(id)arg1 inOpenStartRangeWithNextValue:(long long)arg2 ;
@end

