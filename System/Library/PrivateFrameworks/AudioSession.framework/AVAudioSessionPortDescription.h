/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AudioSession.framework/AudioSession
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AudioSession/AudioSession-Structs.h>
@class NSString, NSArray, AVAudioSessionDataSourceDescription;

@interface AVAudioSessionPortDescription : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSString * portType; 
@property (nonatomic,readonly) NSString * portName; 
@property (nonatomic,readonly) NSString * UID; 
@property (readonly) BOOL hasHardwareVoiceCallProcessing; 
@property (nonatomic,readonly) NSArray * channels; 
@property (nonatomic,readonly) NSArray * dataSources; 
@property (nonatomic,readonly) AVAudioSessionDataSourceDescription * selectedDataSource; 
@property (nonatomic,readonly) AVAudioSessionDataSourceDescription * preferredDataSource; 
+(id)privateCreateArray:(id)arg1 owningSession:(id)arg2 ;
-(NSString *)portType;
-(NSString *)portName;
-(id)initWithSession:(id)arg1 ;
-(unsigned long long)endpointType;
-(NSString *)UID;
-(NSArray *)dataSources;
-(id)initWithRawPortDescription:(id)arg1 owningSession:(id)arg2 ;
-(BOOL)setPreferredDataSource:(id)arg1 error:(id*)arg2 ;
-(AVAudioSessionDataSourceDescription *)preferredDataSource;
-(unsigned long long)hash;
-(NSArray *)channels;
-(BOOL)isLowLatencyAirPlay;
-(id)description;
-(BOOL)isLiveListenSupported;
-(BOOL)isEqual:(id)arg1 ;
-(AVAudioSessionDataSourceDescription *)selectedDataSource;
-(id)privateGetID;
-(BOOL)isEqualToPort:(id)arg1 compareStrict:(BOOL)arg2 ;
-(void)configureChannelsAndDataSources:(id)arg1 ;
-(PortDescriptionImpl*)privateGetImplementation;
-(BOOL)isHeadphones;
-(void)dealloc;
-(BOOL)hasHardwareVoiceCallProcessing;
@end
