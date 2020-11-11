/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>

@class GKChallenge, NSArray, NSMutableDictionary;

@interface GKDashboardChallengePlayerPickerDataSource : GKCollectionDataSource {

	GKChallenge* _challenge;
	NSArray* _players;
	NSMutableDictionary* _playerStates;
	NSMutableDictionary* _playerAchievementDates;
	NSArray* _searchPlayers;

}

@property (nonatomic,retain) GKChallenge * challenge;                                   //@synthesize challenge=_challenge - In the implementation block
@property (nonatomic,retain) NSArray * players;                                         //@synthesize players=_players - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * playerStates;                        //@synthesize playerStates=_playerStates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * playerAchievementDates;              //@synthesize playerAchievementDates=_playerAchievementDates - In the implementation block
@property (nonatomic,retain) NSArray * searchPlayers;                                   //@synthesize searchPlayers=_searchPlayers - In the implementation block
@property (nonatomic,readonly) NSArray * selectedPlayers; 
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(NSArray *)players;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(double)preferredCollectionHeight;
-(void)setPlayers:(NSArray *)arg1 ;
-(id)initWithChallenge:(id)arg1 ;
-(void)setupCollectionView:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(id)sectionHeaderText;
-(GKChallenge *)challenge;
-(void)setPlayerStates:(NSMutableDictionary *)arg1 ;
-(void)setPlayerAchievementDates:(NSMutableDictionary *)arg1 ;
-(id)currentPlayers;
-(id)playerForIndexPath:(id)arg1 ;
-(void)setSearchPlayers:(NSArray *)arg1 ;
-(NSArray *)selectedPlayers;
-(id)indexPathForPlayer:(id)arg1 ;
-(id)searchKeyForSection:(long long)arg1 ;
-(void)searchTextHasChanged;
-(NSMutableDictionary *)playerStates;
-(NSMutableDictionary *)playerAchievementDates;
-(NSArray *)searchPlayers;
-(void)setChallenge:(GKChallenge *)arg1 ;
-(void)clearSelection;
-(long long)itemCount;
-(void)dealloc;
@end
