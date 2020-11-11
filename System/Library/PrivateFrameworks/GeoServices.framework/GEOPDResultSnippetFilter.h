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

@interface GEOPDResultSnippetFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _supportedChildActions;
	int _maxChildItems;
	int _maxChildPlaces;
	BOOL _supportChildItems;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasMaxChildPlaces; 
@property (assign,nonatomic) int maxChildPlaces; 
@property (assign,nonatomic) BOOL hasSupportChildItems; 
@property (assign,nonatomic) BOOL supportChildItems; 
@property (assign,nonatomic) BOOL hasMaxChildItems; 
@property (assign,nonatomic) int maxChildItems; 
@property (nonatomic,readonly) unsigned long long supportedChildActionsCount; 
@property (nonatomic,readonly) int* supportedChildActions; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasMaxChildPlaces:(BOOL)arg1 ;
-(int)maxChildItems;
-(id)supportedChildActionsAsString:(int)arg1 ;
-(BOOL)hasMaxChildItems;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(BOOL)hasSupportChildItems;
-(void)setHasSupportChildItems:(BOOL)arg1 ;
-(void)addSupportedChildAction:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasMaxChildItems:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)supportedChildActionsCount;
-(BOOL)supportChildItems;
-(void)setMaxChildPlaces:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(int)maxChildPlaces;
-(void)clearSupportedChildActions;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(int*)supportedChildActions;
-(void)writeTo:(id)arg1 ;
-(void)setMaxChildItems:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(int)StringAsSupportedChildActions:(id)arg1 ;
-(void)setSupportedChildActions:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setSupportChildItems:(BOOL)arg1 ;
-(BOOL)hasMaxChildPlaces;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)dealloc;
-(int)supportedChildActionAtIndex:(unsigned long long)arg1 ;
@end
