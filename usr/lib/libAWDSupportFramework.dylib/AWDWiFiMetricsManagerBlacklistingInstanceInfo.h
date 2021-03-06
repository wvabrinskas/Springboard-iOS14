/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsManagerBlacklistingInstanceInfo : PBCodable <NSCopying> {

	unsigned long long _blacklistingTimestamp;
	unsigned _blacklistingReason;
	unsigned _reservedInfo;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasBlacklistingReason; 
@property (assign,nonatomic) unsigned blacklistingReason;                           //@synthesize blacklistingReason=_blacklistingReason - In the implementation block
@property (assign,nonatomic) BOOL hasBlacklistingTimestamp; 
@property (assign,nonatomic) unsigned long long blacklistingTimestamp;              //@synthesize blacklistingTimestamp=_blacklistingTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasReservedInfo; 
@property (assign,nonatomic) unsigned reservedInfo;                                 //@synthesize reservedInfo=_reservedInfo - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBlacklistingReason:(unsigned)arg1 ;
-(void)setHasBlacklistingReason:(BOOL)arg1 ;
-(BOOL)hasBlacklistingReason;
-(void)setBlacklistingTimestamp:(unsigned long long)arg1 ;
-(void)setHasBlacklistingTimestamp:(BOOL)arg1 ;
-(BOOL)hasBlacklistingTimestamp;
-(void)setReservedInfo:(unsigned)arg1 ;
-(void)setHasReservedInfo:(BOOL)arg1 ;
-(BOOL)hasReservedInfo;
-(unsigned)blacklistingReason;
-(unsigned long long)blacklistingTimestamp;
-(unsigned)reservedInfo;
@end

