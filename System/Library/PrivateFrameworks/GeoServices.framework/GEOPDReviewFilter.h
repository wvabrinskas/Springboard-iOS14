/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDReviewFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDPhotoSizeFilterValue* _photoSizeFilters;
	unsigned long long _photoSizeFiltersCount;
	unsigned long long _photoSizeFiltersSpace;
	BOOL _suppressSyntheticReviews;
	struct {
		unsigned has_suppressSyntheticReviews : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long photoSizeFiltersCount; 
@property (nonatomic,readonly) GEOPDPhotoSizeFilterValue* photoSizeFilters; 
@property (assign,nonatomic) BOOL hasSuppressSyntheticReviews; 
@property (assign,nonatomic) BOOL suppressSyntheticReviews; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDPhotoSizeFilterValue)photoSizeFilterAtIndex:(unsigned long long)arg1 ;
-(void)clearPhotoSizeFilters;
-(BOOL)hasSuppressSyntheticReviews;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(void)setSuppressSyntheticReviews:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOPDPhotoSizeFilterValue*)photoSizeFilters;
-(void)setHasSuppressSyntheticReviews:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)photoSizeFiltersCount;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPhotoSizeFilters:(GEOPDPhotoSizeFilterValue*)arg1 count:(unsigned long long)arg2 ;
-(PBUnknownFields *)unknownFields;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addPhotoSizeFilter:(GEOPDPhotoSizeFilterValue)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)suppressSyntheticReviews;
-(void)readAll:(BOOL)arg1 ;
-(void)dealloc;
@end
