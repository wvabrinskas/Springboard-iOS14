/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitBackingStore/HMBModel.h>

@class NSData, NSDate, HMBModelCloudReference, NSUUID;

@interface HMDFaceCropModel : HMBModel

@property (retain) NSData * faceBoundingBoxData; 
@property (retain) NSData * dataRepresentation; 
@property (retain) NSDate * dateCreated; 
@property (assign) CGRect faceBoundingBox; 
@property (retain) HMBModelCloudReference * person; 
@property (retain) NSUUID * unassociatedFaceCropUUID; 
+(id)hmbQueries;
+(id)hmbProperties;
+(id)faceCropsForPersonQuery;
+(id)faceCropsForAnyPersonQuery;
+(id)faceCropsForNoPersonQuery;
+(id)faceCropsWithUnassociatedFaceCropUUIDQuery;
+(id)sentinelParentUUID;
-(CGRect)faceBoundingBox;
-(void)setFaceBoundingBox:(CGRect)arg1 ;
-(id)initWithPersonFaceCrop:(id)arg1 ;
-(id)createFaceCrop;
-(id)createPersonFaceCrop;
@end
