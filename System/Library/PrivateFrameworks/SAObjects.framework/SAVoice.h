/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAVoice : SADomainObject

@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageString; 
@property (nonatomic,copy) NSString * masteredVersion; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * quality; 
@property (assign,nonatomic) long long resourceContentVersion; 
@property (nonatomic,copy) NSString * resourceMasteredVersion; 
@property (assign,nonatomic) long long voiceContentVersion; 
@property (nonatomic,copy) NSString * voiceType; 
+(id)voice;
+(id)voiceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setQuality:(NSString *)arg1 ;
-(void)setGender:(NSString *)arg1 ;
-(NSString *)languageString;
-(long long)resourceContentVersion;
-(void)setResourceContentVersion:(long long)arg1 ;
-(NSString *)voiceType;
-(NSString *)resourceMasteredVersion;
-(void)setResourceMasteredVersion:(NSString *)arg1 ;
-(long long)voiceContentVersion;
-(NSString *)quality;
-(id)encodedClassName;
-(NSString *)name;
-(void)setLanguageString:(NSString *)arg1 ;
-(void)setMasteredVersion:(NSString *)arg1 ;
-(void)setVoiceType:(NSString *)arg1 ;
-(void)setVoiceContentVersion:(long long)arg1 ;
-(NSString *)masteredVersion;
-(NSString *)gender;
-(void)setName:(NSString *)arg1 ;
@end
