/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, FTStartSpeechRequest, FTUpdateAudioInfo, FTSetRequestOrigin, FTSetSpeechContext, FTSetSpeechProfile, FTSetEndpointerState, FTAudioPacket, FTFinishAudio, FTResetServerEndpointer, FTCheckForSpeechRequest, FTSetAlternateRecognitionSausage;

@interface FTRecognitionStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const RecognitionStreamingRequest* _root;

}

@property (nonatomic,readonly) long long content_type; 
@property (nonatomic,readonly) FTStartSpeechRequest * contentAsFTStartSpeechRequest; 
@property (nonatomic,readonly) FTUpdateAudioInfo * contentAsFTUpdateAudioInfo; 
@property (nonatomic,readonly) FTSetRequestOrigin * contentAsFTSetRequestOrigin; 
@property (nonatomic,readonly) FTSetSpeechContext * contentAsFTSetSpeechContext; 
@property (nonatomic,readonly) FTSetSpeechProfile * contentAsFTSetSpeechProfile; 
@property (nonatomic,readonly) FTSetEndpointerState * contentAsFTSetEndpointerState; 
@property (nonatomic,readonly) FTAudioPacket * contentAsFTAudioPacket; 
@property (nonatomic,readonly) FTFinishAudio * contentAsFTFinishAudio; 
@property (nonatomic,readonly) FTResetServerEndpointer * contentAsFTResetServerEndpointer; 
@property (nonatomic,readonly) FTCheckForSpeechRequest * contentAsFTCheckForSpeechRequest; 
@property (nonatomic,readonly) FTSetAlternateRecognitionSausage * contentAsFTSetAlternateRecognitionSausage; 
-(id)initWithFlatbuffData:(id)arg1 root:(const RecognitionStreamingRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::qss_fb::RecognitionStreamingRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const RecognitionStreamingRequest*)arg2 ;
-(FTAudioPacket *)contentAsFTAudioPacket;
-(FTFinishAudio *)contentAsFTFinishAudio;
-(FTStartSpeechRequest *)contentAsFTStartSpeechRequest;
-(FTUpdateAudioInfo *)contentAsFTUpdateAudioInfo;
-(FTSetRequestOrigin *)contentAsFTSetRequestOrigin;
-(FTSetSpeechContext *)contentAsFTSetSpeechContext;
-(FTSetSpeechProfile *)contentAsFTSetSpeechProfile;
-(FTSetEndpointerState *)contentAsFTSetEndpointerState;
-(FTResetServerEndpointer *)contentAsFTResetServerEndpointer;
-(FTCheckForSpeechRequest *)contentAsFTCheckForSpeechRequest;
-(FTSetAlternateRecognitionSausage *)contentAsFTSetAlternateRecognitionSausage;
-(long long)content_type;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
