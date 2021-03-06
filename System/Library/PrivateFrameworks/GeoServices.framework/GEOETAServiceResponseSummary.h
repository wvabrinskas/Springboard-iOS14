/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOETAServiceResponseSummary : PBCodable <NSCopying> {

	GEOSessionID _responseUuid;
	NSMutableArray* _routeInfos;
	int _status;
	BOOL _resultsApplied;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasResultsApplied; 
@property (assign,nonatomic) BOOL resultsApplied; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasResponseUuid; 
@property (assign,nonatomic) GEOSessionID responseUuid; 
@property (nonatomic,retain) NSMutableArray * routeInfos; 
+(BOOL)isValid:(id)arg1 ;
+(Class)routeInfoType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasStatus;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(void)setHasStatus:(BOOL)arg1 ;
-(int)status;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStatus:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)routeInfos;
-(void)setResultsApplied:(BOOL)arg1 ;
-(void)setResponseUuid:(GEOSessionID)arg1 ;
-(void)addRouteInfo:(id)arg1 ;
-(unsigned long long)routeInfosCount;
-(void)clearRouteInfos;
-(id)routeInfoAtIndex:(unsigned long long)arg1 ;
-(GEOSessionID)responseUuid;
-(BOOL)resultsApplied;
-(void)setHasResultsApplied:(BOOL)arg1 ;
-(BOOL)hasResultsApplied;
-(void)setHasResponseUuid:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasResponseUuid;
-(void)setRouteInfos:(NSMutableArray *)arg1 ;
-(id)statusAsString:(int)arg1 ;
@end

