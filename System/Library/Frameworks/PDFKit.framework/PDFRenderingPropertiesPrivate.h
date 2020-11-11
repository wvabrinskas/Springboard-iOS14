/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PDFKit/PDFKit-Structs.h>
@class PDFView, PDFLayerController, UIColor;

@interface PDFRenderingPropertiesPrivate : NSObject {

	PDFView* pdfView;
	PDFLayerController* pdfLayerController;
	long long displayBox;
	BOOL shouldAntiAlias;
	double greekingThreshold;
	long long interpolationQuality;
	double lineWidthThreshold;
	UIColor* pageColor;
	BOOL enablePageShadows;
	BOOL enableTileEdgeColoring;
	BOOL enableAccessibilityDrawing;
	double screenScaleFactor;
	BOOL enableTileUpdates;
	BOOL enableBackgroundImages;
	BOOL isUsingPDFExtensionView;
	CGColorSpaceRef deviceColorSpace;

}
@end
