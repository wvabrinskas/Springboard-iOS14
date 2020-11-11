/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCTodayPrivateData.h>
@class NSSet, NSArray, NSDictionary, NSNumber, FCBundleSubscription;


@protocol FCTodayPrivateData <NSObject,NFMutableCopying,FCPurchaseProviderType,FCBundleSubscriptionProviderType>
@property (nonatomic,copy,readonly) id<FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData; 
@property (nonatomic,copy,readonly) NSSet * mutedTagIDs; 
@property (nonatomic,copy,readonly) NSArray * autoFavoriteTagIDs; 
@property (nonatomic,copy,readonly) NSSet * purchasedTagIDs; 
@property (nonatomic,copy,readonly) NSArray * rankedAllSubscribedTagIDs; 
@property (nonatomic,copy,readonly) NSArray * recentlySeenHistoryItems; 
@property (nonatomic,copy,readonly) NSDictionary * recentlyReadHistoryItems; 
@property (nonatomic,copy,readonly) NSNumber * onboardingVersion; 
@property (nonatomic,copy,readonly) FCBundleSubscription * bundleSubscription; 
@required
-(NSNumber *)onboardingVersion;
-(NSSet *)purchasedTagIDs;
-(id<FCDerivedPersonalizationData><NSCoding>)derivedPersonalizationData;
-(NSArray *)rankedAllSubscribedTagIDs;
-(NSArray *)recentlySeenHistoryItems;
-(NSDictionary *)recentlyReadHistoryItems;
-(NSSet *)mutedTagIDs;
-(FCBundleSubscription *)bundleSubscription;
-(NSArray *)autoFavoriteTagIDs;

@end


@class NSSet, NSArray, NSDictionary, NSNumber, FCBundleSubscription, NSString;

@interface FCTodayPrivateData : NSObject <FCTodayPrivateData> {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * dictionary;                                                               //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,copy,readonly) id<FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData; 
@property (nonatomic,copy,readonly) NSSet * mutedTagIDs; 
@property (nonatomic,copy,readonly) NSArray * autoFavoriteTagIDs; 
@property (nonatomic,copy,readonly) NSSet * purchasedTagIDs; 
@property (nonatomic,copy,readonly) NSArray * rankedAllSubscribedTagIDs; 
@property (nonatomic,copy,readonly) NSArray * recentlySeenHistoryItems; 
@property (nonatomic,copy,readonly) NSDictionary * recentlyReadHistoryItems; 
@property (nonatomic,copy,readonly) NSNumber * onboardingVersion; 
@property (nonatomic,copy,readonly) FCBundleSubscription * bundleSubscription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)onboardingVersion;
-(id)init;
-(NSSet *)purchasedTagIDs;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id<FCDerivedPersonalizationData><NSCoding>)derivedPersonalizationData;
-(NSArray *)rankedAllSubscribedTagIDs;
-(NSArray *)recentlySeenHistoryItems;
-(NSDictionary *)recentlyReadHistoryItems;
-(NSSet *)mutedTagIDs;
-(FCBundleSubscription *)bundleSubscription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)autoFavoriteTagIDs;
-(void)prepareForUseWithCompletion:(/*^block*/id)arg1 ;
@end
