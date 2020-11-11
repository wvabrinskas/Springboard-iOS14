/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWSSnapshot.h>

@class NSData;

@interface NWSRouteSnapshot : NWSSnapshot {

	NSData* _destination;
	NSData* _mask;
	NSData* _gateway;
	nstat_route_descriptor _descriptor;

}

@property (readonly) unsigned long long routeID; 
@property (readonly) unsigned long long parentID; 
@property (readonly) unsigned long long gatewayID; 
@property (readonly) NSData * destination; 
@property (readonly) NSData * mask; 
@property (readonly) NSData * gateway; 
@property (readonly) unsigned interfaceIndex; 
@property (readonly) unsigned flags; 
@property (readonly) double rttMinimum; 
@property (readonly) double rttAverage; 
@property (readonly) double rttVariation; 
@property (readonly) unsigned rxDuplicateBytes; 
@property (readonly) unsigned rxOutOfOrderBytes; 
@property (readonly) unsigned txRetransmittedBytes; 
@property (readonly) unsigned connectAttempts; 
@property (readonly) unsigned connectSuccesses; 
-(unsigned long long)parentID;
-(double)rttAverage;
-(double)rttVariation;
-(double)rttMinimum;
-(unsigned)rxOutOfOrderBytes;
-(NSData *)mask;
-(unsigned long long)routeID;
-(unsigned)connectSuccesses;
-(unsigned)connectAttempts;
-(unsigned)interfaceIndex;
-(unsigned)rxDuplicateBytes;
-(void)_initWithDescriptor:(nstat_route_descriptor*)arg1 ;
-(unsigned)txRetransmittedBytes;
-(unsigned)flags;
-(NSData *)destination;
-(NSData *)gateway;
-(id)description;
-(id)traditionalDictionary;
-(unsigned long long)gatewayID;
-(id)initWithCounts:(const nstat_counts*)arg1 routeDescriptor:(nstat_route_descriptor*)arg2 sourceIdent:(unsigned long long)arg3 seqno:(unsigned long long)arg4 ;
@end
