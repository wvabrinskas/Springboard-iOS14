/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CAMStillImageCaptureRequestDelegate <NSObject>
@optional
-(void)stillImageRequestDidBeginCaptureBeforeResolvingSettings:(id)arg1;
-(void)stillImageRequestDidCompleteVideoCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidStopCapturingStillImage:(id)arg1;
-(void)stillImageRequestDidStartCapturing:(id)arg1 resolvedSettings:(id)arg2;
-(void)stillImageRequestDidCompleteStillImageRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2;
-(void)stillImageRequestDidCompleteStillImageLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteVideoLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteVideoRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;

@end

