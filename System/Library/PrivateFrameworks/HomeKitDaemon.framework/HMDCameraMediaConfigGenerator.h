/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@interface HMDCameraMediaConfigGenerator : HMFObject
-(BOOL)extractSelectedConfigFromProtocolParameters:(id)arg1 videoStreamConfig:(id*)arg2 audioStreamConfig:(id*)arg3 ;
-(BOOL)extractReselectedConfigFromVideoTier:(id)arg1 videoStreamConfig:(id*)arg2 ;
-(BOOL)_loadAVCVideoStreamConfig:(id)arg1 protocolParameters:(id)arg2 ;
-(BOOL)_loadAVCAudioStreamConfig:(id)arg1 protocolParameters:(id)arg2 ;
-(BOOL)_loadConfig:(id)arg1 cipherCuite:(id)arg2 ;
-(void)_loadConfig:(id)arg1 sendSrtpParameters:(id)arg2 receiveSrtpParameters:(id)arg3 ;
-(void)_loadMiscConfig:(id)arg1 ;
@end

