/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBLinkTapArticle : PBCodable <NSCopying> {

	NSString* _articleId;
	int _articleType;
	NSString* _linkUrl;
	NSString* _referencedArticleId;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasLinkUrl; 
@property (nonatomic,retain) NSString * linkUrl;                          //@synthesize linkUrl=_linkUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                        //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;              //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (assign,nonatomic) BOOL hasArticleType; 
@property (assign,nonatomic) int articleType;                             //@synthesize articleType=_articleType - In the implementation block
-(void)setArticleId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(int)articleType;
-(id)articleTypeAsString:(int)arg1 ;
-(NSString *)linkUrl;
-(unsigned long long)hash;
-(NSString *)referencedArticleId;
-(BOOL)hasArticleType;
-(void)setLinkUrl:(NSString *)arg1 ;
-(BOOL)hasLinkUrl;
-(id)dictionaryRepresentation;
-(void)setArticleType:(int)arg1 ;
-(void)setHasArticleType:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)StringAsArticleType:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasReferencedArticleId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasArticleId;
-(NSString *)articleId;
@end

