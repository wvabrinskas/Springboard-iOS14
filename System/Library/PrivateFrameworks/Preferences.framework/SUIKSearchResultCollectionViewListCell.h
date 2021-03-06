/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewListCell.h>

@class CSSearchableItem;

@interface SUIKSearchResultCollectionViewListCell : UICollectionViewListCell {

	CSSearchableItem* _searchableItem;

}

@property (nonatomic,retain) CSSearchableItem * searchableItem;              //@synthesize searchableItem=_searchableItem - In the implementation block
+(id)reuseIdentifier;
-(CSSearchableItem *)searchableItem;
-(void)configureWithSearchableItem:(id)arg1 ;
-(void)setSearchableItem:(CSSearchableItem *)arg1 ;
-(void)updateConfigurationUsingState:(id)arg1 ;
-(void)prepareForReuse;
@end

