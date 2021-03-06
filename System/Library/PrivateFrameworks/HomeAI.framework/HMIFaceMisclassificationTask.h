/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HMITask.h>

@protocol HMIHomePersonManagerDataSource;
@class HMIPersonFaceCrop;

@interface HMIFaceMisclassificationTask : HMITask {

	HMIPersonFaceCrop* _faceCrop;
	id<HMIHomePersonManagerDataSource> _dataSource;

}

@property (readonly) HMIPersonFaceCrop * faceCrop;                               //@synthesize faceCrop=_faceCrop - In the implementation block
@property (readonly) id<HMIHomePersonManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(id)logCategory;
-(void)main;
-(id<HMIHomePersonManagerDataSource>)dataSource;
-(HMIPersonFaceCrop *)faceCrop;
-(id)initWithTaskID:(int)arg1 dataSource:(id)arg2 faceCrop:(id)arg3 ;
-(void)removeNearestFaceprint:(id)arg1 withFaceCrops:(id)arg2 ;
@end

