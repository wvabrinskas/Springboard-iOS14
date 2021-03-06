/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFText.h>
#import <libobjc.A.dylib/SFFormattedText.h>
@class SFImage, NSDictionary, NSData;


@protocol SFFormattedText <SFText>
@property (nonatomic,retain) SFImage * glyph; 
@property (assign,nonatomic) BOOL isEmphasized; 
@property (assign,nonatomic) BOOL isBold; 
@property (assign,nonatomic) int textColor; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(BOOL)isBold;
-(BOOL)isEmphasized;
-(NSData *)jsonData;
-(void)setGlyph:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(int)textColor;
-(void)setTextColor:(int)arg1;
-(SFImage *)glyph;
-(void)setIsBold:(BOOL)arg1;
-(void)setIsEmphasized:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFImage, NSDictionary, NSData, NSString;

@interface SFFormattedText : SFText <SFFormattedText, NSSecureCoding, NSCopying> {

	SCD_Struct_SF3 _has;
	BOOL _isEmphasized;
	BOOL _isBold;
	int _textColor;
	SFImage* _glyph;

}

@property (nonatomic,retain) SFImage * glyph;                                        //@synthesize glyph=_glyph - In the implementation block
@property (assign,nonatomic) BOOL isEmphasized;                                      //@synthesize isEmphasized=_isEmphasized - In the implementation block
@property (assign,nonatomic) BOOL isBold;                                            //@synthesize isBold=_isBold - In the implementation block
@property (assign,nonatomic) int textColor;                                          //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (copy) NSString * text; 
@property (assign,nonatomic) unsigned long long maxLines; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isBold;
-(BOOL)isEmphasized;
-(NSData *)jsonData;
-(void)setGlyph:(SFImage *)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasIsEmphasized;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)hasIsBold;
-(int)textColor;
-(void)setTextColor:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(SFImage *)glyph;
-(void)setIsBold:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setIsEmphasized:(BOOL)arg1 ;
-(BOOL)hasTextColor;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

