/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBTranslationMap : PBCodable <NSCopying> {

	NSMutableArray* _favoritesLanguageBuckets;
	NSMutableArray* _topicLanguageBuckets;

}

@property (nonatomic,retain) NSMutableArray * topicLanguageBuckets;                  //@synthesize topicLanguageBuckets=_topicLanguageBuckets - In the implementation block
@property (nonatomic,retain) NSMutableArray * favoritesLanguageBuckets;              //@synthesize favoritesLanguageBuckets=_favoritesLanguageBuckets - In the implementation block
+(Class)topicLanguageBucketsType;
+(Class)favoritesLanguageBucketsType;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)topicLanguageBuckets;
-(NSMutableArray *)favoritesLanguageBuckets;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)addTopicLanguageBuckets:(id)arg1 ;
-(void)addFavoritesLanguageBuckets:(id)arg1 ;
-(void)clearTopicLanguageBuckets;
-(unsigned long long)topicLanguageBucketsCount;
-(id)topicLanguageBucketsAtIndex:(unsigned long long)arg1 ;
-(void)clearFavoritesLanguageBuckets;
-(unsigned long long)favoritesLanguageBucketsCount;
-(id)favoritesLanguageBucketsAtIndex:(unsigned long long)arg1 ;
-(void)setTopicLanguageBuckets:(NSMutableArray *)arg1 ;
-(void)setFavoritesLanguageBuckets:(NSMutableArray *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

