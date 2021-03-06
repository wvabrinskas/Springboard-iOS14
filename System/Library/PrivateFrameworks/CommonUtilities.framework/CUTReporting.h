/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CommonUtilities/CommonUtilities-Structs.h>
@class CUTPromise;

@interface CUTReporting : NSObject {

	os_unfair_lock_s _promiseLock;
	CUTPromise* _promise;

}

@property (nonatomic,retain) CUTPromise * promise;              //@synthesize promise=_promise - In the implementation block
@property (readonly) os_unfair_lock_s promiseLock;              //@synthesize promiseLock=_promiseLock - In the implementation block
+(id)_rtcReportingSession;
+(id)reportingSession;
+(void)startRTCReportingSessionWithCompletion:(/*^block*/id)arg1 ;
+(id)RTCSessionPromiseWithBatchingInterval:(double)arg1 ;
-(id)init;
-(void)setPromise:(CUTPromise *)arg1 ;
-(id)_RTCSessionPromiseWithBatchingInterval:(double)arg1 ;
-(void)_failSeal:(id)arg1 withError:(id)arg2 ;
-(void)_beginPromiseTimeoutWithInterval:(long long)arg1 ;
-(void)_startConfigurationOfSession:(id)arg1 withPromiseSeal:(id)arg2 ;
-(void)_fullfillSeal:(id)arg1 withSession:(id)arg2 ;
-(os_unfair_lock_s)promiseLock;
-(CUTPromise *)promise;
@end

