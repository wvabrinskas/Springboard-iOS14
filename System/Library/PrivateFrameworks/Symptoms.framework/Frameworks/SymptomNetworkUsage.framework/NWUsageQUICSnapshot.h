/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SymptomNetworkUsage/SymptomNetworkUsage-Structs.h>
#import <SymptomNetworkUsage/NWUsageUDPSnapshot.h>

@class NSString, NSDate, NSUUID, NSData;

@interface NWUsageQUICSnapshot : NWUsageUDPSnapshot {

	NSString* _processName;
	NSDate* _startTimestamp;
	NSDate* _snapshotTimestamp;
	double _startTimeInterval;
	double _snapshotTimeInterval;
	NSUUID* _uuid;
	NSUUID* _euuid;
	NSUUID* _vuuid;
	NSUUID* _flowuuid;
	NSData* _localAddress;
	NSData* _remoteAddress;
	nstat_tcp_descriptor* _descriptor;
	unsigned _rxDuplicateBytes;
	unsigned _rxOutOfOrderBytes;
	unsigned _txRetransmittedBytes;

}

@property (nonatomic,readonly) double rttMinimum; 
@property (nonatomic,readonly) double rttAverage; 
@property (nonatomic,readonly) double rttVariation; 
@property (nonatomic,readonly) unsigned rxDuplicateBytes;                  //@synthesize rxDuplicateBytes=_rxDuplicateBytes - In the implementation block
@property (nonatomic,readonly) unsigned rxOutOfOrderBytes;                 //@synthesize rxOutOfOrderBytes=_rxOutOfOrderBytes - In the implementation block
@property (nonatomic,readonly) unsigned txRetransmittedBytes;              //@synthesize txRetransmittedBytes=_txRetransmittedBytes - In the implementation block
-(double)rttAverage;
-(double)rttVariation;
-(double)rttMinimum;
-(id)remoteAddress;
-(unsigned)trafficClass;
-(BOOL)flowUsesChannels;
-(BOOL)interfaceCellularViaFallback;
-(unsigned)receiveBufferSize;
-(unsigned)rxOutOfOrderBytes;
-(unsigned long long)uniqueProcessID;
-(unsigned long long)eupid;
-(unsigned long long)networkActivityMapStartTime;
-(unsigned long long)networkActivityMapPart1;
-(unsigned)interfaceIndex;
-(unsigned)rxDuplicateBytes;
-(id)vuuid;
-(id)localAddress;
-(BOOL)interfaceAWDL;
-(BOOL)interfaceExpensive;
-(BOOL)interfaceCellular;
-(id)euuid;
-(BOOL)interfaceLoopback;
-(unsigned)receiveBufferUsed;
-(BOOL)interfaceUnknown;
-(unsigned long long)networkActivityMapPart2;
-(unsigned)txRetransmittedBytes;
-(int)epid;
-(BOOL)interfaceWired;
-(id)flowStartTimestamp;
-(unsigned long long)flowStartContinuousTime;
-(double)flowDuration;
-(BOOL)failedSkywalkAction;
-(BOOL)interfaceWiFi;
-(id)processName;
-(int)processID;
-(double)flowSnapshotTimeIntervalSinceReferenceDate;
-(id)flowSnapshotTimestamp;
-(id)uuid;
-(void)setFlowSnapshotTimeIntervalSinceReferenceDate:(double)arg1 ;
-(id)initWithUpdate:(const nstat_msg_src_update_convenient*)arg1 startTime:(double)arg2 flowFlags:(unsigned)arg3 previously:(update_subset_for_deltas*)arg4 ;
-(BOOL)failedRouteValuesLookup;
-(double)flowStartTimeIntervalSinceReferenceDate;
-(BOOL)failedFlowswitchValuesLookup;
-(double)flowStartTimeIntervalSince1970;
-(double)flowSnapshotTimeIntervalSince1970;
-(id)descriptorDescription;
-(id)provider;
-(id)flowuuid;
@end

