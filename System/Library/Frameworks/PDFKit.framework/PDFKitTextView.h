/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PDFKit/PDFKit-Structs.h>
#import <UIKit/UITextViewDelegate.h>

@class PDFKitTextViewPrivate, NSString;

@interface PDFKitTextView : NSObject <UITextViewDelegate> {

	PDFKitTextViewPrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)textView;
-(void)_setup;
-(BOOL)becomeFirstResponder;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)layer;
-(void)_setFont:(id)arg1 ;
-(void)_setAlignment:(long long)arg1 ;
-(void)removeFromSuperview;
-(void)textViewDidChange:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(id)annotation;
-(id)initWithAnnotation:(id)arg1 pdfPageView:(id)arg2 pdfView:(id)arg3 ;
-(void)_textWidgetDone;
-(void)_setString:(id)arg1 ;
-(void)_setFontColor:(id)arg1 ;
-(void)_setAttributedString:(id)arg1 ;
-(void)rotateByAngle:(double)arg1 ;
-(BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2 ;
@end
