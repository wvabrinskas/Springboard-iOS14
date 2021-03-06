/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMVideoCaptureRequest;

@interface CAMStartVideoRecordingCommand : CAMCaptureCommand {

	CAMVideoCaptureRequest* __request;

}

@property (nonatomic,readonly) CAMVideoCaptureRequest * _request;              //@synthesize _request=__request - In the implementation block
-(CAMVideoCaptureRequest *)_request;
-(long long)_videoOrientationForCaptureOrientation:(long long)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

