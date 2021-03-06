/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BCSItemCaching.h>

@class BCSBusinessItem, NSData;

@interface BCSBusinessItemMemoryCache : NSObject <BCSItemCaching> {

	BCSBusinessItem* _lastFetchedBusinessItem;
	BCSBusinessItem* _bizItemForLastFetchedIcon;
	NSData* _lastFetchedBusinessItemIconData;

}

@property (nonatomic,retain) BCSBusinessItem * bizItemForLastFetchedIcon;              //@synthesize bizItemForLastFetchedIcon=_bizItemForLastFetchedIcon - In the implementation block
@property (nonatomic,retain) NSData * lastFetchedBusinessItemIconData;                 //@synthesize lastFetchedBusinessItemIconData=_lastFetchedBusinessItemIconData - In the implementation block
@property (nonatomic,retain) BCSBusinessItem * lastFetchedBusinessItem;                //@synthesize lastFetchedBusinessItem=_lastFetchedBusinessItem - In the implementation block
+(id)sharedCache;
-(void)deleteCache;
-(id)itemMatching:(id)arg1 ;
-(void)deleteItemMatching:(id)arg1 ;
-(void)updateItem:(id)arg1 withItemIdentifier:(id)arg2 ;
-(void)deleteItemsOfType:(long long)arg1 ;
-(void)deleteExpiredItemsOfType:(long long)arg1 ;
-(BCSBusinessItem *)bizItemForLastFetchedIcon;
-(NSData *)lastFetchedBusinessItemIconData;
-(void)setLastFetchedBusinessItem:(BCSBusinessItem *)arg1 ;
-(void)setLastFetchedBusinessItemIconData:(NSData *)arg1 ;
-(BCSBusinessItem *)lastFetchedBusinessItem;
-(id)lastFetchedBusinessItemIconDataForBizItem:(id)arg1 ;
-(void)setLastFetchedBusinesIconData:(id)arg1 withMatchingBusinessItem:(id)arg2 ;
-(void)setBizItemForLastFetchedIcon:(BCSBusinessItem *)arg1 ;
@end

