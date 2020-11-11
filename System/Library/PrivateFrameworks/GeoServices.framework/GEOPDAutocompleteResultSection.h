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

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOPDAutocompleteResultSection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _entries;
	NSString* _name;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _numVisibleResults;
	int _suggestionType;
	int _type;
	BOOL _enforceServerResultsOrder;
	BOOL _shouldInterleaveClientResults;
	struct {
		unsigned has_numVisibleResults : 1;
		unsigned has_suggestionType : 1;
		unsigned has_type : 1;
		unsigned has_enforceServerResultsOrder : 1;
		unsigned has_shouldInterleaveClientResults : 1;
		unsigned read_unknownFields : 1;
		unsigned read_entries : 1;
		unsigned read_name : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSMutableArray * entries; 
@property (assign,nonatomic) BOOL hasSuggestionType; 
@property (assign,nonatomic) int suggestionType; 
@property (assign,nonatomic) BOOL hasNumVisibleResults; 
@property (assign,nonatomic) int numVisibleResults; 
@property (assign,nonatomic) BOOL hasShouldInterleaveClientResults; 
@property (assign,nonatomic) BOOL shouldInterleaveClientResults; 
@property (assign,nonatomic) BOOL hasEnforceServerResultsOrder; 
@property (assign,nonatomic) BOOL enforceServerResultsOrder; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)entriesType;
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)entries;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasName;
-(unsigned long long)entriesCount;
-(void)clearEntries;
-(void)setSuggestionType:(int)arg1 ;
-(void)setNumVisibleResults:(int)arg1 ;
-(void)setShouldInterleaveClientResults:(BOOL)arg1 ;
-(void)setEnforceServerResultsOrder:(BOOL)arg1 ;
-(id)entriesAtIndex:(unsigned long long)arg1 ;
-(void)setHasSuggestionType:(BOOL)arg1 ;
-(BOOL)hasSuggestionType;
-(id)suggestionTypeAsString:(int)arg1 ;
-(int)StringAsSuggestionType:(id)arg1 ;
-(int)numVisibleResults;
-(void)setHasNumVisibleResults:(BOOL)arg1 ;
-(BOOL)hasNumVisibleResults;
-(id)dictionaryRepresentation;
-(BOOL)shouldInterleaveClientResults;
-(void)setHasShouldInterleaveClientResults:(BOOL)arg1 ;
-(BOOL)hasShouldInterleaveClientResults;
-(BOOL)enforceServerResultsOrder;
-(BOOL)hasEnforceServerResultsOrder;
-(void)setHasEnforceServerResultsOrder:(BOOL)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setEntries:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)name;
-(void)clearSensitiveFields;
-(void)setHasType:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasType;
-(int)type;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(int)suggestionType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addEntries:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end
