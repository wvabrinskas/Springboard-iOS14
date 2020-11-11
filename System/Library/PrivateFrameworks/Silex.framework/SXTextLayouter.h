/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Silex/Silex-Structs.h>
@class SXTextSource, NSSet, SXTextTangierDocumentRoot, TSDLayoutController, SXTextTangierContainerInfo, NSArray;

@interface SXTextLayouter : NSObject {

	SXTextSource* _textSource;
	NSSet* _exclusionPaths;
	SXTextTangierDocumentRoot* _documentRoot;
	TSDLayoutController* _layoutController;
	SXTextTangierContainerInfo* _textInfo;

}

@property (nonatomic,retain) SXTextTangierDocumentRoot * documentRoot;              //@synthesize documentRoot=_documentRoot - In the implementation block
@property (nonatomic,retain) SXTextSource * textSource;                             //@synthesize textSource=_textSource - In the implementation block
@property (nonatomic,retain) NSSet * exclusionPaths;                                //@synthesize exclusionPaths=_exclusionPaths - In the implementation block
@property (nonatomic,retain) TSDLayoutController * layoutController;                //@synthesize layoutController=_layoutController - In the implementation block
@property (nonatomic,retain) SXTextTangierContainerInfo * textInfo;                 //@synthesize textInfo=_textInfo - In the implementation block
@property (nonatomic,readonly) NSArray * paragraphRanges; 
-(id)init;
-(CGRect)typographicBounds;
-(id)textLayout;
-(SXTextTangierDocumentRoot *)documentRoot;
-(void)reset;
-(NSSet *)exclusionPaths;
-(void)setExclusionPaths:(NSSet *)arg1 ;
-(SXTextTangierContainerInfo *)textInfo;
-(CGSize)boundingSize;
-(void)setTextInfo:(SXTextTangierContainerInfo *)arg1 ;
-(id)wpLayout;
-(void)invalidate;
-(double)calculateHeightForWidth:(double)arg1 ;
-(void)removeAllExclusionPaths;
-(void)addExclusionPath:(id)arg1 ;
-(TSDLayoutController *)layoutController;
-(SXTextSource *)textSource;
-(void)setTextSource:(SXTextSource *)arg1 ;
-(void)setDocumentRoot:(SXTextTangierDocumentRoot *)arg1 ;
-(NSArray *)paragraphRanges;
-(double)verticalLocationOfCharacterAtIndex:(unsigned long long)arg1 ;
-(id)wpStorage;
-(id)initWithTextSource:(id)arg1 andDocumentRoot:(id)arg2 ;
-(void)createTextInfoIfNeeded;
-(void)assignExclusionPaths;
-(NSRange)validAnchorRangeForRange:(NSRange)arg1 ;
-(id)exclusionPathIndexes;
-(double)baselineForLastLine;
-(id)firstColumn;
-(void)setLayoutController:(TSDLayoutController *)arg1 ;
@end
