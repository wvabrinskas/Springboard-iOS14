/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WiFiAnalyticsAWDWiFiNWActivityPowerPStats : PBCodable <NSCopying> {

	unsigned long long _kRadioPhyReportRxDur;
	unsigned long long _kRadioPhyReportTxDur;
	SCD_Struct_Wi7 _has;

}

@property (assign,nonatomic) BOOL hasKRadioPhyReportTxDur; 
@property (assign,nonatomic) unsigned long long kRadioPhyReportTxDur;              //@synthesize kRadioPhyReportTxDur=_kRadioPhyReportTxDur - In the implementation block
@property (assign,nonatomic) BOOL hasKRadioPhyReportRxDur; 
@property (assign,nonatomic) unsigned long long kRadioPhyReportRxDur;              //@synthesize kRadioPhyReportRxDur=_kRadioPhyReportRxDur - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKRadioPhyReportTxDur:(unsigned long long)arg1 ;
-(void)setHasKRadioPhyReportTxDur:(BOOL)arg1 ;
-(BOOL)hasKRadioPhyReportTxDur;
-(void)setKRadioPhyReportRxDur:(unsigned long long)arg1 ;
-(void)setHasKRadioPhyReportRxDur:(BOOL)arg1 ;
-(BOOL)hasKRadioPhyReportRxDur;
-(unsigned long long)kRadioPhyReportTxDur;
-(unsigned long long)kRadioPhyReportRxDur;
@end

