/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamInsights.framework/ShazamInsights
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShazamInsights/SQQuery.h>

@interface SQPoolQuery : SQQuery
+(id)poolsFromServerData:(id)arg1 error:(id*)arg2 ;
-(void)fetchPoolsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cachePoolForRegion:(id)arg1 date:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchClustersWithPoolID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deletePool:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end
