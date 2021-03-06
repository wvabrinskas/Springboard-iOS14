/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HMBCloudStateModel.h>

@class HMBCloudZone, HMBCloudZoneRebuilderStatus, NSData, HMBCloudZoneID, NSNumber, NSSet;

@interface HMBCloudZoneStateModel : HMBCloudStateModel {

	HMBCloudZone* _cloudZone;
	HMBCloudZoneRebuilderStatus* _rebuilderStatus;

}

@property (nonatomic,retain) NSData * subscriptionsData; 
@property (__weak) HMBCloudZone * cloudZone;                                             //@synthesize cloudZone=_cloudZone - In the implementation block
@property (nonatomic,retain) HMBCloudZoneID * zoneID; 
@property (nonatomic,retain) NSNumber * needsZoneCreation; 
@property (nonatomic,retain) NSNumber * needsZoneDeletion; 
@property (nonatomic,retain) NSSet * subscriptions; 
@property (nonatomic,retain) HMBCloudZoneRebuilderStatus * rebuilderStatus;              //@synthesize rebuilderStatus=_rebuilderStatus - In the implementation block
+(id)hmbProperties;
-(NSSet *)subscriptions;
-(void)setSubscriptions:(NSSet *)arg1 ;
-(HMBCloudZoneRebuilderStatus *)rebuilderStatus;
-(id)initWithModelID:(id)arg1 parentModelID:(id)arg2 ;
-(HMBCloudZone *)cloudZone;
-(void)setCloudZone:(HMBCloudZone *)arg1 ;
-(void)setRebuilderStatus:(HMBCloudZoneRebuilderStatus *)arg1 ;
@end

