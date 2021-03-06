/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineLMPRequestedInstance : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned long long _timestamp;
	int _confidence;
	NSString* _eventId;
	int _occurrences;
	int _reason;
	BOOL _suggested;
	SCD_Struct_AW2 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasEventId; 
@property (nonatomic,retain) NSString * eventId;                        //@synthesize eventId=_eventId - In the implementation block
@property (assign,nonatomic) BOOL hasSuggested; 
@property (assign,nonatomic) BOOL suggested;                            //@synthesize suggested=_suggested - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) int confidence;                            //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) BOOL hasOccurrences; 
@property (assign,nonatomic) int occurrences;                           //@synthesize occurrences=_occurrences - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                                //@synthesize reason=_reason - In the implementation block
-(long long)metricId;
-(BOOL)valid:(id*)arg1 ;
-(NSString *)description;
-(id)_init;
-(void)mergeFrom:(id)arg1 ;
-(int)reason;
-(BOOL)hasReason;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(BOOL)hasTimestamp;
-(NSString *)eventId;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)setOccurrences:(int)arg1 ;
-(void)setReason:(int)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasReason:(BOOL)arg1 ;
-(int)confidence;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)timestamp;
-(BOOL)suggested;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSuggested:(BOOL)arg1 ;
-(BOOL)hasSuggested;
-(void)setHasSuggested:(BOOL)arg1 ;
-(void)setConfidence:(int)arg1 ;
-(void)setEventId:(NSString *)arg1 ;
-(BOOL)hasEventId;
-(int)occurrences;
-(void)dealloc;
-(void)setHasOccurrences:(BOOL)arg1 ;
-(BOOL)hasOccurrences;
@end

