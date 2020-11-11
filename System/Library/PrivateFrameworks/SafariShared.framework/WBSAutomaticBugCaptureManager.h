/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SDRDiagnosticReporter;

@interface WBSAutomaticBugCaptureManager : NSObject {

	SDRDiagnosticReporter* _reporter;

}
+(id)sharedManager;
-(id)init;
-(void)captureLoadingStallWithDomain:(id)arg1 detectedProcess:(id)arg2 context:(id)arg3 duration:(double)arg4 ;
-(void)_startLoggingSessionForDomain:(id)arg1 detectedProcess:(id)arg2 type:(id)arg3 subType:(id)arg4 context:(id)arg5 duration:(double)arg6 ;
-(void)captureLoadingStallWithDomain:(id)arg1 detectedProcess:(id)arg2 context:(id)arg3 ;
-(void)captureProcessTerminationDueToResourceLimitsWithDomain:(id)arg1 detectedProcess:(id)arg2 resourceType:(id)arg3 ;
-(void)captureDeferredNavigationWithDomain:(id)arg1 detectedProcess:(id)arg2 context:(id)arg3 ;
-(void)capturePerformanceTimeoutWithDomain:(id)arg1 detectedProcess:(id)arg2 context:(id)arg3 ;
@end
