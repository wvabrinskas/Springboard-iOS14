/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface COMAPPLEFELDSPARPROTOCOLScoredTagID : PBCodable <NSCopying> {

	float _score;
	NSString* _tagId;

}

@property (nonatomic,retain) NSString * tagId;              //@synthesize tagId=_tagId - In the implementation block
@property (assign,nonatomic) float score;                   //@synthesize score=_score - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setScore:(float)arg1 ;
-(NSString *)tagId;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(float)score;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTagId:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

