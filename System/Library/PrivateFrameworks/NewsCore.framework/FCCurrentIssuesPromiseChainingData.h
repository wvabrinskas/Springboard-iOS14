/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSSet, FCCurrentIssuesCheckerResult;

@interface FCCurrentIssuesPromiseChainingData : NSObject {

	NSArray* _resultingIssues;
	NSSet* _bundleChannelIDs;
	NSArray* _followedChannelIDs;
	NSArray* _autoFavoriteTagIDs;
	FCCurrentIssuesCheckerResult* _partialResult;

}

@property (nonatomic,retain) NSArray * resultingIssues;                                 //@synthesize resultingIssues=_resultingIssues - In the implementation block
@property (nonatomic,retain) NSSet * bundleChannelIDs;                                  //@synthesize bundleChannelIDs=_bundleChannelIDs - In the implementation block
@property (nonatomic,retain) NSArray * followedChannelIDs;                              //@synthesize followedChannelIDs=_followedChannelIDs - In the implementation block
@property (nonatomic,retain) NSArray * autoFavoriteTagIDs;                              //@synthesize autoFavoriteTagIDs=_autoFavoriteTagIDs - In the implementation block
@property (nonatomic,retain) FCCurrentIssuesCheckerResult * partialResult;              //@synthesize partialResult=_partialResult - In the implementation block
-(NSSet *)bundleChannelIDs;
-(void)setBundleChannelIDs:(NSSet *)arg1 ;
-(NSArray *)resultingIssues;
-(FCCurrentIssuesCheckerResult *)partialResult;
-(void)setPartialResult:(FCCurrentIssuesCheckerResult *)arg1 ;
-(NSArray *)followedChannelIDs;
-(void)setFollowedChannelIDs:(NSArray *)arg1 ;
-(void)setResultingIssues:(NSArray *)arg1 ;
-(void)setAutoFavoriteTagIDs:(NSArray *)arg1 ;
-(NSArray *)autoFavoriteTagIDs;
@end
