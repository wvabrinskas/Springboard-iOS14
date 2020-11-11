/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICAttachmentModel.h>

@class ICDrawingVersionedDocument, ICDrawing;

@interface ICAttachmentDrawingModel : ICAttachmentModel {

	ICDrawingVersionedDocument* _drawingDocument;
	BOOL _observingAttachment;

}

@property (assign,nonatomic) BOOL observingAttachment;              //@synthesize observingAttachment=_observingAttachment - In the implementation block
@property (nonatomic,readonly) ICDrawing * drawing; 
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)previewImageOrientation;
-(BOOL)mergeWithMergeableData:(id)arg1 ;
-(void)writeMergeableData;
-(void)attachmentIsDeallocating:(id)arg1 ;
-(BOOL)supportsQuickLook;
-(void)startObservingAttachment;
-(void)stopObservingAttachment:(id)arg1 ;
-(BOOL)observingAttachment;
-(id)drawingDocument;
-(void)setObservingAttachment:(BOOL)arg1 ;
-(void)drawingPreviewIsUpToDate;
-(ICDrawing *)drawing;
-(id)previewItemTitle;
-(id)previewItemURL;
-(id)saveURL;
-(CGAffineTransform)previewImageOrientationTransform;
-(id)previewImageURL;
-(BOOL)canSaveURL;
-(BOOL)hasPreviews;
-(BOOL)previewsSupportMultipleAppearances;
-(BOOL)preferLocalPreviewImages;
-(BOOL)shouldSyncPreviewImageToCloud:(id)arg1 ;
-(BOOL)showThumbnailInNoteList;
-(id)initWithAttachment:(id)arg1 ;
-(void)dealloc;
@end
