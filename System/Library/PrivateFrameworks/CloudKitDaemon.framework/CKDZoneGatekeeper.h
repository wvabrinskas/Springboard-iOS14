/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSMutableArray;

@interface CKDZoneGatekeeper : NSObject {

	NSMutableDictionary* _zoneIDsToGateHolders;
	NSMutableArray* _waiterWrappers;

}

@property (nonatomic,retain) NSMutableDictionary * zoneIDsToGateHolders;              //@synthesize zoneIDsToGateHolders=_zoneIDsToGateHolders - In the implementation block
@property (nonatomic,retain) NSMutableArray * waiterWrappers;                         //@synthesize waiterWrappers=_waiterWrappers - In the implementation block
-(id)init;
-(void)registerWaiter:(id)arg1 forZoneIDs:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)CKStatusReportArray;
-(NSMutableArray *)waiterWrappers;
-(NSMutableDictionary *)zoneIDsToGateHolders;
-(BOOL)hasStatusToReport;
-(void)setWaiterWrappers:(NSMutableArray *)arg1 ;
-(void)relinquishLocksForWaiter:(id)arg1 deferRelinquish:(BOOL)arg2 ;
-(void)setZoneIDsToGateHolders:(NSMutableDictionary *)arg1 ;
@end

