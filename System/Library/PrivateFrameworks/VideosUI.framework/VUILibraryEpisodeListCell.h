/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIListCollectionViewCell.h>

@protocol VUIMediaEntityAssetController;
@class NSString, VUILibraryEpisodeFrameView, VUISeparatorView, UIStackView, VUILabel, VUIDownloadButton, NSObject, VUIMediaItem;

@interface VUILibraryEpisodeListCell : VUIListCollectionViewCell {

	NSString* _title;
	NSString* _releaseDate;
	NSString* _duration;
	VUILibraryEpisodeFrameView* _imageFrameView;
	VUISeparatorView* _separatorView;
	UIStackView* _episodeInfoStackView;
	VUILabel* _titleLabel;
	VUILabel* _releaseDateLabel;
	VUILabel* _durationLabel;
	VUIDownloadButton* _downloadButton;
	VUILabel* _dotSeparatorLabel;
	NSObject*<VUIMediaEntityAssetController> _assetController;
	VUIMediaItem* _mediaItem;

}

@property (nonatomic,retain) VUILibraryEpisodeFrameView * imageFrameView;                           //@synthesize imageFrameView=_imageFrameView - In the implementation block
@property (nonatomic,retain) VUISeparatorView * separatorView;                                      //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) UIStackView * episodeInfoStackView;                                    //@synthesize episodeInfoStackView=_episodeInfoStackView - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * releaseDateLabel;                                           //@synthesize releaseDateLabel=_releaseDateLabel - In the implementation block
@property (nonatomic,retain) VUILabel * durationLabel;                                              //@synthesize durationLabel=_durationLabel - In the implementation block
@property (nonatomic,retain) VUIDownloadButton * downloadButton;                                    //@synthesize downloadButton=_downloadButton - In the implementation block
@property (nonatomic,retain) VUILabel * dotSeparatorLabel;                                          //@synthesize dotSeparatorLabel=_dotSeparatorLabel - In the implementation block
@property (nonatomic,retain) NSObject*<VUIMediaEntityAssetController> assetController;              //@synthesize assetController=_assetController - In the implementation block
@property (nonatomic,retain) VUIMediaItem * mediaItem;                                              //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,copy) NSString * title;                                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * releaseDate;                                                  //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,copy) NSString * duration;                                                     //@synthesize duration=_duration - In the implementation block
+(void)configureVUILibraryEpisodeListCell:(id)arg1 withMedia:(id)arg2 andAssetController:(id)arg3 ;
+(id)_metadataLabelWithString:(id)arg1 existingLabel:(id)arg2 ;
-(VUILabel *)titleLabel;
-(NSString *)releaseDate;
-(void)setReleaseDate:(NSString *)arg1 ;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(VUISeparatorView *)separatorView;
-(void)setDuration:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(VUIDownloadButton *)downloadButton;
-(void)setDurationLabel:(VUILabel *)arg1 ;
-(VUILabel *)durationLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)setMediaItem:(VUIMediaItem *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)duration;
-(VUIMediaItem *)mediaItem;
-(NSObject*<VUIMediaEntityAssetController>)assetController;
-(void)setAssetController:(NSObject*<VUIMediaEntityAssetController>)arg1 ;
-(VUILibraryEpisodeFrameView *)imageFrameView;
-(void)setImageFrameView:(VUILibraryEpisodeFrameView *)arg1 ;
-(void)_addDownloadButtonIfRequired:(id)arg1 ;
-(void)_configureDotSeparator;
-(BOOL)_contentSizeCategoryIsAccessibility;
-(void)setDownloadButton:(VUIDownloadButton *)arg1 ;
-(double)_metadataHeightToBaselineNonAXContentSizeCategory;
-(double)_metadataScaledTopMarginForNonAXContentSizeCategory;
-(UIStackView *)episodeInfoStackView;
-(void)setEpisodeInfoStackView:(UIStackView *)arg1 ;
-(VUILabel *)releaseDateLabel;
-(void)setReleaseDateLabel:(VUILabel *)arg1 ;
-(VUILabel *)dotSeparatorLabel;
-(void)setDotSeparatorLabel:(VUILabel *)arg1 ;
@end

