/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSArray;

@interface FCFeedItemsWithIDLookupResult : NSObject {

	NSDictionary* _sectionIDsByFeedID;
	NSArray* _feedItems;

}

@property (nonatomic,retain) NSDictionary * sectionIDsByFeedID;              //@synthesize sectionIDsByFeedID=_sectionIDsByFeedID - In the implementation block
@property (nonatomic,retain) NSArray * feedItems;                            //@synthesize feedItems=_feedItems - In the implementation block
-(NSArray *)feedItems;
-(void)setFeedItems:(NSArray *)arg1 ;
-(id)init;
-(id)initWithSectionIDByFeedID:(id)arg1 feedItems:(id)arg2 ;
-(NSDictionary *)sectionIDsByFeedID;
-(void)setSectionIDsByFeedID:(NSDictionary *)arg1 ;
@end

