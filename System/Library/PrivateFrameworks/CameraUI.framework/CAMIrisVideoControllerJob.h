/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CAMStillImageCaptureRequest, CAMVideoCaptureResult;

@interface CAMIrisVideoControllerJob : NSObject {

	CAMStillImageCaptureRequest* _request;
	CAMVideoCaptureResult* _videoCaptureResult;

}

@property (nonatomic,readonly) CAMStillImageCaptureRequest * request;                   //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) CAMVideoCaptureResult * videoCaptureResult;              //@synthesize videoCaptureResult=_videoCaptureResult - In the implementation block
-(CAMStillImageCaptureRequest *)request;
-(id)initWithRequest:(id)arg1 videoCaptureResult:(id)arg2 ;
-(CAMVideoCaptureResult *)videoCaptureResult;
@end
