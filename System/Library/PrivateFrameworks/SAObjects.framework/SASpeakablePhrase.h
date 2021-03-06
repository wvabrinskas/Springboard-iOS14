/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SASpeakablePhrase : SADomainObject

@property (nonatomic,copy) NSString * phrase; 
@property (nonatomic,copy) NSString * pronunciation; 
+(id)speakablePhrase;
+(id)speakablePhraseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setPhrase:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)pronunciation;
-(void)setPronunciation:(NSString *)arg1 ;
-(NSString *)phrase;
@end

