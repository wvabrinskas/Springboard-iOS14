/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AMSBagProtocol;
@class NSError, AMSProcessInfo, NSData, NSURLSession, NSURLSessionTask, NSURLSessionTaskMetrics, NSDictionary;

@interface AMSMetricsLoadURLContext : NSObject {

	id<AMSBagProtocol> _bag;
	NSError* _error;
	AMSProcessInfo* _processInfo;
	NSData* _responseBody;
	NSURLSession* _session;
	NSURLSessionTask* _task;
	NSURLSessionTaskMetrics* _taskMetrics;
	NSDictionary* _decodedResponseBody;

}

@property (nonatomic,retain) NSDictionary * decodedResponseBody;                 //@synthesize decodedResponseBody=_decodedResponseBody - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;                             //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * processInfo;                       //@synthesize processInfo=_processInfo - In the implementation block
@property (nonatomic,retain) NSData * responseBody;                              //@synthesize responseBody=_responseBody - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                             //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * task;                            //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSURLSessionTaskMetrics * taskMetrics;              //@synthesize taskMetrics=_taskMetrics - In the implementation block
-(void)setTaskMetrics:(NSURLSessionTaskMetrics *)arg1 ;
-(AMSProcessInfo *)processInfo;
-(id)bagContract;
-(void)setBagContract:(id)arg1 ;
-(void)setProcessInfo:(AMSProcessInfo *)arg1 ;
-(NSDictionary *)decodedResponseBody;
-(NSError *)error;
-(id<AMSBagProtocol>)bag;
-(void)setError:(NSError *)arg1 ;
-(NSURLSessionTask *)task;
-(NSData *)responseBody;
-(void)setResponseBody:(NSData *)arg1 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)initWithTaskInfo:(id)arg1 serverPayload:(id)arg2 ;
-(void)setSession:(NSURLSession *)arg1 ;
-(NSURLSession *)session;
-(void)setDecodedResponseBody:(NSDictionary *)arg1 ;
-(void)setTask:(NSURLSessionTask *)arg1 ;
-(NSURLSessionTaskMetrics *)taskMetrics;
-(id)initWithTask:(id)arg1 metrics:(id)arg2 ;
@end

