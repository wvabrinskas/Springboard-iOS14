/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotoStreamAlbumTableViewCell.h>

@class UIImageView, UILabel, NSArray;

@interface PUPhotoStreamAlbumLargeTextTableViewCell : PUPhotoStreamAlbumTableViewCell {

	UIImageView* _albumImageView;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	NSArray* _currentConstraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                     //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) UIImageView * albumImageView;              //@synthesize albumImageView=_albumImageView - In the implementation block
@property (nonatomic,retain) NSArray * currentConstraints;              //@synthesize currentConstraints=_currentConstraints - In the implementation block
-(UILabel *)titleLabel;
-(void)setText:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCurrentConstraints:(NSArray *)arg1 ;
-(id)init;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)text;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didMoveToWindow;
-(UILabel *)detailLabel;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonPhotoStreamAlbumLargeTextTableViewCellInit;
-(UIImageView *)albumImageView;
-(void)setAlbumImageView:(UIImageView *)arg1 ;
-(id)detailText;
-(void)setDetailText:(id)arg1 ;
-(NSArray *)currentConstraints;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(void)updateConstraints;
@end
