/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOTrafficResponseMetaData, NSMutableArray;

@interface GEOTrafficTrafficApiResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOSessionID _responseId;
	GEOTrafficResponseMetaData* _metaData;
	NSMutableArray* _trafficSnapshots;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_responseId : 1;
		unsigned read_metaData : 1;
		unsigned read_trafficSnapshots : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasResponseId; 
@property (assign,nonatomic) GEOSessionID responseId; 
@property (nonatomic,readonly) BOOL hasMetaData; 
@property (nonatomic,retain) GEOTrafficResponseMetaData * metaData; 
@property (nonatomic,retain) NSMutableArray * trafficSnapshots; 
+(Class)trafficSnapshotsType;
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setResponseId:(GEOSessionID)arg1 ;
-(id)init;
-(BOOL)hasResponseId;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(GEOTrafficResponseMetaData *)metaData;
-(void)addTrafficSnapshots:(id)arg1 ;
-(unsigned long long)trafficSnapshotsCount;
-(void)clearTrafficSnapshots;
-(id)trafficSnapshotsAtIndex:(unsigned long long)arg1 ;
-(void)setHasResponseId:(BOOL)arg1 ;
-(id)description;
-(NSMutableArray *)trafficSnapshots;
-(void)setTrafficSnapshots:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(GEOSessionID)responseId;
-(void)setMetaData:(GEOTrafficResponseMetaData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasMetaData;
-(void)readAll:(BOOL)arg1 ;
@end
