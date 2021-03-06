/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <Memories/ExportController.h>

@class NSError, PVVideoCompositing;

@interface ReaderWriterExportController : ExportController {

	float m_progress;
	int m_numberOfPasses;
	long long m_status;
	NSError* m_error;
	BOOL m_cancel;
	BOOL m_firstPassDone;
	PVVideoCompositing* m_customCompositor;

}
+(id)stringForStatus:(long long)arg1 ;
-(float)progress;
-(void)cancelExport;
-(void)continueExportAfterDelay;
-(long long)mapAssetReaderStatusToExportStatus:(long long)arg1 ;
-(long long)mapAssetWriterStatusToExportStatus:(long long)arg1 ;
-(void)updateStatusAndErrorFromReader:(id)arg1 andWriter:(id)arg2 ;
-(id)fileTypeFromExtension;
-(id)videoDecompressionSettingsForVideoCompressionSettings:(id)arg1 ;
-(id)audioCompressionSettings;
-(void)transferSampleBuffers:(id)arg1 assetReader:(id)arg2 assetWriterInput:(id)arg3 assetWriter:(id)arg4 timeRangeToExport:(SCD_Struct_PM9)arg5 queue:(id)arg6 pass:(long long)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)_setupMovieController;
-(id)_compositionForExport;
-(void)releaseMovieController;
-(void)noteSessionProgressed:(float)arg1 ;
-(void)updateThemeImages;
-(id)videoCompressionSettings;
-(void)continueExportForNextPreset;
@end

