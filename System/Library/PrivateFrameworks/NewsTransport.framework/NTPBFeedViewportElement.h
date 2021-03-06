/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NTPBFeedViewportGap, NTPBFeedViewportGroup;

@interface NTPBFeedViewportElement : PBCodable <NSCopying> {

	NSString* _identifier;
	NTPBFeedViewportGap* _pbGap;
	NTPBFeedViewportGroup* _pbGroup;
	int _type;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasPbGroup; 
@property (nonatomic,retain) NTPBFeedViewportGroup * pbGroup;              //@synthesize pbGroup=_pbGroup - In the implementation block
@property (nonatomic,readonly) BOOL hasPbGap; 
@property (nonatomic,retain) NTPBFeedViewportGap * pbGap;                  //@synthesize pbGap=_pbGap - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(NTPBFeedViewportGroup *)pbGroup;
-(BOOL)hasIdentifier;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(NSString *)identifier;
-(void)setType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPbGap:(NTPBFeedViewportGap *)arg1 ;
-(BOOL)hasType;
-(int)type;
-(BOOL)hasPbGroup;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)hasPbGap;
-(NTPBFeedViewportGap *)pbGap;
-(void)setPbGroup:(NTPBFeedViewportGroup *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

