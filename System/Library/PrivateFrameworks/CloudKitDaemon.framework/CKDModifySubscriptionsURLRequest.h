/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecordZoneID, NSArray, NSMutableDictionary;

@interface CKDModifySubscriptionsURLRequest : CKDURLRequest {

	CKRecordZoneID* _zoneID;
	/*^block*/id _subscriptionModifiedBlock;
	NSArray* _subscriptionsToSave;
	NSArray* _subscriptionIDsToDelete;
	NSMutableDictionary* _subscriptionIDByRequestID;

}

@property (nonatomic,retain) NSArray * subscriptionsToSave;                                //@synthesize subscriptionsToSave=_subscriptionsToSave - In the implementation block
@property (nonatomic,retain) NSArray * subscriptionIDsToDelete;                            //@synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionIDByRequestID;              //@synthesize subscriptionIDByRequestID=_subscriptionIDByRequestID - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * zoneID;                                        //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,copy) id subscriptionModifiedBlock;                                   //@synthesize subscriptionModifiedBlock=_subscriptionModifiedBlock - In the implementation block
-(NSArray *)subscriptionsToSave;
-(void)setSubscriptionIDsToDelete:(NSArray *)arg1 ;
-(CKRecordZoneID *)zoneID;
-(void)setSubscriptionsToSave:(NSArray *)arg1 ;
-(id)initWithOperation:(id)arg1 subscriptionsToSave:(id)arg2 subscriptionIDsToDelete:(id)arg3 ;
-(void)setSubscriptionModifiedBlock:(id)arg1 ;
-(NSArray *)subscriptionIDsToDelete;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(void)setSubscriptionIDByRequestID:(NSMutableDictionary *)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)subscriptionModifiedBlock;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(NSMutableDictionary *)subscriptionIDByRequestID;
-(id)generateRequestOperations;
-(id)requestOperationClasses;
@end
