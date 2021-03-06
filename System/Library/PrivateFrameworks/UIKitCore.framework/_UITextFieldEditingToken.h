/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextFieldEditingToken.h>

@protocol _UITextFieldEditingToken <NSObject>
@required
-(BOOL)endEditing;

@end


@class _UICascadingTextStorage, NSArray, NSString;

@interface _UITextFieldEditingToken : NSObject <_UITextFieldEditingToken> {

	SCD_Struct_UI62 _flags;
	_UICascadingTextStorage* _textStorage;
	NSArray* _attributeNames;

}

@property (assign,nonatomic) BOOL restoreTextAttributes; 
@property (assign,nonatomic) BOOL restoreDefaultAttributes; 
@property (nonatomic,__weak,readonly) _UICascadingTextStorage * textStorage;              //@synthesize textStorage=_textStorage - In the implementation block
@property (nonatomic,readonly) NSArray * attributeNames;                                  //@synthesize attributeNames=_attributeNames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)attributeNames;
-(BOOL)endEditing;
-(_UICascadingTextStorage *)textStorage;
-(void)setRestoreTextAttributes:(BOOL)arg1 ;
-(id)initWithTextStorage:(id)arg1 attributeNames:(id)arg2 ;
-(void)setRestoreDefaultAttributes:(BOOL)arg1 ;
-(BOOL)restoreTextAttributes;
-(BOOL)restoreDefaultAttributes;
@end

