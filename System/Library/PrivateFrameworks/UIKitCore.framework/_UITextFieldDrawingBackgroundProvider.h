/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextFieldBackgroundProvider.h>

@interface _UITextFieldDrawingBackgroundProvider : _UITextFieldBackgroundProvider {

	SCD_Struct_UI34 _flags;
	BOOL _drawsContent;

}

@property (assign,nonatomic) BOOL drawsContent;              //@synthesize drawsContent=_drawsContent - In the implementation block
-(void)setNeedsDisplay;
-(id)init;
-(void)_setDrawsContent:(BOOL)arg1 ;
-(void)setDrawsContent:(BOOL)arg1 ;
-(void)setDrawsContentBasedOnTraitsIfNeeded;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)drawInBounds:(CGRect)arg1 ;
-(BOOL)drawsContent;
-(void)addToTextField:(id)arg1 ;
-(void)removeFromTextField;
-(void)_buildDescription:(id)arg1 ;
@end

