/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableMedicalDate;

@interface HDCodableMedicalDateInterval : PBCodable <NSCopying> {

	HDCodableMedicalDate* _endDate;
	HDCodableMedicalDate* _startDate;

}

@property (nonatomic,readonly) BOOL hasStartDate; 
@property (nonatomic,retain) HDCodableMedicalDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) BOOL hasEndDate; 
@property (nonatomic,retain) HDCodableMedicalDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(HDCodableMedicalDate *)endDate;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(void)setEndDate:(HDCodableMedicalDate *)arg1 ;
-(HDCodableMedicalDate *)startDate;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasStartDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasEndDate;
-(void)setStartDate:(HDCodableMedicalDate *)arg1 ;
@end
