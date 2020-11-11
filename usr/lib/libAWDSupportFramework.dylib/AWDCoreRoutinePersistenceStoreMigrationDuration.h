/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutinePersistenceStoreMigrationDuration : PBCodable <NSCopying> {

	double _migrationTimeInterval;
	unsigned long long _timestamp;
	int _byteSize;
	int _deviceClass;
	int _nextModelVersion;
	int _previousModelVersion;
	int _storeType;
	BOOL _didVacuum;
	SCD_Struct_AW12 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStoreType; 
@property (assign,nonatomic) int storeType;                              //@synthesize storeType=_storeType - In the implementation block
@property (assign,nonatomic) BOOL hasMigrationTimeInterval; 
@property (assign,nonatomic) double migrationTimeInterval;               //@synthesize migrationTimeInterval=_migrationTimeInterval - In the implementation block
@property (assign,nonatomic) BOOL hasDidVacuum; 
@property (assign,nonatomic) BOOL didVacuum;                             //@synthesize didVacuum=_didVacuum - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceClass; 
@property (assign,nonatomic) int deviceClass;                            //@synthesize deviceClass=_deviceClass - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousModelVersion; 
@property (assign,nonatomic) int previousModelVersion;                   //@synthesize previousModelVersion=_previousModelVersion - In the implementation block
@property (assign,nonatomic) BOOL hasNextModelVersion; 
@property (assign,nonatomic) int nextModelVersion;                       //@synthesize nextModelVersion=_nextModelVersion - In the implementation block
@property (assign,nonatomic) BOOL hasByteSize; 
@property (assign,nonatomic) int byteSize;                               //@synthesize byteSize=_byteSize - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(int)deviceClass;
-(void)setHasDeviceClass:(BOOL)arg1 ;
-(void)setDeviceClass:(int)arg1 ;
-(int)storeType;
-(BOOL)hasTimestamp;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasDeviceClass;
-(int)byteSize;
-(void)setStoreType:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setByteSize:(int)arg1 ;
-(void)setHasStoreType:(BOOL)arg1 ;
-(BOOL)hasStoreType;
-(void)setMigrationTimeInterval:(double)arg1 ;
-(void)setHasMigrationTimeInterval:(BOOL)arg1 ;
-(BOOL)hasMigrationTimeInterval;
-(void)setDidVacuum:(BOOL)arg1 ;
-(void)setHasDidVacuum:(BOOL)arg1 ;
-(BOOL)hasDidVacuum;
-(void)setPreviousModelVersion:(int)arg1 ;
-(void)setHasPreviousModelVersion:(BOOL)arg1 ;
-(BOOL)hasPreviousModelVersion;
-(void)setNextModelVersion:(int)arg1 ;
-(void)setHasNextModelVersion:(BOOL)arg1 ;
-(BOOL)hasNextModelVersion;
-(void)setHasByteSize:(BOOL)arg1 ;
-(BOOL)hasByteSize;
-(double)migrationTimeInterval;
-(BOOL)didVacuum;
-(int)previousModelVersion;
-(int)nextModelVersion;
@end
