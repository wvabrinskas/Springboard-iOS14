/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContextKitExtraction.framework/ContextKitExtraction
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContextKitExtraction/ContextKitExtraction-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKContextDonationItem : NSObject <NSSecureCoding, NSCopying> {

	NSString* _text;
	NSString* _title;
	NSString* _contentDescription;
	NSString* _contentKeywords;
	NSString* _contentAuthor;
	NSString* _languageTag;
	NSString* _debugText;
	NSString* _debugUrlString;

}

@property (nonatomic,retain) NSString * debugText;                                                     //@synthesize debugText=_debugText - In the implementation block
@property (nonatomic,retain) NSString * debugUrlString;                                                //@synthesize debugUrlString=_debugUrlString - In the implementation block
@property (setter=setText:,nonatomic,retain) NSString * text;                                          //@synthesize text=_text - In the implementation block
@property (setter=setTitle:,nonatomic,retain) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (setter=setContentDescription:,nonatomic,retain) NSString * contentDescription;              //@synthesize contentDescription=_contentDescription - In the implementation block
@property (setter=setContentKeywords:,nonatomic,retain) NSString * contentKeywords;                    //@synthesize contentKeywords=_contentKeywords - In the implementation block
@property (setter=setContentAuthor:,nonatomic,retain) NSString * contentAuthor;                        //@synthesize contentAuthor=_contentAuthor - In the implementation block
@property (nonatomic,retain) NSString * languageTag;                                                   //@synthesize languageTag=_languageTag - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)trimTextToSize:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)text;
-(NSString *)debugText;
-(NSString *)title;
-(void)setContentDescription:(NSString *)arg1 ;
-(void)setLanguageTag:(NSString *)arg1 ;
-(void)setDebugText:(NSString *)arg1 ;
-(NSString *)debugUrlString;
-(void)setDebugUrlString:(NSString *)arg1 ;
-(NSString *)contentAuthor;
-(void)setContentAuthor:(NSString *)arg1 ;
-(NSString *)contentKeywords;
-(void)setContentKeywords:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)languageTag;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)contentDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
