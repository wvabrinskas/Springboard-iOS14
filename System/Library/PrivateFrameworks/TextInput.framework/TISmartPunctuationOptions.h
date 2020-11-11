/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NSString;

@interface TISmartPunctuationOptions : NSObject <NSCopying, NSSecureCoding> {

	NSLocale* _locale;
	NSString* _leftSingleQuote;
	NSString* _rightSingleQuote;
	NSString* _apostrophe;
	NSString* _leftDoubleQuote;
	NSString* _rightDoubleQuote;

}

@property (nonatomic,copy) NSString * leftSingleQuote;               //@synthesize leftSingleQuote=_leftSingleQuote - In the implementation block
@property (nonatomic,copy) NSString * rightSingleQuote;              //@synthesize rightSingleQuote=_rightSingleQuote - In the implementation block
@property (nonatomic,copy) NSString * apostrophe;                    //@synthesize apostrophe=_apostrophe - In the implementation block
@property (nonatomic,copy) NSString * leftDoubleQuote;               //@synthesize leftDoubleQuote=_leftDoubleQuote - In the implementation block
@property (nonatomic,copy) NSString * rightDoubleQuote;              //@synthesize rightDoubleQuote=_rightDoubleQuote - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                    //@synthesize locale=_locale - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)smartPunctuationOptionsForLocale:(id)arg1 ;
-(NSLocale *)locale;
-(void)setLeftSingleQuote:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setRightDoubleQuote:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)rightDoubleQuote;
-(NSString *)rightSingleQuote;
-(void)setApostrophe:(NSString *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLeftDoubleQuote:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithLocale:(id)arg1 ;
-(void)_generateDataFromLocale;
-(void)setRightSingleQuote:(NSString *)arg1 ;
-(NSString *)leftDoubleQuote;
-(NSString *)leftSingleQuote;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)apostrophe;
@end
