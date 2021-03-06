/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NotesUI/NotesUI-Structs.h>
#import <NotesUI/ICTextAttachment.h>

@interface ICTableTextAttachment : ICTextAttachment {

	double _lastAvailableWidth;
	CGSize _lastAttachmentSize;

}

@property (assign,nonatomic) double lastAvailableWidth;              //@synthesize lastAvailableWidth=_lastAvailableWidth - In the implementation block
@property (assign,nonatomic) CGSize lastAttachmentSize;              //@synthesize lastAttachmentSize=_lastAttachmentSize - In the implementation block
-(SCD_Struct_IC0)attachmentBoundsMargins;
-(BOOL)canDragWithoutSelecting;
-(void)fixAttachmentForAttributedString:(id)arg1 range:(NSRange)arg2 forPlainText:(BOOL)arg3 forStandardizedText:(BOOL)arg4 ;
-(id)printableTextContentForAppearanceType:(unsigned long long)arg1 ;
-(double)lastAvailableWidth;
-(void)setLastAvailableWidth:(double)arg1 ;
-(CGSize)lastAttachmentSize;
-(void)setLastAttachmentSize:(CGSize)arg1 ;
@end

