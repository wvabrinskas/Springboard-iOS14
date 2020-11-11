/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/FigCapturePipeline.h>

@class FigCaptureVISPipeline, BWFanOutNode, BWOverCaptureFanOutNode, NSMutableArray, FigCaptureMovieFileSinkHeadPipeline;

@interface FigCaptureMovieFileSinkMiddlePipeline : FigCapturePipeline {

	FigCaptureVISPipeline* _visPipeline;
	BWFanOutNode* _videoFanOut;
	FigCaptureVISPipeline* _overCaptureVISPipeline;
	BWOverCaptureFanOutNode* _audioFanOut;
	NSMutableArray* _metadataFanOuts;
	FigCaptureMovieFileSinkHeadPipeline* _headPipeline;
	unsigned long long _numberOfTailsToSupport;

}

@property (nonatomic,readonly) FigCaptureVISPipeline * visPipeline;                         //@synthesize visPipeline=_visPipeline - In the implementation block
@property (nonatomic,readonly) FigCaptureVISPipeline * overCaptureVISPipeline;              //@synthesize overCaptureVISPipeline=_overCaptureVISPipeline - In the implementation block
-(id)metadataOutputsForTailIndex:(unsigned long long)arg1 ;
-(FigCaptureVISPipeline *)visPipeline;
-(id)videoOutputForTailIndex:(unsigned long long)arg1 ;
-(FigCaptureVISPipeline *)overCaptureVISPipeline;
-(id)audioOutputForTailIndex:(unsigned long long)arg1 ;
-(int)_buildMovieFileSinkExtendedCVISMiddleWithConfiguration:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 headPipeline:(id)arg4 captureDevice:(id)arg5 ;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 headPipeline:(id)arg4 captureDevice:(id)arg5 ;
-(void)dealloc;
@end
