/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceServices/VSAssetBase.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface VSVoiceAsset : VSAssetBase <NSSecureCoding> {

	BOOL _isInstalled;
	BOOL _isBuiltInVoice;
	BOOL _isVoiceReadyToUse;
	NSString* _name;
	NSArray* _languages;
	long long _gender;
	long long _footprint;
	long long _type;

}

@property (nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSArray * languages;                   //@synthesize languages=_languages - In the implementation block
@property (assign,nonatomic) long long gender;                    //@synthesize gender=_gender - In the implementation block
@property (assign,nonatomic) long long footprint;                 //@synthesize footprint=_footprint - In the implementation block
@property (assign,nonatomic) long long type;                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL isInstalled;                    //@synthesize isInstalled=_isInstalled - In the implementation block
@property (assign,nonatomic) BOOL isBuiltInVoice;                 //@synthesize isBuiltInVoice=_isBuiltInVoice - In the implementation block
@property (assign,nonatomic) BOOL isVoiceReadyToUse;              //@synthesize isVoiceReadyToUse=_isVoiceReadyToUse - In the implementation block
+(id)footprintStringFromFootprint:(long long)arg1 ;
+(id)languagesFromMobileAssetAttributes:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(long long)footprintFromString:(id)arg1 ;
+(id)compatibilityVersionFromMobileAssetAttributes:(id)arg1 ;
+(id)typeStringFromType:(long long)arg1 ;
+(long long)genderFromString:(id)arg1 ;
+(id)genderStringFromGender:(long long)arg1 ;
+(long long)typeFromString:(id)arg1 ;
-(BOOL)isInstalled;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setGender:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)nameKey;
-(void)setType:(long long)arg1 ;
-(long long)footprint;
-(NSString *)name;
-(id)description;
-(void)setFootprint:(long long)arg1 ;
-(void)setIsBuiltInVoice:(BOOL)arg1 ;
-(BOOL)isBuiltInVoice;
-(id)voiceKey;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)amendNameVersionAndSizeWithMobileAssetAttributes:(id)arg1 ;
-(id)initFromMobileAssetAttributes:(id)arg1 ;
-(id)descriptiveKey;
-(BOOL)isVoiceReadyToUse;
-(void)setIsInstalled:(BOOL)arg1 ;
-(void)setIsVoiceReadyToUse:(BOOL)arg1 ;
-(NSArray *)languages;
-(long long)gender;
-(void)setName:(NSString *)arg1 ;
-(void)setLanguages:(NSArray *)arg1 ;
@end

