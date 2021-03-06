/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFAudio/AVAudioUnit.h>

@class NSURL;

@interface AVAudioUnitDSPGraph : AVAudioUnit

@property (nonatomic,readonly) NSURL * dspGraphURL; 
@property (nonatomic,readonly) NSURL * auProcessingStripURL; 
-(id)init;
-(NSURL *)dspGraphURL;
-(BOOL)loadAudioDSPManager;
-(BOOL)loadDSPGraphAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadAudioUnitProcessingStripAtURL:(id)arg1 error:(id*)arg2 ;
-(NSURL *)auProcessingStripURL;
@end

