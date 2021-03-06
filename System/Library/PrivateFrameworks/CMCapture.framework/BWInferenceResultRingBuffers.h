/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class NSMutableDictionary;

@interface BWInferenceResultRingBuffers : NSObject {

	OpaqueFigSimpleMutexRef _lock;
	NSMutableDictionary* _rings;

}
-(id)retrieveInferencesForType:(int)arg1 beginning:(SCD_Struct_BW8)arg2 until:(SCD_Struct_BW8)arg3 ;
-(id)init;
-(void)insertInferenceResultsFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setupRingBuffer:(int)arg1 inferencesOfType:(int)arg2 ;
-(void)bufferingStatsForType:(int)arg1 firstOut:(SCD_Struct_BW8*)arg2 lastOut:(SCD_Struct_BW8*)arg3 countOut:(int*)arg4 ;
-(void)dealloc;
@end

