/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOFormattedString, NSMutableArray;

@interface GEODrivingWalkingSpokenInstruction : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOFormattedString* _continueStage;
	NSMutableArray* _executionStages;
	GEOFormattedString* _initialStage;
	GEOFormattedString* _preparationStage;
	GEOFormattedString* _proceedStage;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _shortChainedInstructionIndex;
	struct {
		unsigned has_shortChainedInstructionIndex : 1;
		unsigned read_unknownFields : 1;
		unsigned read_continueStage : 1;
		unsigned read_executionStages : 1;
		unsigned read_initialStage : 1;
		unsigned read_preparationStage : 1;
		unsigned read_proceedStage : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasProceedStage; 
@property (nonatomic,retain) GEOFormattedString * proceedStage; 
@property (nonatomic,readonly) BOOL hasContinueStage; 
@property (nonatomic,retain) GEOFormattedString * continueStage; 
@property (nonatomic,readonly) BOOL hasInitialStage; 
@property (nonatomic,retain) GEOFormattedString * initialStage; 
@property (nonatomic,readonly) BOOL hasPreparationStage; 
@property (nonatomic,retain) GEOFormattedString * preparationStage; 
@property (nonatomic,retain) NSMutableArray * executionStages; 
@property (assign,nonatomic) BOOL hasShortChainedInstructionIndex; 
@property (assign,nonatomic) unsigned shortChainedInstructionIndex; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)executionStageType;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOFormattedString *)proceedStage;
-(GEOFormattedString *)initialStage;
-(GEOFormattedString *)continueStage;
-(GEOFormattedString *)preparationStage;
-(void)setProceedStage:(GEOFormattedString *)arg1 ;
-(void)setContinueStage:(GEOFormattedString *)arg1 ;
-(void)setInitialStage:(GEOFormattedString *)arg1 ;
-(void)setPreparationStage:(GEOFormattedString *)arg1 ;
-(void)addExecutionStage:(id)arg1 ;
-(void)setShortChainedInstructionIndex:(unsigned)arg1 ;
-(unsigned long long)executionStagesCount;
-(void)clearExecutionStages;
-(id)executionStageAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasProceedStage;
-(BOOL)hasContinueStage;
-(BOOL)hasInitialStage;
-(BOOL)hasPreparationStage;
-(NSMutableArray *)executionStages;
-(void)setExecutionStages:(NSMutableArray *)arg1 ;
-(unsigned)shortChainedInstructionIndex;
-(void)setHasShortChainedInstructionIndex:(BOOL)arg1 ;
-(BOOL)hasShortChainedInstructionIndex;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
