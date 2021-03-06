/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIListCollectionViewCell.h>

@class VUIImageView, NSString, VUILabel, VUISeparatorView;

@interface VUILibraryMenuItemViewCell : VUIListCollectionViewCell {

	VUIImageView* _imageView;
	BOOL _hideChevron;
	BOOL _shouldAppearAsHeader;
	NSString* _title;
	NSString* _imageName;
	VUILabel* _titleLabel;
	VUISeparatorView* _topSeparatorView;
	VUISeparatorView* _bottomSeparatorView;

}

@property (nonatomic,retain) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * imageName;                                  //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,readonly) VUILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUISeparatorView * topSeparatorView;                   //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,readonly) VUISeparatorView * bottomSeparatorView;              //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
@property (assign,nonatomic) BOOL hideChevron;                                      //@synthesize hideChevron=_hideChevron - In the implementation block
@property (assign,nonatomic) BOOL shouldAppearAsHeader;                             //@synthesize shouldAppearAsHeader=_shouldAppearAsHeader - In the implementation block
-(VUILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(VUISeparatorView *)topSeparatorView;
-(VUISeparatorView *)bottomSeparatorView;
-(void)layoutSubviews;
-(NSString *)imageName;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setTopSeparatorView:(VUISeparatorView *)arg1 ;
-(void)setHideChevron:(BOOL)arg1 ;
-(void)setShouldAppearAsHeader:(BOOL)arg1 ;
-(BOOL)hideChevron;
-(BOOL)shouldAppearAsHeader;
@end

