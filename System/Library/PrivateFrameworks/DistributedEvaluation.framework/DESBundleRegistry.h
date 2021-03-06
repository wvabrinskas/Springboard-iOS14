/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface DESBundleRegistry : NSObject {

	NSDictionary* _bundleMap;

}
+(id)sharedInstance;
+(void)initialize;
-(id)init;
-(BOOL)containsBundleId:(id)arg1 ;
-(id)evaluatorForBundleId:(id)arg1 error:(id*)arg2 ;
-(id)coreDuetEventQueryForBundleId:(id)arg1 ;
-(id)supportedRecordTypesForBundleId:(id)arg1 ;
-(id)allBundleIds;
-(unsigned long long)maximumNumberOfRecordsForBundleId:(id)arg1 ;
-(unsigned long long)daysToExpirationOfRecordsForBundleId:(id)arg1 ;
-(id)_init;
-(id)supportedCoreDuetEventStreamNamesForBundleId:(id)arg1 ;
@end

