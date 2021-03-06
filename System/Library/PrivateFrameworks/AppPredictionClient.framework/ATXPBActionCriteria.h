/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ATXPBActionCriteria : PBCodable <NSCopying> {

	double _endDate;
	double _startDate;
	NSData* _predicate;
	BOOL _isLockScreenEligible;
	SCD_Struct_AT3 _has;

}

@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) double startDate;                          //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) double endDate;                            //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL hasIsLockScreenEligible; 
@property (assign,nonatomic) BOOL isLockScreenEligible;                 //@synthesize isLockScreenEligible=_isLockScreenEligible - In the implementation block
@property (nonatomic,readonly) BOOL hasPredicate; 
@property (nonatomic,retain) NSData * predicate;                        //@synthesize predicate=_predicate - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(double)endDate;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(void)setEndDate:(double)arg1 ;
-(double)startDate;
-(NSData *)predicate;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPredicate:(NSData *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasStartDate:(BOOL)arg1 ;
-(void)setHasEndDate:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasEndDate;
-(void)setStartDate:(double)arg1 ;
-(BOOL)isLockScreenEligible;
-(void)setIsLockScreenEligible:(BOOL)arg1 ;
-(void)setHasIsLockScreenEligible:(BOOL)arg1 ;
-(BOOL)hasIsLockScreenEligible;
-(BOOL)hasPredicate;
@end

