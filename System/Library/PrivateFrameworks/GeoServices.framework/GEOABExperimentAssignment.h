/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOABDebugPanelExperimentBranch, NSString;

@interface GEOABExperimentAssignment : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOABDebugPanelExperimentBranch* _debugExperimentBranch;
	NSString* _offlineAbJson;
	NSString* _querySubstring;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _placeRequestType;
	int _serviceType;
	struct {
		unsigned has_placeRequestType : 1;
		unsigned has_serviceType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_debugExperimentBranch : 1;
		unsigned read_offlineAbJson : 1;
		unsigned read_querySubstring : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasServiceType; 
@property (assign,nonatomic) int serviceType; 
@property (assign,nonatomic) BOOL hasPlaceRequestType; 
@property (assign,nonatomic) int placeRequestType; 
@property (nonatomic,readonly) BOOL hasQuerySubstring; 
@property (nonatomic,retain) NSString * querySubstring; 
@property (nonatomic,readonly) BOOL hasDebugExperimentBranch; 
@property (nonatomic,retain) GEOABDebugPanelExperimentBranch * debugExperimentBranch; 
@property (nonatomic,readonly) BOOL hasOfflineAbJson; 
@property (nonatomic,retain) NSString * offlineAbJson; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)placeRequestTypeAsString:(int)arg1 ;
-(BOOL)hasServiceType;
-(id)init;
-(void)setHasServiceType:(BOOL)arg1 ;
-(id)serviceTypeAsString:(int)arg1 ;
-(id)jsonRepresentation;
-(int)StringAsServiceType:(id)arg1 ;
-(unsigned long long)hash;
-(int)placeRequestType;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)serviceType;
-(void)setPlaceRequestType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setServiceType:(int)arg1 ;
-(NSString *)querySubstring;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOABDebugPanelExperimentBranch *)debugExperimentBranch;
-(id)initWithData:(id)arg1 ;
-(int)StringAsPlaceRequestType:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDebugExperimentBranch:(GEOABDebugPanelExperimentBranch *)arg1 ;
-(BOOL)hasDebugExperimentBranch;
-(NSString *)offlineAbJson;
-(void)setQuerySubstring:(NSString *)arg1 ;
-(void)setOfflineAbJson:(NSString *)arg1 ;
-(BOOL)hasQuerySubstring;
-(BOOL)hasOfflineAbJson;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasPlaceRequestType;
-(void)setHasPlaceRequestType:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
