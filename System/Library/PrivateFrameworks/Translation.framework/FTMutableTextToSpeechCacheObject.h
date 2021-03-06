/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <Translation/FTTextToSpeechCacheObject.h>

@class NSData, NSArray;

@interface FTMutableTextToSpeechCacheObject : FTTextToSpeechCacheObject

@property (nonatomic,copy) NSData * audio; 
@property (nonatomic,copy) NSArray * word_timing_info; 
-(NSArray *)word_timing_info;
-(void)setWord_timing_info:(NSArray *)arg1 ;
-(NSData *)audio;
-(id)init;
-(void)audio:(/*^block*/id)arg1 ;
-(void)setAudio:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

