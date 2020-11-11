/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray, NSDictionary, NSData, _MRVoiceInputDeviceDescriptorProtobuf;

@interface MRVirtualVoiceInputDeviceDescriptor : NSObject <NSMutableCopying> {

	NSArray* _supportedFormats;
	NSDictionary* _defaultFormat;

}

@property (nonatomic,readonly) NSArray * supportedFormats;                                    //@synthesize supportedFormats=_supportedFormats - In the implementation block
@property (nonatomic,readonly) NSDictionary * defaultFormat;                                  //@synthesize defaultFormat=_defaultFormat - In the implementation block
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) _MRVoiceInputDeviceDescriptorProtobuf * protobuf; 
-(NSArray *)supportedFormats;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)data;
-(_MRVoiceInputDeviceDescriptorProtobuf *)protobuf;
-(id)initWithData:(id)arg1 ;
-(NSDictionary *)defaultFormat;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
@end
