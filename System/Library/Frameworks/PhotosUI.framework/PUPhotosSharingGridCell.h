/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class PUPhotoView, UIView, PUPhotosZoomingSharingGridCell;

@interface PUPhotosSharingGridCell : UICollectionViewCell {

	PUPhotoView* _photoView;
	UIView* _highlightOverlayView;
	CGPoint _originalZoomPoint;
	CGPoint _lastZoomPoint;
	PUPhotosZoomingSharingGridCell* _zoomingCell;
	UIView* _zoomingCellSuperview;
	long long _currentImageRequestID;

}

@property (nonatomic,readonly) PUPhotoView * photoView;                    //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic) long long currentImageRequestID;              //@synthesize currentImageRequestID=_currentImageRequestID - In the implementation block
-(void)_updateHighlight;
-(long long)currentImageRequestID;
-(void)setCurrentImageRequestID:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateSubviewOrdering;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(PUPhotoView *)photoView;
-(void)setHighlighted:(BOOL)arg1 ;
@end
