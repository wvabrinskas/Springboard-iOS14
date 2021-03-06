/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <Translation/FTClientSetupInfo.h>

@class NSString;

@interface FTMutableClientSetupInfo : FTClientSetupInfo

@property (assign,nonatomic) float endpoint_threshold; 
@property (assign,nonatomic) BOOL endpoint_extra_delay; 
@property (nonatomic,copy) NSString * speech_id; 
-(id)init;
-(float)endpoint_threshold;
-(void)setEndpoint_threshold:(float)arg1 ;
-(BOOL)endpoint_extra_delay;
-(void)setEndpoint_extra_delay:(BOOL)arg1 ;
-(NSString *)speech_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

