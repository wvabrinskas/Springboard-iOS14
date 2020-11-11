/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ContentKit/ContentKit-Structs.h>
@class UIPrintPageRenderer;

@interface WFPageRenderer : NSObject {

	BOOL _matchInputSize;
	BOOL _includeMargin;
	UIPrintPageRenderer* _renderer;
	CGSize _inputSize;

}

@property (nonatomic,readonly) double margin; 
@property (nonatomic,readonly) UIPrintPageRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (assign,nonatomic) CGSize inputSize;                              //@synthesize inputSize=_inputSize - In the implementation block
@property (assign,nonatomic) BOOL matchInputSize;                           //@synthesize matchInputSize=_matchInputSize - In the implementation block
@property (assign,nonatomic) BOOL includeMargin;                            //@synthesize includeMargin=_includeMargin - In the implementation block
-(double)margin;
-(CGSize)inputSize;
-(CGSize)sizeForPageAtIndex:(long long)arg1 ;
-(UIPrintPageRenderer *)renderer;
-(void)setInputSize:(CGSize)arg1 ;
-(void)renderToPDF:(id)arg1 startingAtPage:(long long)arg2 endingAtPage:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_renderToPDF:(id)arg1 startingAtPage:(long long)arg2 endingAtPage:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)renderPDFPageIndex:(long long)arg1 pages:(long long)arg2 measuredIndicesByFormatter:(id)arg3 drawnIndicesByFormatter:(id)arg4 linkMetricsByWebView:(id)arg5 y:(double)arg6 paperSize:(CGSize)arg7 shouldDrawPageAtIndexHandler:(/*^block*/id)arg8 completionHandler:(/*^block*/id)arg9 ;
-(id)renderToImage;
-(void)updateRendererSize;
-(void)setMatchInputSize:(BOOL)arg1 ;
-(void)setIncludeMargin:(BOOL)arg1 ;
-(BOOL)matchInputSize;
-(BOOL)includeMargin;
@end
