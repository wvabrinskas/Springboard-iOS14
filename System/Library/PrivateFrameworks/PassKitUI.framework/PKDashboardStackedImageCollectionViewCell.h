/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UIImageView, UILabel, UIImage, NSString;

@interface PKDashboardStackedImageCollectionViewCell : PKDashboardCollectionViewCell {

	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _tertiaryLabel;
	UIImage* _icon;
	NSString* _title;
	NSString* _subtitle;
	NSString* _tertiaryText;

}

@property (nonatomic,retain) UIImage * icon;                     //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                  //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * tertiaryText;              //@synthesize tertiaryText=_tertiaryText - In the implementation block
-(double)_maxWidthForTransactionCellInWidth:(double)arg1 ;
-(double)_contentHeightWithWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)icon;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)tertiaryText;
-(void)setTertiaryText:(NSString *)arg1 ;
@end

