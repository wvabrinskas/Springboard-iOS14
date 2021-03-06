/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:49:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <libvoiced_tts.dylib/OPTTSTextToSpeechRouterStreamingStreamingResponse.h>

@class OPTTSBeginTextToSpeechStreamingResponse, OPTTSPartialTextToSpeechStreamingResponse, OPTTSFinalTextToSpeechStreamingResponse;

@interface OPTTSMutableTextToSpeechRouterStreamingStreamingResponse : OPTTSTextToSpeechRouterStreamingStreamingResponse

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) OPTTSBeginTextToSpeechStreamingResponse * contentAsOPTTSBeginTextToSpeechStreamingResponse; 
@property (nonatomic,copy) OPTTSPartialTextToSpeechStreamingResponse * contentAsOPTTSPartialTextToSpeechStreamingResponse; 
@property (nonatomic,copy) OPTTSFinalTextToSpeechStreamingResponse * contentAsOPTTSFinalTextToSpeechStreamingResponse; 
-(id)init;
-(long long)content_type;
-(void)setContent_type:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(OPTTSBeginTextToSpeechStreamingResponse *)contentAsOPTTSBeginTextToSpeechStreamingResponse;
-(OPTTSPartialTextToSpeechStreamingResponse *)contentAsOPTTSPartialTextToSpeechStreamingResponse;
-(OPTTSFinalTextToSpeechStreamingResponse *)contentAsOPTTSFinalTextToSpeechStreamingResponse;
-(void)setContentAsOPTTSBeginTextToSpeechStreamingResponse:(OPTTSBeginTextToSpeechStreamingResponse *)arg1 ;
-(void)setContentAsOPTTSPartialTextToSpeechStreamingResponse:(OPTTSPartialTextToSpeechStreamingResponse *)arg1 ;
-(void)setContentAsOPTTSFinalTextToSpeechStreamingResponse:(OPTTSFinalTextToSpeechStreamingResponse *)arg1 ;
@end

