/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgEventGridDuration : PBCodable <NSCopying> {

	NSMutableArray* _endStateErrorReasons;
	int _displayType;
	unsigned _durationMs;
	int _endState;
	int _previousState;
	struct {
		unsigned has_displayType : 1;
		unsigned has_durationMs : 1;
		unsigned has_endState : 1;
		unsigned has_previousState : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDurationMs; 
@property (assign,nonatomic) unsigned durationMs; 
@property (assign,nonatomic) BOOL hasEndState; 
@property (assign,nonatomic) int endState; 
@property (nonatomic,retain) NSMutableArray * endStateErrorReasons; 
@property (assign,nonatomic) BOOL hasPreviousState; 
@property (assign,nonatomic) int previousState; 
@property (assign,nonatomic) BOOL hasDisplayType; 
@property (assign,nonatomic) int displayType; 
+(Class)endStateErrorReasonType;
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)previousState;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(void)setDurationMs:(unsigned)arg1 ;
-(NSMutableArray *)endStateErrorReasons;
-(id)initWithDictionary:(id)arg1 ;
-(void)setEndStateErrorReasons:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(int)endState;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPreviousState:(int)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasEndState;
-(void)setHasEndState:(BOOL)arg1 ;
-(id)endStateAsString:(int)arg1 ;
-(int)StringAsEndState:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addEndStateErrorReason:(id)arg1 ;
-(unsigned long long)endStateErrorReasonsCount;
-(void)clearEndStateErrorReasons;
-(unsigned)durationMs;
-(void)setEndState:(int)arg1 ;
-(id)endStateErrorReasonAtIndex:(unsigned long long)arg1 ;
-(void)setHasDurationMs:(BOOL)arg1 ;
-(BOOL)hasDurationMs;
-(void)setHasPreviousState:(BOOL)arg1 ;
-(BOOL)hasPreviousState;
-(id)previousStateAsString:(int)arg1 ;
-(int)StringAsPreviousState:(id)arg1 ;
-(void)setHasDisplayType:(BOOL)arg1 ;
-(BOOL)hasDisplayType;
-(id)displayTypeAsString:(int)arg1 ;
-(int)StringAsDisplayType:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDisplayType:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(int)displayType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
