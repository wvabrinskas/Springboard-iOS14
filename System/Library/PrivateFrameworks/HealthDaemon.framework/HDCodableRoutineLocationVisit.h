/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDCodableRoutineLocationVisit : PBCodable <NSCopying> {

	double _entryTime;
	double _exitTime;
	SCD_Struct_HD11 _has;

}

@property (assign,nonatomic) BOOL hasEntryTime; 
@property (assign,nonatomic) double entryTime;               //@synthesize entryTime=_entryTime - In the implementation block
@property (assign,nonatomic) BOOL hasExitTime; 
@property (assign,nonatomic) double exitTime;                //@synthesize exitTime=_exitTime - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(double)exitTime;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)entryTime;
-(void)setEntryTime:(double)arg1 ;
-(void)setExitTime:(double)arg1 ;
-(void)setHasEntryTime:(BOOL)arg1 ;
-(BOOL)hasEntryTime;
-(void)setHasExitTime:(BOOL)arg1 ;
-(BOOL)hasExitTime;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
