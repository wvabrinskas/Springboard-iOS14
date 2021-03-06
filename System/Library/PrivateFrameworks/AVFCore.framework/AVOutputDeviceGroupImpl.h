/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class AVOutputDeviceGroup, NSArray, AVOutputDevice;


@protocol AVOutputDeviceGroupImpl <NSObject>
@property (__weak) AVOutputDeviceGroup * parentOutputDeviceGroup; 
@property (readonly) BOOL receivesLongFormAudioFromLocalDevice; 
@property (readonly) NSArray * outputDevices; 
@property (readonly) AVOutputDevice * groupLeader; 
@property (readonly) float volume; 
@required
-(NSArray *)outputDevices;
-(long long)volumeControlType;
-(void)setVolume:(float)arg1;
-(float)volume;
-(AVOutputDeviceGroup *)parentOutputDeviceGroup;
-(void)setParentOutputDeviceGroup:(id)arg1;
-(BOOL)receivesLongFormAudioFromLocalDevice;
-(AVOutputDevice *)groupLeader;
-(void)removeOutputDevice:(id)arg1 withOptions:(id)arg2 completionhandler:(/*^block*/id)arg3;
-(void)addOutputDevice:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

