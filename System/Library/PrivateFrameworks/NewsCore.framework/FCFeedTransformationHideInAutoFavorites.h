/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class NSDictionary, NSSet, NSString;

@interface FCFeedTransformationHideInAutoFavorites : NSObject <FCFeedTransforming> {

	NSDictionary* _feedContextByFeedID;
	NSSet* _autoFavoriteTagIDs;

}

@property (nonatomic,copy) NSDictionary * feedContextByFeedID;              //@synthesize feedContextByFeedID=_feedContextByFeedID - In the implementation block
@property (nonatomic,copy) NSSet * autoFavoriteTagIDs;                      //@synthesize autoFavoriteTagIDs=_autoFavoriteTagIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithFeedContextByFeedID:(id)arg1 autoFavoriteTagIDs:(id)arg2 ;
-(void)setFeedContextByFeedID:(NSDictionary *)arg1 ;
-(void)setAutoFavoriteTagIDs:(NSSet *)arg1 ;
-(NSDictionary *)feedContextByFeedID;
-(id)transformFeedItems:(id)arg1 ;
-(NSSet *)autoFavoriteTagIDs;
@end
