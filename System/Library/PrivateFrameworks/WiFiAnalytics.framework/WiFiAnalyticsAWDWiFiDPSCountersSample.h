/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WiFiAnalyticsAWDWiFiNWActivityControllerStats, WiFiAnalyticsAWDWiFiNWActivityPeerStats;

@interface WiFiAnalyticsAWDWiFiDPSCountersSample : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	WiFiAnalyticsAWDWiFiNWActivityControllerStats* _controllerStats;
	WiFiAnalyticsAWDWiFiNWActivityPeerStats* _peerStats;
	SCD_Struct_Wi1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasControllerStats; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiNWActivityControllerStats * controllerStats;              //@synthesize controllerStats=_controllerStats - In the implementation block
@property (nonatomic,readonly) BOOL hasPeerStats; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiNWActivityPeerStats * peerStats;                          //@synthesize peerStats=_peerStats - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setControllerStats:(WiFiAnalyticsAWDWiFiNWActivityControllerStats *)arg1 ;
-(BOOL)hasControllerStats;
-(WiFiAnalyticsAWDWiFiNWActivityPeerStats *)peerStats;
-(void)setPeerStats:(WiFiAnalyticsAWDWiFiNWActivityPeerStats *)arg1 ;
-(WiFiAnalyticsAWDWiFiNWActivityControllerStats *)controllerStats;
-(BOOL)hasPeerStats;
@end

