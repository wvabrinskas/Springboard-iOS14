/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MarkupViewControllerDelegate <NSObject>
@optional
-(id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
-(BOOL)controller:(id)arg1 shouldOpenLinkAtURL:(id)arg2;
-(void)controllerWantsToShowShareSheet:(id)arg1;
-(void)controller:(id)arg1 didChangeToPDFPageIndex:(unsigned long long)arg2;
-(void)controller:(id)arg1 didReadCGPDFDocument:(CGPDFDocumentRef)arg2;
-(UIEdgeInsets*)customEdgeInsets;
-(void)controller:(id)arg1 willWriteCGPDFDocument:(CGPDFDocumentRef)arg2 toContext:(CGContextRef)arg3;
-(UIEdgeInsets*)customSketchOverlayInsets;

@end

