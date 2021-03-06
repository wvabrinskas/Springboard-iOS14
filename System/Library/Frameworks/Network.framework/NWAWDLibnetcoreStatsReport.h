/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWAWDLibnetcoreMbufStatsReport, NWAWDLibnetcoreMPTCPStatsReport, NWAWDLibnetcoreNetworkdStatsReport, NWAWDNWAPIUsage, NSMutableArray, NWAWDLibnetcoreTCPECNStatsReport, NWAWDLibnetcoreTCPStatsReport, NWAWDLibnetcoreTCPTFOStatsReport;

@interface NWAWDLibnetcoreStatsReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NWAWDLibnetcoreMbufStatsReport* _mbufStatisticsReport;
	NWAWDLibnetcoreMPTCPStatsReport* _mptcpStatisticsReport;
	NWAWDLibnetcoreNetworkdStatsReport* _networkdStatisticsReport;
	NWAWDNWAPIUsage* _nwAPIUsageReport;
	unsigned _reportReason;
	NSMutableArray* _tcpECNInterfaceReports;
	NWAWDLibnetcoreTCPECNStatsReport* _tcpECNStatisticsReport;
	NWAWDLibnetcoreTCPStatsReport* _tcpStatisticsReport;
	NWAWDLibnetcoreTCPTFOStatsReport* _tcpTFOStatisticsReport;
	SCD_Struct_NW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasReportReason; 
@property (assign,nonatomic) unsigned reportReason;                                                      //@synthesize reportReason=_reportReason - In the implementation block
@property (nonatomic,readonly) BOOL hasMbufStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreMbufStatsReport * mbufStatisticsReport;                      //@synthesize mbufStatisticsReport=_mbufStatisticsReport - In the implementation block
@property (nonatomic,readonly) BOOL hasTcpStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreTCPStatsReport * tcpStatisticsReport;                        //@synthesize tcpStatisticsReport=_tcpStatisticsReport - In the implementation block
@property (nonatomic,readonly) BOOL hasTcpECNStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreTCPECNStatsReport * tcpECNStatisticsReport;                  //@synthesize tcpECNStatisticsReport=_tcpECNStatisticsReport - In the implementation block
@property (nonatomic,readonly) BOOL hasTcpTFOStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreTCPTFOStatsReport * tcpTFOStatisticsReport;                  //@synthesize tcpTFOStatisticsReport=_tcpTFOStatisticsReport - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkdStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreNetworkdStatsReport * networkdStatisticsReport;              //@synthesize networkdStatisticsReport=_networkdStatisticsReport - In the implementation block
@property (nonatomic,retain) NSMutableArray * tcpECNInterfaceReports;                                    //@synthesize tcpECNInterfaceReports=_tcpECNInterfaceReports - In the implementation block
@property (nonatomic,readonly) BOOL hasNwAPIUsageReport; 
@property (nonatomic,retain) NWAWDNWAPIUsage * nwAPIUsageReport;                                         //@synthesize nwAPIUsageReport=_nwAPIUsageReport - In the implementation block
@property (nonatomic,readonly) BOOL hasMptcpStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreMPTCPStatsReport * mptcpStatisticsReport;                    //@synthesize mptcpStatisticsReport=_mptcpStatisticsReport - In the implementation block
+(Class)tcpECNInterfaceReportType;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setHasReportReason:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(id)dictionaryRepresentation;
-(unsigned)reportReason;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasReportReason;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setReportReason:(unsigned)arg1 ;
-(NWAWDNWAPIUsage *)nwAPIUsageReport;
-(BOOL)hasMbufStatisticsReport;
-(BOOL)hasTcpStatisticsReport;
-(BOOL)hasTcpECNStatisticsReport;
-(BOOL)hasTcpTFOStatisticsReport;
-(BOOL)hasNetworkdStatisticsReport;
-(void)clearTcpECNInterfaceReports;
-(void)addTcpECNInterfaceReport:(id)arg1 ;
-(BOOL)hasNwAPIUsageReport;
-(unsigned long long)tcpECNInterfaceReportsCount;
-(id)tcpECNInterfaceReportAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasMptcpStatisticsReport;
-(NWAWDLibnetcoreMbufStatsReport *)mbufStatisticsReport;
-(void)setMbufStatisticsReport:(NWAWDLibnetcoreMbufStatsReport *)arg1 ;
-(NWAWDLibnetcoreTCPStatsReport *)tcpStatisticsReport;
-(void)setTcpStatisticsReport:(NWAWDLibnetcoreTCPStatsReport *)arg1 ;
-(NWAWDLibnetcoreTCPECNStatsReport *)tcpECNStatisticsReport;
-(void)setTcpECNStatisticsReport:(NWAWDLibnetcoreTCPECNStatsReport *)arg1 ;
-(NWAWDLibnetcoreTCPTFOStatsReport *)tcpTFOStatisticsReport;
-(void)setTcpTFOStatisticsReport:(NWAWDLibnetcoreTCPTFOStatsReport *)arg1 ;
-(NWAWDLibnetcoreNetworkdStatsReport *)networkdStatisticsReport;
-(void)setNetworkdStatisticsReport:(NWAWDLibnetcoreNetworkdStatsReport *)arg1 ;
-(NSMutableArray *)tcpECNInterfaceReports;
-(void)setTcpECNInterfaceReports:(NSMutableArray *)arg1 ;
-(void)setNwAPIUsageReport:(NWAWDNWAPIUsage *)arg1 ;
-(NWAWDLibnetcoreMPTCPStatsReport *)mptcpStatisticsReport;
-(void)setMptcpStatisticsReport:(NWAWDLibnetcoreMPTCPStatsReport *)arg1 ;
@end

