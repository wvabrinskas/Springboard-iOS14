/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIPrintPageRenderer;

@interface UIPrintFormatter : NSObject <NSCopying> {

	BOOL _needsRecalc;
	BOOL _imagePDFAnnotations;
	UIPrintPageRenderer* _printPageRenderer;
	double _maximumContentHeight;
	double _maximumContentWidth;
	long long _startPage;
	long long _pageCount;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _perPageContentInsets;

}

@property (assign,nonatomic,__weak) UIPrintPageRenderer * printPageRenderer;              //@synthesize printPageRenderer=_printPageRenderer - In the implementation block
@property (assign,nonatomic) BOOL imagePDFAnnotations;                                    //@synthesize imagePDFAnnotations=_imagePDFAnnotations - In the implementation block
@property (assign,nonatomic) double maximumContentHeight;                                 //@synthesize maximumContentHeight=_maximumContentHeight - In the implementation block
@property (assign,nonatomic) double maximumContentWidth;                                  //@synthesize maximumContentWidth=_maximumContentWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                  //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets perPageContentInsets;                           //@synthesize perPageContentInsets=_perPageContentInsets - In the implementation block
@property (assign,nonatomic) long long startPage;                                         //@synthesize startPage=_startPage - In the implementation block
@property (nonatomic,readonly) long long pageCount;                                       //@synthesize pageCount=_pageCount - In the implementation block
-(void)_setNeedsRecalc;
-(id)init;
-(void)removeFromPrintPageRenderer;
-(CGRect)_pageContentRect:(BOOL)arg1 ;
-(void)_recalcIfNecessary;
-(long long)_recalcPageCount;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(BOOL)imagePDFAnnotations;
-(UIEdgeInsets)contentInsets;
-(long long)pageCount;
-(void)setImagePDFAnnotations:(BOOL)arg1 ;
-(void)setStartPage:(long long)arg1 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setMaximumContentWidth:(double)arg1 ;
-(void)setMaximumContentHeight:(double)arg1 ;
-(UIPrintPageRenderer *)printPageRenderer;
-(void)setPerPageContentInsets:(UIEdgeInsets)arg1 ;
-(void)setPrintPageRenderer:(UIPrintPageRenderer *)arg1 ;
-(double)maximumContentHeight;
-(double)maximumContentWidth;
-(UIEdgeInsets)perPageContentInsets;
-(long long)startPage;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

