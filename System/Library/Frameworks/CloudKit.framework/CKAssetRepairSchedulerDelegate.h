/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKAssetRepairSchedulerDelegate
@required
-(void)assetRepairScheduler:(id)arg1 preparingRepairWithOperation:(id)arg2;
-(void)assetRepairScheduler:(id)arg1 completedRequestWithMetadata:(id)arg2 result:(long long)arg3;
-(void)assetRepairScheduler:(id)arg1 completedRepairWithMetadata:(id)arg2 error:(id)arg3;
-(void)assetRepairSchedulerAllRequestsComplete:(id)arg1;

@end

