/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSOrderedSet;

@interface _LTPowerLogger : NSObject {

	NSObject*<OS_dispatch_queue> _loggerQueue;
	NSOrderedSet* _requestTypeSet;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> loggerQueue;              //@synthesize loggerQueue=_loggerQueue - In the implementation block
@property (retain) NSOrderedSet * requestTypeSet;                                   //@synthesize requestTypeSet=_requestTypeSet - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)_shouldLogRequest:(long long)arg1 ;
-(id)_maskForRequestType:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)loggerQueue;
-(void)setLoggerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)logTranslateRequestEvent:(id)arg1 requestType:(id)arg2 routeType:(long long)arg3 ;
-(NSOrderedSet *)requestTypeSet;
-(void)setRequestTypeSet:(NSOrderedSet *)arg1 ;
@end
