/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDAddressObjectGeocodingResult, GEOPDAirportEntityPlaceLookupResult, GEOPDAllCollectionsViewResult, GEOPDAutocompleteResult, GEOPDBatchCategoryLookupResult, GEOPDBatchMerchantLookupBrandResult, GEOPDBatchPopularNearbySearchResult, GEOPDBatchReverseGeocodingResult, GEOPDBatchSpatialLookupResult, GEOPDBrandLookupResult, GEOPDSearchBrowseCategorySuggestionResult, GEOPDCanonicalLocationSearchResult, GEOPDCategorySearchResult, GEOPDChildPlaceLookupByCategoryResult, GEOPDCollectionSuggestionResult, GEOPDExternalTransitLookupResult, GEOPDFeatureIdGeocodingResult, GEOPDGeocodingResult, GEOPDGroundViewLabelResult, GEOPDIpGeoLookupResult, GEOPDLocationDirectedSearchResult, GEOPDMapsIdentifierPlaceLookupResult, GEOPDMapsSearchHomeResult, GEOPDMerchantLookupResult, GEOPDNearbySearchResult, GEOPDPlaceCollectionLookupResult, GEOPDPlaceGlobalCommonResult, GEOPDPlaceLookupResult, GEOPDPlaceRefinementResult, GEOPDPopularNearbySearchResult, GEOPDPublisherViewResult, GEOPDReverseGeocodingResult, GEOPDSearchFieldPlaceholderResult, GEOPDSearchResult, GEOPDSearchZeroKeywordCategorySuggestionResult, GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult, GEOPDSiriSearchResult, GEOPDTerritoryLookupResult, GEOPDTransitScheduleLookupResult, GEOPDVendorSpecificPlaceRefinementResult, GEOPDWifiFingerprintResult;

@interface GEOPDPlaceGlobalResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDAddressObjectGeocodingResult* _addressObjectGeocodingResult;
	GEOPDAirportEntityPlaceLookupResult* _airportEntityPlaceLookupResult;
	GEOPDAllCollectionsViewResult* _allCollectionsViewResult;
	GEOPDAutocompleteResult* _autocompleteResult;
	GEOPDBatchCategoryLookupResult* _batchCategoryLookupResult;
	GEOPDBatchMerchantLookupBrandResult* _batchMerchantLookupBrandResult;
	GEOPDBatchPopularNearbySearchResult* _batchPopularNearbySearchResult;
	GEOPDBatchReverseGeocodingResult* _batchReverseGeocodingResult;
	GEOPDBatchSpatialLookupResult* _batchSpatialLookupResult;
	GEOPDBrandLookupResult* _brandLookupResult;
	GEOPDSearchBrowseCategorySuggestionResult* _browseCategorySuggestionResult;
	GEOPDCanonicalLocationSearchResult* _canonicalSearchResult;
	GEOPDCategorySearchResult* _categorySearchResult;
	GEOPDChildPlaceLookupByCategoryResult* _childPlaceLookupByCategoryResult;
	GEOPDCollectionSuggestionResult* _collectionSuggestionResult;
	GEOPDExternalTransitLookupResult* _externalTransitLookupResult;
	GEOPDFeatureIdGeocodingResult* _featureIdGeocodingResult;
	GEOPDGeocodingResult* _geocodingResult;
	GEOPDGroundViewLabelResult* _groundViewLabelResult;
	GEOPDIpGeoLookupResult* _ipGeoLookupResult;
	GEOPDLocationDirectedSearchResult* _locationDirectedSearchResult;
	GEOPDMapsIdentifierPlaceLookupResult* _mapsIdentifierPlaceLookupResult;
	GEOPDMapsSearchHomeResult* _mapsSearchHomeResult;
	GEOPDMerchantLookupResult* _merchantLookupResult;
	GEOPDNearbySearchResult* _nearbySearchResult;
	GEOPDPlaceCollectionLookupResult* _placeCollectionLookupResult;
	GEOPDPlaceGlobalCommonResult* _placeGlobalCommonResult;
	GEOPDPlaceLookupResult* _placeLookupResult;
	GEOPDPlaceRefinementResult* _placeRefinementResult;
	GEOPDPopularNearbySearchResult* _popularNearbySearchResult;
	GEOPDPublisherViewResult* _publisherViewResult;
	GEOPDReverseGeocodingResult* _reverseGeocodingResult;
	GEOPDSearchFieldPlaceholderResult* _searchFieldPlaceholderResult;
	GEOPDSearchResult* _searchResult;
	GEOPDSearchZeroKeywordCategorySuggestionResult* _searchZeroKeywordCategorySuggestionResult;
	GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult* _searchZeroKeywordWithSearchResultsSuggestionResult;
	GEOPDSiriSearchResult* _siriSearchResult;
	GEOPDTerritoryLookupResult* _territoryLookupResult;
	GEOPDTransitScheduleLookupResult* _transitScheduleLookupResult;
	GEOPDVendorSpecificPlaceRefinementResult* _vendorSpecificPlaceRefinementResult;
	GEOPDWifiFingerprintResult* _wifiFingerprintResult;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_addressObjectGeocodingResult : 1;
		unsigned read_airportEntityPlaceLookupResult : 1;
		unsigned read_allCollectionsViewResult : 1;
		unsigned read_autocompleteResult : 1;
		unsigned read_batchCategoryLookupResult : 1;
		unsigned read_batchMerchantLookupBrandResult : 1;
		unsigned read_batchPopularNearbySearchResult : 1;
		unsigned read_batchReverseGeocodingResult : 1;
		unsigned read_batchSpatialLookupResult : 1;
		unsigned read_brandLookupResult : 1;
		unsigned read_browseCategorySuggestionResult : 1;
		unsigned read_canonicalSearchResult : 1;
		unsigned read_categorySearchResult : 1;
		unsigned read_childPlaceLookupByCategoryResult : 1;
		unsigned read_collectionSuggestionResult : 1;
		unsigned read_externalTransitLookupResult : 1;
		unsigned read_featureIdGeocodingResult : 1;
		unsigned read_geocodingResult : 1;
		unsigned read_groundViewLabelResult : 1;
		unsigned read_ipGeoLookupResult : 1;
		unsigned read_locationDirectedSearchResult : 1;
		unsigned read_mapsIdentifierPlaceLookupResult : 1;
		unsigned read_mapsSearchHomeResult : 1;
		unsigned read_merchantLookupResult : 1;
		unsigned read_nearbySearchResult : 1;
		unsigned read_placeCollectionLookupResult : 1;
		unsigned read_placeGlobalCommonResult : 1;
		unsigned read_placeLookupResult : 1;
		unsigned read_placeRefinementResult : 1;
		unsigned read_popularNearbySearchResult : 1;
		unsigned read_publisherViewResult : 1;
		unsigned read_reverseGeocodingResult : 1;
		unsigned read_searchFieldPlaceholderResult : 1;
		unsigned read_searchResult : 1;
		unsigned read_searchZeroKeywordCategorySuggestionResult : 1;
		unsigned read_searchZeroKeywordWithSearchResultsSuggestionResult : 1;
		unsigned read_siriSearchResult : 1;
		unsigned read_territoryLookupResult : 1;
		unsigned read_transitScheduleLookupResult : 1;
		unsigned read_vendorSpecificPlaceRefinementResult : 1;
		unsigned read_wifiFingerprintResult : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSearchResult; 
@property (nonatomic,retain) GEOPDSearchResult * searchResult; 
@property (nonatomic,readonly) BOOL hasGeocodingResult; 
@property (nonatomic,retain) GEOPDGeocodingResult * geocodingResult; 
@property (nonatomic,readonly) BOOL hasCanonicalSearchResult; 
@property (nonatomic,retain) GEOPDCanonicalLocationSearchResult * canonicalSearchResult; 
@property (nonatomic,readonly) BOOL hasReverseGeocodingResult; 
@property (nonatomic,retain) GEOPDReverseGeocodingResult * reverseGeocodingResult; 
@property (nonatomic,readonly) BOOL hasPlaceLookupResult; 
@property (nonatomic,retain) GEOPDPlaceLookupResult * placeLookupResult; 
@property (nonatomic,readonly) BOOL hasMerchantLookupResult; 
@property (nonatomic,retain) GEOPDMerchantLookupResult * merchantLookupResult; 
@property (nonatomic,readonly) BOOL hasPlaceRefinementResult; 
@property (nonatomic,retain) GEOPDPlaceRefinementResult * placeRefinementResult; 
@property (nonatomic,readonly) BOOL hasSiriSearchResult; 
@property (nonatomic,retain) GEOPDSiriSearchResult * siriSearchResult; 
@property (nonatomic,readonly) BOOL hasLocationDirectedSearchResult; 
@property (nonatomic,retain) GEOPDLocationDirectedSearchResult * locationDirectedSearchResult; 
@property (nonatomic,readonly) BOOL hasAutocompleteResult; 
@property (nonatomic,retain) GEOPDAutocompleteResult * autocompleteResult; 
@property (nonatomic,readonly) BOOL hasBrowseCategorySuggestionResult; 
@property (nonatomic,retain) GEOPDSearchBrowseCategorySuggestionResult * browseCategorySuggestionResult; 
@property (nonatomic,readonly) BOOL hasCategorySearchResult; 
@property (nonatomic,retain) GEOPDCategorySearchResult * categorySearchResult; 
@property (nonatomic,readonly) BOOL hasPopularNearbySearchResult; 
@property (nonatomic,retain) GEOPDPopularNearbySearchResult * popularNearbySearchResult; 
@property (nonatomic,readonly) BOOL hasSearchZeroKeywordCategorySuggestionResult; 
@property (nonatomic,retain) GEOPDSearchZeroKeywordCategorySuggestionResult * searchZeroKeywordCategorySuggestionResult; 
@property (nonatomic,readonly) BOOL hasSearchFieldPlaceholderResult; 
@property (nonatomic,retain) GEOPDSearchFieldPlaceholderResult * searchFieldPlaceholderResult; 
@property (nonatomic,readonly) BOOL hasBatchPopularNearbySearchResult; 
@property (nonatomic,retain) GEOPDBatchPopularNearbySearchResult * batchPopularNearbySearchResult; 
@property (nonatomic,readonly) BOOL hasVendorSpecificPlaceRefinementResult; 
@property (nonatomic,retain) GEOPDVendorSpecificPlaceRefinementResult * vendorSpecificPlaceRefinementResult; 
@property (nonatomic,readonly) BOOL hasNearbySearchResult; 
@property (nonatomic,retain) GEOPDNearbySearchResult * nearbySearchResult; 
@property (nonatomic,readonly) BOOL hasAddressObjectGeocodingResult; 
@property (nonatomic,retain) GEOPDAddressObjectGeocodingResult * addressObjectGeocodingResult; 
@property (nonatomic,readonly) BOOL hasSearchZeroKeywordWithSearchResultsSuggestionResult; 
@property (nonatomic,retain) GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult * searchZeroKeywordWithSearchResultsSuggestionResult; 
@property (nonatomic,readonly) BOOL hasExternalTransitLookupResult; 
@property (nonatomic,retain) GEOPDExternalTransitLookupResult * externalTransitLookupResult; 
@property (nonatomic,readonly) BOOL hasFeatureIdGeocodingResult; 
@property (nonatomic,retain) GEOPDFeatureIdGeocodingResult * featureIdGeocodingResult; 
@property (nonatomic,readonly) BOOL hasMapsIdentifierPlaceLookupResult; 
@property (nonatomic,retain) GEOPDMapsIdentifierPlaceLookupResult * mapsIdentifierPlaceLookupResult; 
@property (nonatomic,readonly) BOOL hasBatchReverseGeocodingResult; 
@property (nonatomic,retain) GEOPDBatchReverseGeocodingResult * batchReverseGeocodingResult; 
@property (nonatomic,readonly) BOOL hasBrandLookupResult; 
@property (nonatomic,retain) GEOPDBrandLookupResult * brandLookupResult; 
@property (nonatomic,readonly) BOOL hasWifiFingerprintResult; 
@property (nonatomic,retain) GEOPDWifiFingerprintResult * wifiFingerprintResult; 
@property (nonatomic,readonly) BOOL hasIpGeoLookupResult; 
@property (nonatomic,retain) GEOPDIpGeoLookupResult * ipGeoLookupResult; 
@property (nonatomic,readonly) BOOL hasGroundViewLabelResult; 
@property (nonatomic,retain) GEOPDGroundViewLabelResult * groundViewLabelResult; 
@property (nonatomic,readonly) BOOL hasBatchSpatialLookupResult; 
@property (nonatomic,retain) GEOPDBatchSpatialLookupResult * batchSpatialLookupResult; 
@property (nonatomic,readonly) BOOL hasPlaceGlobalCommonResult; 
@property (nonatomic,retain) GEOPDPlaceGlobalCommonResult * placeGlobalCommonResult; 
@property (nonatomic,readonly) BOOL hasPlaceCollectionLookupResult; 
@property (nonatomic,retain) GEOPDPlaceCollectionLookupResult * placeCollectionLookupResult; 
@property (nonatomic,readonly) BOOL hasTransitScheduleLookupResult; 
@property (nonatomic,retain) GEOPDTransitScheduleLookupResult * transitScheduleLookupResult; 
@property (nonatomic,readonly) BOOL hasBatchCategoryLookupResult; 
@property (nonatomic,retain) GEOPDBatchCategoryLookupResult * batchCategoryLookupResult; 
@property (nonatomic,readonly) BOOL hasBatchMerchantLookupBrandResult; 
@property (nonatomic,retain) GEOPDBatchMerchantLookupBrandResult * batchMerchantLookupBrandResult; 
@property (nonatomic,readonly) BOOL hasChildPlaceLookupByCategoryResult; 
@property (nonatomic,retain) GEOPDChildPlaceLookupByCategoryResult * childPlaceLookupByCategoryResult; 
@property (nonatomic,readonly) BOOL hasMapsSearchHomeResult; 
@property (nonatomic,retain) GEOPDMapsSearchHomeResult * mapsSearchHomeResult; 
@property (nonatomic,readonly) BOOL hasCollectionSuggestionResult; 
@property (nonatomic,retain) GEOPDCollectionSuggestionResult * collectionSuggestionResult; 
@property (nonatomic,readonly) BOOL hasPublisherViewResult; 
@property (nonatomic,retain) GEOPDPublisherViewResult * publisherViewResult; 
@property (nonatomic,readonly) BOOL hasAllCollectionsViewResult; 
@property (nonatomic,retain) GEOPDAllCollectionsViewResult * allCollectionsViewResult; 
@property (nonatomic,readonly) BOOL hasAirportEntityPlaceLookupResult; 
@property (nonatomic,retain) GEOPDAirportEntityPlaceLookupResult * airportEntityPlaceLookupResult; 
@property (nonatomic,readonly) BOOL hasTerritoryLookupResult; 
@property (nonatomic,retain) GEOPDTerritoryLookupResult * territoryLookupResult; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasMapsIdentifierPlaceLookupResult;
-(BOOL)hasSiriSearchResult;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasPublisherViewResult;
-(BOOL)hasTerritoryLookupResult;
-(GEOPDAutocompleteResult *)autocompleteResult;
-(GEOPDBatchCategoryLookupResult *)batchCategoryLookupResult;
-(BOOL)hasBatchSpatialLookupResult;
-(BOOL)hasBrowseCategorySuggestionResult;
-(GEOPDBatchSpatialLookupResult *)batchSpatialLookupResult;
-(BOOL)hasPopularNearbySearchResult;
-(BOOL)hasBatchPopularNearbySearchResult;
-(void)setBatchCategoryLookupResult:(GEOPDBatchCategoryLookupResult *)arg1 ;
-(void)setExternalTransitLookupResult:(GEOPDExternalTransitLookupResult *)arg1 ;
-(BOOL)hasLocationDirectedSearchResult;
-(BOOL)hasCategorySearchResult;
-(BOOL)hasChildPlaceLookupByCategoryResult;
-(BOOL)hasIpGeoLookupResult;
-(void)setAddressObjectGeocodingResult:(GEOPDAddressObjectGeocodingResult *)arg1 ;
-(BOOL)hasPlaceRefinementResult;
-(GEOPDNearbySearchResult *)nearbySearchResult;
-(BOOL)hasAirportEntityPlaceLookupResult;
-(BOOL)hasSearchResult;
-(BOOL)hasVendorSpecificPlaceRefinementResult;
-(GEOPDFeatureIdGeocodingResult *)featureIdGeocodingResult;
-(GEOPDSearchResult *)searchResult;
-(void)setPopularNearbySearchResult:(GEOPDPopularNearbySearchResult *)arg1 ;
-(GEOPDSearchZeroKeywordCategorySuggestionResult *)searchZeroKeywordCategorySuggestionResult;
-(GEOPDTerritoryLookupResult *)territoryLookupResult;
-(BOOL)hasTransitScheduleLookupResult;
-(GEOPDReverseGeocodingResult *)reverseGeocodingResult;
-(void)setBatchPopularNearbySearchResult:(GEOPDBatchPopularNearbySearchResult *)arg1 ;
-(void)setCanonicalSearchResult:(GEOPDCanonicalLocationSearchResult *)arg1 ;
-(void)setBatchSpatialLookupResult:(GEOPDBatchSpatialLookupResult *)arg1 ;
-(BOOL)hasWifiFingerprintResult;
-(void)setGroundViewLabelResult:(GEOPDGroundViewLabelResult *)arg1 ;
-(void)setBrandLookupResult:(GEOPDBrandLookupResult *)arg1 ;
-(BOOL)hasMapsSearchHomeResult;
-(void)setChildPlaceLookupByCategoryResult:(GEOPDChildPlaceLookupByCategoryResult *)arg1 ;
-(void)setPlaceLookupResult:(GEOPDPlaceLookupResult *)arg1 ;
-(BOOL)hasGeocodingResult;
-(GEOPDCategorySearchResult *)categorySearchResult;
-(void)setBatchMerchantLookupBrandResult:(GEOPDBatchMerchantLookupBrandResult *)arg1 ;
-(id)init;
-(GEOPDPlaceGlobalCommonResult *)placeGlobalCommonResult;
-(GEOPDMerchantLookupResult *)merchantLookupResult;
-(void)setMapsSearchHomeResult:(GEOPDMapsSearchHomeResult *)arg1 ;
-(GEOPDPlaceLookupResult *)placeLookupResult;
-(void)setWifiFingerprintResult:(GEOPDWifiFingerprintResult *)arg1 ;
-(GEOPDBatchReverseGeocodingResult *)batchReverseGeocodingResult;
-(BOOL)hasGroundViewLabelResult;
-(void)setSearchZeroKeywordWithSearchResultsSuggestionResult:(GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult *)arg1 ;
-(id)jsonRepresentation;
-(GEOPDWifiFingerprintResult *)wifiFingerprintResult;
-(void)setSiriSearchResult:(GEOPDSiriSearchResult *)arg1 ;
-(BOOL)hasFeatureIdGeocodingResult;
-(BOOL)hasAutocompleteResult;
-(void)setVendorSpecificPlaceRefinementResult:(GEOPDVendorSpecificPlaceRefinementResult *)arg1 ;
-(GEOPDLocationDirectedSearchResult *)locationDirectedSearchResult;
-(void)setNearbySearchResult:(GEOPDNearbySearchResult *)arg1 ;
-(void)setIpGeoLookupResult:(GEOPDIpGeoLookupResult *)arg1 ;
-(BOOL)hasAddressObjectGeocodingResult;
-(unsigned long long)hash;
-(void)setSearchResult:(GEOPDSearchResult *)arg1 ;
-(BOOL)hasPlaceLookupResult;
-(GEOPDPlaceCollectionLookupResult *)placeCollectionLookupResult;
-(void)setBrowseCategorySuggestionResult:(GEOPDSearchBrowseCategorySuggestionResult *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setCategorySearchResult:(GEOPDCategorySearchResult *)arg1 ;
-(GEOPDPlaceRefinementResult *)placeRefinementResult;
-(void)setSearchZeroKeywordCategorySuggestionResult:(GEOPDSearchZeroKeywordCategorySuggestionResult *)arg1 ;
-(void)setTerritoryLookupResult:(GEOPDTerritoryLookupResult *)arg1 ;
-(GEOPDVendorSpecificPlaceRefinementResult *)vendorSpecificPlaceRefinementResult;
-(id)dictionaryRepresentation;
-(GEOPDGeocodingResult *)geocodingResult;
-(BOOL)hasCanonicalSearchResult;
-(BOOL)hasPlaceGlobalCommonResult;
-(GEOPDMapsSearchHomeResult *)mapsSearchHomeResult;
-(BOOL)readFrom:(id)arg1 ;
-(void)setFeatureIdGeocodingResult:(GEOPDFeatureIdGeocodingResult *)arg1 ;
-(void)setMapsIdentifierPlaceLookupResult:(GEOPDMapsIdentifierPlaceLookupResult *)arg1 ;
-(void)setReverseGeocodingResult:(GEOPDReverseGeocodingResult *)arg1 ;
-(void)clearSensitiveFields;
-(id)description;
-(GEOPDAirportEntityPlaceLookupResult *)airportEntityPlaceLookupResult;
-(GEOPDAllCollectionsViewResult *)allCollectionsViewResult;
-(GEOPDBatchMerchantLookupBrandResult *)batchMerchantLookupBrandResult;
-(GEOPDBrandLookupResult *)brandLookupResult;
-(GEOPDChildPlaceLookupByCategoryResult *)childPlaceLookupByCategoryResult;
-(BOOL)hasExternalTransitLookupResult;
-(GEOPDIpGeoLookupResult *)ipGeoLookupResult;
-(GEOPDPopularNearbySearchResult *)popularNearbySearchResult;
-(GEOPDPublisherViewResult *)publisherViewResult;
-(BOOL)isEqual:(id)arg1 ;
-(void)setGeocodingResult:(GEOPDGeocodingResult *)arg1 ;
-(void)setPublisherViewResult:(GEOPDPublisherViewResult *)arg1 ;
-(GEOPDSiriSearchResult *)siriSearchResult;
-(void)copyTo:(id)arg1 ;
-(GEOPDBatchPopularNearbySearchResult *)batchPopularNearbySearchResult;
-(BOOL)hasBatchCategoryLookupResult;
-(BOOL)hasPlaceCollectionLookupResult;
-(GEOPDMapsIdentifierPlaceLookupResult *)mapsIdentifierPlaceLookupResult;
-(void)setAllCollectionsViewResult:(GEOPDAllCollectionsViewResult *)arg1 ;
-(void)setCollectionSuggestionResult:(GEOPDCollectionSuggestionResult *)arg1 ;
-(void)setLocationDirectedSearchResult:(GEOPDLocationDirectedSearchResult *)arg1 ;
-(void)setMerchantLookupResult:(GEOPDMerchantLookupResult *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOPDAddressObjectGeocodingResult *)addressObjectGeocodingResult;
-(id)initWithData:(id)arg1 ;
-(GEOPDCanonicalLocationSearchResult *)canonicalSearchResult;
-(GEOPDCollectionSuggestionResult *)collectionSuggestionResult;
-(GEOPDExternalTransitLookupResult *)externalTransitLookupResult;
-(BOOL)hasBatchReverseGeocodingResult;
-(BOOL)hasCollectionSuggestionResult;
-(BOOL)hasNearbySearchResult;
-(GEOPDGroundViewLabelResult *)groundViewLabelResult;
-(BOOL)hasSearchZeroKeywordCategorySuggestionResult;
-(void)setBatchReverseGeocodingResult:(GEOPDBatchReverseGeocodingResult *)arg1 ;
-(void)setPlaceCollectionLookupResult:(GEOPDPlaceCollectionLookupResult *)arg1 ;
-(void)setPlaceRefinementResult:(GEOPDPlaceRefinementResult *)arg1 ;
-(GEOPDTransitScheduleLookupResult *)transitScheduleLookupResult;
-(void)writeTo:(id)arg1 ;
-(GEOPDSearchBrowseCategorySuggestionResult *)browseCategorySuggestionResult;
-(BOOL)hasAllCollectionsViewResult;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasBrandLookupResult;
-(void)setAutocompleteResult:(GEOPDAutocompleteResult *)arg1 ;
-(GEOPDSearchFieldPlaceholderResult *)searchFieldPlaceholderResult;
-(void)setPlaceGlobalCommonResult:(GEOPDPlaceGlobalCommonResult *)arg1 ;
-(void)setTransitScheduleLookupResult:(GEOPDTransitScheduleLookupResult *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasMerchantLookupResult;
-(BOOL)hasBatchMerchantLookupBrandResult;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasReverseGeocodingResult;
-(BOOL)hasSearchFieldPlaceholderResult;
-(BOOL)hasSearchZeroKeywordWithSearchResultsSuggestionResult;
-(GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult *)searchZeroKeywordWithSearchResultsSuggestionResult;
-(void)setAirportEntityPlaceLookupResult:(GEOPDAirportEntityPlaceLookupResult *)arg1 ;
-(void)setSearchFieldPlaceholderResult:(GEOPDSearchFieldPlaceholderResult *)arg1 ;
@end

