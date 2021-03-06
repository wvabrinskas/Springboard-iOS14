/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@class MRPlayer, NSMutableArray, MRPlayerPath, MRClient, NSArray;

@interface MRNowPlayingClient : NSObject <MRNowPlayingClientState> {

	MRPlayer* _activePlayer;
	NSMutableArray* _playerClients;
	BOOL _isForeground;
	BOOL _useMediaRemoteActivePlayerHeuristic;
	MRPlayerPath* _playerPath;

}

@property (nonatomic,retain) MRPlayerPath * playerPath;                             //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,retain) MRClient * client; 
@property (nonatomic,readonly) MRPlayerPath * activePlayerPath; 
@property (nonatomic,readonly) NSArray * playerClients; 
@property (assign,nonatomic) BOOL useMediaRemoteActivePlayerHeuristic;              //@synthesize useMediaRemoteActivePlayerHeuristic=_useMediaRemoteActivePlayerHeuristic - In the implementation block
-(MRPlayerPath *)activePlayerPath;
-(void)applicationDidEnterBackground;
-(void)removePlayer:(id)arg1 ;
-(void)setPlayerPath:(MRPlayerPath *)arg1 ;
-(void)restoreNowPlayingClientState;
-(id)initWithPlayerPath:(id)arg1 ;
-(MRPlayerPath *)playerPath;
-(void)setUseMediaRemoteActivePlayerHeuristic:(BOOL)arg1 ;
-(void)requestActiveForPlayerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setClient:(MRClient *)arg1 ;
-(id)debugDescription;
-(MRClient *)client;
-(NSArray *)playerClients;
-(id)description;
-(void)applicationWillEnterForeground;
-(id)nowPlayingPlayerClientForPlayerPath:(id)arg1 ;
-(void)updateActivePlayerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)mergeClient:(id)arg1 ;
-(void)reevaluateActivePlayerWithReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)useMediaRemoteActivePlayerHeuristic;
-(void)setActivePlayerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

