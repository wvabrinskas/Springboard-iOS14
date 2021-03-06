/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVVideoOutputSettings.h>
#import <AVFCore/AVReencodedVideoSettingsForFig.h>

@class NSDictionary;

@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings <AVReencodedVideoSettingsForFig> {

	NSDictionary* _adaptedVideoCompressionProperties;
	NSDictionary* _VTPixelAspectRatioDictionary;
	NSDictionary* _VTCleanApertureDictionary;

}

@property (nonatomic,readonly) unsigned videoCodecType; 
@property (nonatomic,readonly) NSDictionary * videoEncoderSpecification; 
@property (nonatomic,readonly) NSDictionary * videoCompressionProperties; 
+(id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(BOOL)_validateVideoCompressionProperties:(id)arg1 againstSupportedPropertyDictionary:(id)arg2 forCodecType:(id)arg3 exceptionReason:(id*)arg4 ;
+(id)eligibleOutputSettingsDictionaryKeys;
-(int)height;
-(int)width;
-(BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id*)arg1 ;
-(id)cleanApertureDictionary;
-(BOOL)canFullySpecifyOutputFormatReturningReason:(id*)arg1 ;
-(id)pixelAspectRatioDictionary;
-(BOOL)willYieldCompressedSamples;
-(unsigned)videoCodecType;
-(NSDictionary *)videoEncoderSpecification;
-(NSDictionary *)videoCompressionProperties;
-(id)initWithTrustedAVVideoSettingsDictionary:(id)arg1 ;
-(id)initWithAVVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)dealloc;
@end

