/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSUUID, NSDate, CDDCloudKitRegisteredClient;

@interface CDDCloudKitScheduledActivity : NSManagedObject

@property (nonatomic,retain) NSNumber * activityTypeNum; 
@property (nonatomic,retain) NSUUID * activityUUID; 
@property (assign,nonatomic) unsigned long long activityType; 
@property (nonatomic,retain) NSDate * scheduledAt; 
@property (nonatomic,retain) CDDCloudKitRegisteredClient * registeredClient; 
@property (nonatomic,retain) NSNumber * isUserRequestedBackupTask; 
+(id)entityName;
-(unsigned long long)activityType;
-(void)setActivityType:(unsigned long long)arg1 ;
-(id)xpcActivityCriteria;
-(void)populateFromCriteria:(id)arg1 ;
@end
