/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCapture/AVFCapture-Structs.h>
@class AVWeakReference, NSMutableArray, NSArray, NSString, NSDictionary;

@interface AVCaptureMovieFileOutputInternal : NSObject {

	AVWeakReference* weakReference;
	NSMutableArray* recordingDelegatesArray;
	NSMutableArray* connectionsThatRecordVideoOrientationAndMirroringChangesAsMetadataTrack;
	SCD_Struct_AV0 movieFragmentInterval;
	NSArray* metadata;
	NSArray* availableVideoCodecs;
	NSString* videoCodec;
	NSDictionary* videoCompressionProperties;
	BOOL sendLastVideoPreviewFrame;
	BOOL recording;
	BOOL paused;
	NSString* bravoCameraSelectionBehaviorForRecording;
	ct_green_tea_logger_sRef greenTeaLogger;

}
-(id)init;
-(void)dealloc;
@end
