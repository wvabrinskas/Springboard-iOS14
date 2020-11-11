/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray, GEOPDMuninViewState;

@interface GEORPGroundViewFeedbackContext : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE92* _visiblePlaceMuids;
	NSString* _imageId;
	unsigned long long _imdataId;
	NSMutableArray* _onscreenImageResources;
	GEOPDMuninViewState* _viewState;
	NSMutableArray* _visibleFeatureHandles;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _metadataTileBuildId;
	struct {
		unsigned has_imdataId : 1;
		unsigned has_metadataTileBuildId : 1;
		unsigned read_unknownFields : 1;
		unsigned read_visiblePlaceMuids : 1;
		unsigned read_imageId : 1;
		unsigned read_onscreenImageResources : 1;
		unsigned read_viewState : 1;
		unsigned read_visibleFeatureHandles : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasViewState; 
@property (nonatomic,retain) GEOPDMuninViewState * viewState; 
@property (assign,nonatomic) BOOL hasMetadataTileBuildId; 
@property (assign,nonatomic) unsigned metadataTileBuildId; 
@property (nonatomic,retain) NSMutableArray * onscreenImageResources; 
@property (nonatomic,readonly) unsigned long long visiblePlaceMuidsCount; 
@property (nonatomic,readonly) unsigned long long* visiblePlaceMuids; 
@property (assign,nonatomic) BOOL hasImdataId; 
@property (assign,nonatomic) unsigned long long imdataId; 
@property (nonatomic,readonly) BOOL hasImageId; 
@property (nonatomic,retain) NSString * imageId; 
@property (nonatomic,retain) NSMutableArray * visibleFeatureHandles; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)onscreenImageResourceType;
+(Class)visibleFeatureHandleType;
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasViewState;
-(void)setViewState:(GEOPDMuninViewState *)arg1 ;
-(void)setMetadataTileBuildId:(unsigned)arg1 ;
-(void)addOnscreenImageResource:(id)arg1 ;
-(void)addVisiblePlaceMuid:(unsigned long long)arg1 ;
-(void)addVisibleFeatureHandle:(id)arg1 ;
-(unsigned long long)onscreenImageResourcesCount;
-(void)clearOnscreenImageResources;
-(id)onscreenImageResourceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)visiblePlaceMuidsCount;
-(void)clearVisiblePlaceMuids;
-(unsigned long long)visiblePlaceMuidAtIndex:(unsigned long long)arg1 ;
-(unsigned long long*)visiblePlaceMuids;
-(unsigned long long)visibleFeatureHandlesCount;
-(void)clearVisibleFeatureHandles;
-(id)visibleFeatureHandleAtIndex:(unsigned long long)arg1 ;
-(unsigned)metadataTileBuildId;
-(void)setHasMetadataTileBuildId:(BOOL)arg1 ;
-(BOOL)hasMetadataTileBuildId;
-(NSMutableArray *)onscreenImageResources;
-(void)setOnscreenImageResources:(NSMutableArray *)arg1 ;
-(void)setVisiblePlaceMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(NSMutableArray *)visibleFeatureHandles;
-(void)setVisibleFeatureHandles:(NSMutableArray *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)imageId;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)imdataId;
-(void)setImdataId:(unsigned long long)arg1 ;
-(BOOL)hasImdataId;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(GEOPDMuninViewState *)viewState;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasImageId;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasImdataId:(BOOL)arg1 ;
-(void)setImageId:(NSString *)arg1 ;
-(void)dealloc;
@end
