/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBHFloatyFolderVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding> {

	double _continuousCornerRadius;
	double _titleFontSizeInPortrait;
	double _titleFontSizeInLandscape;
	double _titleHorizontalInset;
	double _pageControlAreaHeight;
	double _rubberBandIntervalForOverscroll;
	CGSize _contentBackgroundSize;
	CGSize _pageControlCustomPadding;

}

@property (assign,nonatomic) CGSize contentBackgroundSize;                        //@synthesize contentBackgroundSize=_contentBackgroundSize - In the implementation block
@property (assign,nonatomic) double continuousCornerRadius;                       //@synthesize continuousCornerRadius=_continuousCornerRadius - In the implementation block
@property (assign,nonatomic) double titleFontSizeInPortrait;                      //@synthesize titleFontSizeInPortrait=_titleFontSizeInPortrait - In the implementation block
@property (assign,nonatomic) double titleFontSizeInLandscape;                     //@synthesize titleFontSizeInLandscape=_titleFontSizeInLandscape - In the implementation block
@property (assign,nonatomic) double titleHorizontalInset;                         //@synthesize titleHorizontalInset=_titleHorizontalInset - In the implementation block
@property (assign,nonatomic) double pageControlAreaHeight;                        //@synthesize pageControlAreaHeight=_pageControlAreaHeight - In the implementation block
@property (assign,nonatomic) CGSize pageControlCustomPadding;                     //@synthesize pageControlCustomPadding=_pageControlCustomPadding - In the implementation block
@property (assign,nonatomic) double rubberBandIntervalForOverscroll;              //@synthesize rubberBandIntervalForOverscroll=_rubberBandIntervalForOverscroll - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTitleFontSizeInLandscape:(double)arg1 ;
-(id)succinctDescription;
-(double)pageControlAreaHeight;
-(void)setContentBackgroundSize:(CGSize)arg1 ;
-(void)setTitleFontSizeInPortrait:(double)arg1 ;
-(id)init;
-(CGSize)contentBackgroundSize;
-(unsigned long long)hash;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(double)titleFontSizeInPortrait;
-(double)rubberBandIntervalForOverscroll;
-(double)continuousCornerRadius;
-(CGSize)pageControlCustomPadding;
-(NSString *)description;
-(double)titleHorizontalInset;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPageControlAreaHeight:(double)arg1 ;
-(void)setPageControlCustomPadding:(CGSize)arg1 ;
-(void)setRubberBandIntervalForOverscroll:(double)arg1 ;
-(void)setTitleHorizontalInset:(double)arg1 ;
-(double)titleFontSizeInLandscape;
-(void)setTitleFontSizeInAllOrientations:(double)arg1 ;
-(void)setContinuousCornerRadius:(double)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
