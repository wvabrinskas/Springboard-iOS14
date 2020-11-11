/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStore/ISOperation.h>

@class NSDictionary, NSString, SKUIReviewConfiguration;

@interface SKUIPostRatingOperation : ISOperation {

	NSDictionary* _responseDictionary;
	NSString* _itemID;
	long long _rating;
	SKUIReviewConfiguration* _reviewConfiguration;

}

@property (readonly) NSDictionary * responseDictionary; 
-(void)run;
-(NSDictionary *)responseDictionary;
-(id)initWithRating:(long long)arg1 forItemID:(id)arg2 reviewConfiguration:(id)arg3 ;
@end
