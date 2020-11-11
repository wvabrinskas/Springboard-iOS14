/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCardSection.h>
#import <libobjc.A.dylib/SFSuggestionCardSection.h>
@class NSArray, NSString, SFColor, SFRichText, SFImage, NSDictionary, NSData;


@protocol SFSuggestionCardSection <SFCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,retain) SFRichText * suggestionText; 
@property (assign,nonatomic) BOOL isContact; 
@property (nonatomic,copy) NSString * scopedSearchSectionBundleIdentifier; 
@property (assign,nonatomic) int suggestionType; 
@property (nonatomic,retain) SFRichText * detailText; 
@property (nonatomic,retain) SFImage * thumbnail; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1;
-(void)setScopedSearchSectionBundleIdentifier:(id)arg1;
-(SFRichText *)suggestionText;
-(NSString *)scopedSearchSectionBundleIdentifier;
-(SFImage *)thumbnail;
-(void)setSuggestionType:(int)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)isContact;
-(void)setBackgroundColor:(id)arg1;
-(void)setType:(id)arg1;
-(void)setThumbnail:(id)arg1;
-(SFColor *)backgroundColor;
-(NSArray *)punchoutOptions;
-(NSString *)type;
-(void)setIsContact:(BOOL)arg1;
-(SFRichText *)detailText;
-(void)setPunchoutOptions:(id)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(void)setCanBeHidden:(BOOL)arg1;
-(void)setHasTopPadding:(BOOL)arg1;
-(void)setSuggestionText:(id)arg1;
-(int)suggestionType;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(void)setDetailText:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, SFRichText, SFImage, NSDictionary, NSData, SFCard, SFUserReportRequest;

@interface SFSuggestionCardSection : SFCardSection <SFSuggestionCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF10 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _isContact;
	int _separatorStyle;
	int _suggestionType;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	SFRichText* _suggestionText;
	NSString* _scopedSearchSectionBundleIdentifier;
	SFRichText* _detailText;
	SFImage* _thumbnail;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                                   //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                              //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                        //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                          //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                                        //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                                     //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                        //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) SFColor * backgroundColor;                                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) SFRichText * suggestionText;                               //@synthesize suggestionText=_suggestionText - In the implementation block
@property (assign,nonatomic) BOOL isContact;                                            //@synthesize isContact=_isContact - In the implementation block
@property (nonatomic,copy) NSString * scopedSearchSectionBundleIdentifier;              //@synthesize scopedSearchSectionBundleIdentifier=_scopedSearchSectionBundleIdentifier - In the implementation block
@property (assign,nonatomic) int suggestionType;                                        //@synthesize suggestionType=_suggestionType - In the implementation block
@property (nonatomic,retain) SFRichText * detailText;                                   //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,retain) SFImage * thumbnail;                                       //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (assign,nonatomic) BOOL hideDivider; 
@property (nonatomic,retain) SFCard * nextCard; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * parameterKeyPaths; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,retain) SFUserReportRequest * userReportRequest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSData *)jsonData;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)setScopedSearchSectionBundleIdentifier:(NSString *)arg1 ;
-(SFRichText *)suggestionText;
-(NSString *)scopedSearchSectionBundleIdentifier;
-(BOOL)hasIsContact;
-(void)encodeWithCoder:(id)arg1 ;
-(SFImage *)thumbnail;
-(void)setSuggestionType:(int)arg1 ;
-(BOOL)hasSuggestionType;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)isContact;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setThumbnail:(SFImage *)arg1 ;
-(SFColor *)backgroundColor;
-(NSArray *)punchoutOptions;
-(NSString *)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setIsContact:(BOOL)arg1 ;
-(SFRichText *)detailText;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(void)setSuggestionText:(SFRichText *)arg1 ;
-(int)suggestionType;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDetailText:(SFRichText *)arg1 ;
@end
