/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _DKKnowledgeQuerying;
@class ATXHeuristicDevice;

@interface ATXAppLaunchCountDataSource : NSObject {

	ATXHeuristicDevice* _device;
	id<_DKKnowledgeQuerying> _duetStore;

}
-(id)initWithDevice:(id)arg1 ;
-(void)appLaunchCountForBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 limit:(unsigned long long)arg4 callback:(/*^block*/id)arg5 ;
@end
