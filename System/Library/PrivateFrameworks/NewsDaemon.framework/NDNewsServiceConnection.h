/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsDaemon.framework/NewsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NDNewsServiceClient.h>
#import <libobjc.A.dylib/NDNewsService.h>

@protocol NDNewsService, OS_dispatch_queue, NDNewsServiceClient;
@class NSXPCConnection, NSObject, NSString;

@interface NDNewsServiceConnection : NSObject <NDNewsServiceClient, NDNewsService> {

	NSXPCConnection* _connection;
	id<NDNewsService> _daemon;
	NSObject*<OS_dispatch_queue> _accessQueue;
	id<NDNewsServiceClient> _client;

}

@property (nonatomic,retain) NSXPCConnection * connection;                          //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) id<NDNewsService> daemon;                              //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic,__weak) id<NDNewsServiceClient> client;                 //@synthesize client=_client - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithClient:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setDaemon:(id<NDNewsService>)arg1 ;
-(id<NDNewsService>)daemon;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setClient:(id<NDNewsServiceClient>)arg1 ;
-(void)_establishConnectionIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)markAnalyticsElement:(id)arg1 asReadAtDate:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id<NDNewsServiceClient>)client;
-(void)fetchLatestResultsWithParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchPlaceholderResultsWithOperationInfo:(id)arg1 syncCompletion:(/*^block*/id)arg2 ;
-(void)fetchModuleDescriptorsWithCompletion:(/*^block*/id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)_unsafeEstablishConnectionIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(NSXPCConnection *)connection;
-(void)markAnalyticsElements:(id)arg1 asSeenAtDate:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)serviceHasNewTodayResults;
-(void)dealloc;
@end
