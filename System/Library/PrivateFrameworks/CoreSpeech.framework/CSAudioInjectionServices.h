/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CSAudioInjectionServices : NSObject
+(void)pingpong:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)createAudioInjectionDeviceWithType:(long long)arg1 deviceName:(id)arg2 deviceID:(id)arg3 productID:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)connectDeviceWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)disconnectDeviceWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)primaryInputDeviceUUIDWithCompletion:(/*^block*/id)arg1 ;
+(BOOL)audioInjectionEnabled;
+(id)getAudioInjectionXPCConnection;
+(void)injectAudio:(id)arg1 toDeviceWithUUID:(id)arg2 withfadingTimeWindowLength:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)setAudioInjectionMode:(BOOL)arg1 ;
+(void)injectAudio:(id)arg1 toDeviceWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

