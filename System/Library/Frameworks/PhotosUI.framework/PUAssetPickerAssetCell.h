/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/PUAssetPickerAsyncImageCell.h>

@class NSUUID, UIImageView, PXUIOverlayBadgesView, NSNumber, UILayoutGuide, UIView, PUProgressIndicatorView, NSString;

@interface PUAssetPickerAssetCell : UICollectionViewCell <PUAssetPickerAsyncImageCell> {

	int _imageRequestID;
	NSUUID* _asyncRequestID;
	UIImageView* _imageView;
	PXUIOverlayBadgesView* _badgesView;
	NSNumber* _progress;
	UILayoutGuide* _cellLayoutMarginsGuide;
	UIView* _overlayView;
	UIView* _highlightView;
	UIView* _selectedView;
	UIView* _badgesBackgroundView;
	PUProgressIndicatorView* _progressView;

}

@property (nonatomic,readonly) UILayoutGuide * cellLayoutMarginsGuide;              //@synthesize cellLayoutMarginsGuide=_cellLayoutMarginsGuide - In the implementation block
@property (nonatomic,readonly) UIView * overlayView;                                //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,readonly) UIView * highlightView;                              //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,readonly) UIView * selectedView;                               //@synthesize selectedView=_selectedView - In the implementation block
@property (nonatomic,readonly) UIView * badgesBackgroundView;                       //@synthesize badgesBackgroundView=_badgesBackgroundView - In the implementation block
@property (nonatomic,retain) PUProgressIndicatorView * progressView;                //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,readonly) PXUIOverlayBadgesView * badgesView;                  //@synthesize badgesView=_badgesView - In the implementation block
@property (assign,nonatomic) BOOL isAssetSelected; 
@property (nonatomic,retain) NSNumber * progress;                                   //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) NSUUID * asyncRequestID;                               //@synthesize asyncRequestID=_asyncRequestID - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                             //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) int imageRequestID;                                    //@synthesize imageRequestID=_imageRequestID - In the implementation block
@property (nonatomic,readonly) CGSize imageRequestSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)highlightView;
-(UIView *)overlayView;
-(void)setProgressView:(PUProgressIndicatorView *)arg1 ;
-(NSNumber *)progress;
-(UIImageView *)imageView;
-(PXUIOverlayBadgesView *)badgesView;
-(PUProgressIndicatorView *)progressView;
-(NSUUID *)asyncRequestID;
-(void)setAsyncRequestID:(NSUUID *)arg1 ;
-(int)imageRequestID;
-(void)setImageRequestID:(int)arg1 ;
-(CGSize)imageRequestSize;
-(void)setIsAssetSelected:(BOOL)arg1 ;
-(BOOL)isAssetSelected;
-(UILayoutGuide *)cellLayoutMarginsGuide;
-(UIView *)selectedView;
-(UIView *)badgesBackgroundView;
-(void)prepareForReuse;
-(void)setProgress:(NSNumber *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

