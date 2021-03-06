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

@class PBDataReader, NSMutableArray, NSString;

@interface GEOLogMsgEventClientACSuggestions : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _entries;
	long long _overallLatencyInMs;
	NSMutableArray* _queryTokens;
	NSString* _query;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _keypressStatus;
	int _selectedIndex;
	int _selectedSectionIndex;
	int _trigger;
	int _withinSectionSelectedIndex;
	BOOL _isRerankerTriggered;
	BOOL _isRetainedQuery;
	BOOL _shouldDifferentiateClientAndServerResults;
	struct {
		unsigned has_overallLatencyInMs : 1;
		unsigned has_keypressStatus : 1;
		unsigned has_selectedIndex : 1;
		unsigned has_selectedSectionIndex : 1;
		unsigned has_trigger : 1;
		unsigned has_withinSectionSelectedIndex : 1;
		unsigned has_isRerankerTriggered : 1;
		unsigned has_isRetainedQuery : 1;
		unsigned has_shouldDifferentiateClientAndServerResults : 1;
		unsigned read_entries : 1;
		unsigned read_queryTokens : 1;
		unsigned read_query : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) NSString * query; 
@property (nonatomic,retain) NSMutableArray * queryTokens; 
@property (nonatomic,retain) NSMutableArray * entries; 
@property (assign,nonatomic) BOOL hasSelectedIndex; 
@property (assign,nonatomic) int selectedIndex; 
@property (assign,nonatomic) BOOL hasTrigger; 
@property (assign,nonatomic) int trigger; 
@property (assign,nonatomic) BOOL hasKeypressStatus; 
@property (assign,nonatomic) int keypressStatus; 
@property (assign,nonatomic) BOOL hasWithinSectionSelectedIndex; 
@property (assign,nonatomic) int withinSectionSelectedIndex; 
@property (assign,nonatomic) BOOL hasSelectedSectionIndex; 
@property (assign,nonatomic) int selectedSectionIndex; 
@property (assign,nonatomic) BOOL hasIsRetainedQuery; 
@property (assign,nonatomic) BOOL isRetainedQuery; 
@property (assign,nonatomic) BOOL hasIsRerankerTriggered; 
@property (assign,nonatomic) BOOL isRerankerTriggered; 
@property (assign,nonatomic) BOOL hasOverallLatencyInMs; 
@property (assign,nonatomic) long long overallLatencyInMs; 
@property (assign,nonatomic) BOOL hasShouldDifferentiateClientAndServerResults; 
@property (assign,nonatomic) BOOL shouldDifferentiateClientAndServerResults; 
+(Class)entriesType;
+(BOOL)isValid:(id)arg1 ;
+(Class)queryTokensType;
-(void)mergeFrom:(id)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(NSMutableArray *)entries;
-(BOOL)hasQuery;
-(NSString *)query;
-(void)setTrigger:(int)arg1 ;
-(id)init;
-(int)trigger;
-(id)jsonRepresentation;
-(BOOL)hasTrigger;
-(unsigned long long)hash;
-(void)setHasTrigger:(BOOL)arg1 ;
-(id)triggerAsString:(int)arg1 ;
-(int)StringAsTrigger:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setShouldDifferentiateClientAndServerResults:(BOOL)arg1 ;
-(unsigned long long)entriesCount;
-(BOOL)shouldDifferentiateClientAndServerResults;
-(BOOL)hasShouldDifferentiateClientAndServerResults;
-(void)setHasShouldDifferentiateClientAndServerResults:(BOOL)arg1 ;
-(void)clearEntries;
-(id)entriesAtIndex:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)setEntries:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(int)selectedIndex;
-(void)copyTo:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSMutableArray *)queryTokens;
-(int)keypressStatus;
-(void)addQueryTokens:(id)arg1 ;
-(void)setKeypressStatus:(int)arg1 ;
-(void)setWithinSectionSelectedIndex:(int)arg1 ;
-(void)setSelectedSectionIndex:(int)arg1 ;
-(void)setIsRetainedQuery:(BOOL)arg1 ;
-(void)setIsRerankerTriggered:(BOOL)arg1 ;
-(void)setOverallLatencyInMs:(long long)arg1 ;
-(unsigned long long)queryTokensCount;
-(void)clearQueryTokens;
-(id)queryTokensAtIndex:(unsigned long long)arg1 ;
-(void)setQueryTokens:(NSMutableArray *)arg1 ;
-(void)setHasSelectedIndex:(BOOL)arg1 ;
-(BOOL)hasSelectedIndex;
-(void)setHasKeypressStatus:(BOOL)arg1 ;
-(BOOL)hasKeypressStatus;
-(id)keypressStatusAsString:(int)arg1 ;
-(int)StringAsKeypressStatus:(id)arg1 ;
-(int)withinSectionSelectedIndex;
-(BOOL)isRetainedQuery;
-(void)setHasWithinSectionSelectedIndex:(BOOL)arg1 ;
-(BOOL)hasWithinSectionSelectedIndex;
-(int)selectedSectionIndex;
-(void)setHasSelectedSectionIndex:(BOOL)arg1 ;
-(BOOL)hasSelectedSectionIndex;
-(void)setHasIsRetainedQuery:(BOOL)arg1 ;
-(BOOL)hasIsRetainedQuery;
-(BOOL)isRerankerTriggered;
-(void)setHasIsRerankerTriggered:(BOOL)arg1 ;
-(BOOL)hasIsRerankerTriggered;
-(long long)overallLatencyInMs;
-(void)setHasOverallLatencyInMs:(BOOL)arg1 ;
-(BOOL)hasOverallLatencyInMs;
-(void)setSelectedIndex:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addEntries:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end

