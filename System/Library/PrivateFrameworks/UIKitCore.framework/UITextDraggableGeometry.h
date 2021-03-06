/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UITextDraggableGeometry <NSObject>
@property (assign,nonatomic) long long geometryOptions; 
@required
-(long long)geometryOptions;
-(/*^block*/id)targetedPreviewProviderForTextInRange:(NSRange)arg1 dismissing:(BOOL)arg2;
-(id)draggableObjectsForTextRange:(id)arg1;
-(id)textRangesForAttachmentsInTextRange:(id)arg1;
-(id)textRangeForAttachmentInTextRange:(id)arg1 atPoint:(CGPoint)arg2;
-(void)setGeometryOptions:(long long)arg1;
-(id)previewForDroppingTextInRange:(id)arg1 toPosition:(id)arg2 inContainerView:(id)arg3;

@end

