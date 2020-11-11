/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AudioPasscode/AudioPasscode-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AUPasscodeCodecConfiguration : NSObject <NSCopying, NSSecureCoding> {

	long long _payloadLengthBytes;
	long long _sampleRate;
	long long _numChannels;
	NSString* _algorithmName;

}

@property (assign,nonatomic) long long payloadLengthBytes;              //@synthesize payloadLengthBytes=_payloadLengthBytes - In the implementation block
@property (assign,nonatomic) long long sampleRate;                      //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) long long numChannels;                     //@synthesize numChannels=_numChannels - In the implementation block
@property (nonatomic,copy) NSString * algorithmName;                    //@synthesize algorithmName=_algorithmName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSampleRate:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)sampleRate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)numChannels;
-(void)setNumChannels:(long long)arg1 ;
-(long long)payloadLengthBytes;
-(id)initWithAlgorithmName:(id)arg1 ;
-(void)setAlgorithmName:(NSString *)arg1 ;
-(id)commandLineOptions;
-(id)initWithCommandLineArgs:(id)arg1 ;
-(NSString *)algorithmName;
-(void)setPayloadLengthBytes:(long long)arg1 ;
-(void)__setDefaultValues;
@end
