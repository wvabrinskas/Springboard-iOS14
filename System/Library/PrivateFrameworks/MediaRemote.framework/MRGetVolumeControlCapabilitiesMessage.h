/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRGetVolumeControlCapabilitiesMessage : MRProtocolMessage

@property (nonatomic,readonly) NSString * outputDeviceUID; 
-(unsigned long long)type;
-(id)initWithOutputDeviceUID:(id)arg1 ;
-(NSString *)outputDeviceUID;
@end
