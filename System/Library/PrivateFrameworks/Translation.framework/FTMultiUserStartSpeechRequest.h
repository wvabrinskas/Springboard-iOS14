/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, FTStartSpeechRequest, NSArray, NSString;

@interface FTMultiUserStartSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const MultiUserStartSpeechRequest* _root;

}

@property (nonatomic,readonly) FTStartSpeechRequest * start_speech_request; 
@property (nonatomic,readonly) NSArray * user_parameters; 
@property (nonatomic,readonly) NSString * primary_speech_id; 
-(id)initWithFlatbuffData:(id)arg1 root:(const MultiUserStartSpeechRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::MultiUserStartSpeechRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const MultiUserStartSpeechRequest*)arg2 ;
-(FTStartSpeechRequest *)start_speech_request;
-(NSArray *)user_parameters;
-(NSString *)primary_speech_id;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

