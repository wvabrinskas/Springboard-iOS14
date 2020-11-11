/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKLeaderboardCollectionDataSource.h>

@class NSDictionary, NSArray;

@interface GKLeaderboardSetDataSource : GKLeaderboardCollectionDataSource {

	NSDictionary* _leaderboardSetAssetNames;
	NSDictionary* _leaderboardAssetNames;
	NSArray* _leaderboardSets;

}

@property (nonatomic,retain) NSArray * leaderboardSets;                            //@synthesize leaderboardSets=_leaderboardSets - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardSetAssetNames;              //@synthesize leaderboardSetAssetNames=_leaderboardSetAssetNames - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardAssetNames;                 //@synthesize leaderboardAssetNames=_leaderboardAssetNames - In the implementation block
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(id)title;
-(CGSize)standardCellSizeForCollectionView:(id)arg1 ;
-(void)handleSelectionInCollectionView:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)prepareCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(long long)itemCount;
-(NSArray *)leaderboardSets;
-(void)setLeaderboardSets:(NSArray *)arg1 ;
-(NSDictionary *)leaderboardSetAssetNames;
-(void)presentLeaderboardsListWithSet:(id)arg1 segueToLeaderboard:(id)arg2 ;
-(void)setLeaderboardSetAssetNames:(NSDictionary *)arg1 ;
-(void)updateHighlightsInSectionHeader:(id)arg1 ;
-(void)removeLeaderboardSetsWithoutImages;
-(NSDictionary *)leaderboardAssetNames;
-(void)setLeaderboardAssetNames:(NSDictionary *)arg1 ;
-(long long)allowedColumnCount:(long long)arg1 ;
@end
