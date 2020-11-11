/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface RKRankLearner : NSObject
-(id)init;
-(id)getDBManager:(id)arg1 ;
-(id)updateFeaturesForResponse:(id)arg1 selectCounts:(id)arg2 inputMethodCounts:(id)arg3 sourceCounts:(id)arg4 currentTime:(id)arg5 languageCode:(id)arg6 ;
-(id)rankResponses:(id)arg1 ;
-(id)getDBManager:(id)arg1 withCustomPath:(id)arg2 ;
-(BOOL)insertRankingInfo:(id)arg1 forLanguageID:(id)arg2 ;
-(id)getRankedResponses:(id)arg1 forRecipientID:(id)arg2 withLanguageID:(id)arg3 ;
-(void)flushRankingData:(id)arg1 ;
@end
