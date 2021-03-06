/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SCKZoneStore.h>

@class NSDate, CKServerChangeToken, NSArray;

@interface SCKZoneMemoryStore : NSObject <SCKZoneStore> {

	NSDate* _lastSyncDate;
	NSDate* _lastDirtyDate;
	CKServerChangeToken* _serverChangeToken;
	NSArray* _serverRecords;
	NSArray* _pendingCommands;

}

@property (nonatomic,copy) NSDate * lastSyncDate;                                //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (nonatomic,copy) NSDate * lastDirtyDate;                               //@synthesize lastDirtyDate=_lastDirtyDate - In the implementation block
@property (nonatomic,copy) CKServerChangeToken * serverChangeToken;              //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (nonatomic,copy) NSArray * serverRecords;                              //@synthesize serverRecords=_serverRecords - In the implementation block
@property (nonatomic,copy) NSArray * pendingCommands;                            //@synthesize pendingCommands=_pendingCommands - In the implementation block
-(NSArray *)serverRecords;
-(id)init;
-(NSDate *)lastSyncDate;
-(NSArray *)pendingCommands;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(void)clearPendingCommandsUpToCount:(unsigned long long)arg1 ;
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerRecords:(NSArray *)arg1 ;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)applyServerRecordsDiff:(id)arg1 ;
-(void)setLastDirtyDate:(NSDate *)arg1 ;
-(void)addPendingCommands:(id)arg1 ;
-(NSDate *)lastDirtyDate;
-(void)setPendingCommands:(NSArray *)arg1 ;
@end

