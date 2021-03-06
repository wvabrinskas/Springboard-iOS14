/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface MPPCompoundPredicate : PBCodable <NSCopying> {

	NSMutableArray* _predicates;

}

@property (nonatomic,retain) NSMutableArray * predicates;              //@synthesize predicates=_predicates - In the implementation block
-(NSMutableArray *)predicates;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(void)clearPredicates;
-(void)addPredicates:(id)arg1 ;
-(unsigned long long)predicatesCount;
-(BOOL)isEqual:(id)arg1 ;
-(id)predicatesAtIndex:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPredicates:(NSMutableArray *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

