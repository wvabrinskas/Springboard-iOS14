/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPGraphicObject.h>
#import <libobjc.A.dylib/CPDisposable.h>

@interface CPShape : CPGraphicObject <CPDisposable> {

	long long mcid;
	unsigned pdfObjectID;
	CGPathRef path;
	BOOL isUprightRectangle;
	int windingRule;
	double lineWidth;
	double miterLimit;
	int lineCap;
	int lineJoin;
	CGColorRef fillColor;
	CGColorRef strokeColor;
	CGPDFObjectRef fillObject;
	CGPDFObjectRef strokeObject;
	CGAffineTransform paintTransform;
	BOOL boundsComputed;
	BOOL renderedBoundsComputed;

}
-(void)setFillColor:(CGColorRef)arg1 ;
-(BOOL)isVisible;
-(void)setLineWidth:(double)arg1 ;
-(CGColorRef)fillColor;
-(void)setPath:(CGPathRef)arg1 ;
-(void)dispose;
-(long long)zOrder;
-(id)init;
-(long long)mcid;
-(int)lineCap;
-(void)finalize;
-(CGColorRef)strokeColor;
-(int)lineJoin;
-(void)setLineJoin:(int)arg1 ;
-(double)lineWidth;
-(double)miterLimit;
-(CGRect)bounds;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(void)setLineCap:(int)arg1 ;
-(void)accept:(id)arg1 ;
-(BOOL)hasFill;
-(void)setMiterLimit:(double)arg1 ;
-(CGPathRef)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)string;
-(id)attributes;
-(void)dealloc;
-(int)windingRule;
-(void)setWindingRule:(int)arg1 ;
-(id)initWithPDFShape:(CPPDFShape*)arg1 ;
-(void)addShape:(id)arg1 ;
-(CGRect)renderedBounds;
-(unsigned)pathElementCount;
-(void)recomputeRenderedBounds;
-(void)recomputeBounds;
-(BOOL)hasStroke;
-(BOOL)isUprightRectangle;
-(BOOL)hasSamePathAs:(id)arg1 ;
-(BOOL)isStrokeFor:(id)arg1 ;
-(CGPDFObjectRef)fillObject;
-(CGAffineTransform)paintTransform;
-(CGPDFObjectRef)strokeObject;
-(BOOL)canCombineWith:(id)arg1 ;
-(void)setFillObject:(CGPDFObjectRef)arg1 ;
-(void)setStrokeObject:(CGPDFObjectRef)arg1 ;
-(void)setPaintTransform:(CGAffineTransform)arg1 ;
-(unsigned)pdfObjectID;
-(void)setPdfObjectID:(unsigned)arg1 ;
-(CGRect)innerBounds;
-(void)makeLineFromVertex:(CGPoint)arg1 toVertex:(CGPoint)arg2 ;
@end

