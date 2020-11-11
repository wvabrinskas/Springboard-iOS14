/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GKLeaderboardSummaryInternal;

@interface GKLeaderboardSummary : NSObject {

	GKLeaderboardSummaryInternal* _internal;

}

@property (nonatomic,retain) GKLeaderboardSummaryInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (assign,nonatomic) unsigned long long scoreValue; 
@property (assign,nonatomic) unsigned long long rank; 
@property (assign,nonatomic) unsigned long long totalEntries; 
@property (assign,nonatomic) unsigned long long friendRank; 
@property (assign,nonatomic) unsigned long long totalFriendEntries; 
-(void)setInternal:(GKLeaderboardSummaryInternal *)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(GKLeaderboardSummaryInternal *)internal;
@end
