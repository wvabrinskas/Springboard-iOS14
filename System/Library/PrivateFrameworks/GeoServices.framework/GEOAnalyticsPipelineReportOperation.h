/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, GEOAnalyticsPipelineRemoteProxy;

@interface GEOAnalyticsPipelineReportOperation : NSOperation {

	BOOL _finished;
	BOOL _executing;
	id _transaction;
	NSObject*<OS_dispatch_queue> _runQueue;
	GEOAnalyticsPipelineRemoteProxy* _remoteProxy;
	NSObject*<OS_dispatch_queue> _completionQueue;
	/*^block*/id _completionBlock;

}
-(BOOL)isExecuting;
-(void)start;
-(void)_completeOperation;
-(BOOL)isFinished;
-(id)initWithRemoteProxy:(id)arg1 runQueue:(id)arg2 completionQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
@end

