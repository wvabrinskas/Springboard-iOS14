/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBKeyValueDataCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBImage, NSData;


@protocol _SFPBKeyValueDataCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (nonatomic,copy) NSArray * datas; 
@property (nonatomic,retain) _SFPBImage * accessoryImage; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)dataAtIndex:(unsigned long long)arg1;
-(NSData *)jsonData;
-(int)separatorStyle;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(void)setSeparatorStyle:(int)arg1;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(NSArray *)datas;
-(_SFPBImage *)accessoryImage;
-(void)setAccessoryImage:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(void)setType:(id)arg1;
-(_SFPBColor *)backgroundColor;
-(unsigned long long)dataCount;
-(NSArray *)punchoutOptions;
-(void)addData:(id)arg1;
-(NSString *)type;
-(void)setPunchoutOptions:(id)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(void)setCanBeHidden:(BOOL)arg1;
-(void)setHasTopPadding:(BOOL)arg1;
-(id)initWithJSON:(id)arg1;
-(void)clearData;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(void)setDatas:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBImage, NSData;

@interface _SFPBKeyValueDataCardSection : PBCodable <_SFPBKeyValueDataCardSection, NSSecureCoding> {

	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	NSArray* _datas;
	_SFPBImage* _accessoryImage;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                         //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                    //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;              //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                              //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                           //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                              //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) _SFPBColor * backgroundColor;                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSArray * datas;                                   //@synthesize datas=_datas - In the implementation block
@property (nonatomic,retain) _SFPBImage * accessoryImage;                     //@synthesize accessoryImage=_accessoryImage - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dataAtIndex:(unsigned long long)arg1 ;
-(NSData *)jsonData;
-(int)separatorStyle;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(void)setSeparatorStyle:(int)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(void)setData:(id)arg1 ;
-(NSArray *)datas;
-(unsigned long long)hash;
-(_SFPBImage *)accessoryImage;
-(void)setAccessoryImage:(_SFPBImage *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(_SFPBColor *)backgroundColor;
-(unsigned long long)dataCount;
-(NSArray *)punchoutOptions;
-(void)addData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)type;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)clearData;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(void)setDatas:(NSArray *)arg1 ;
@end

