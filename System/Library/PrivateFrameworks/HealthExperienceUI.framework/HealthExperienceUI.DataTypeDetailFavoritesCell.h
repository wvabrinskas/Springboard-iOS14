/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthExperienceUI/HealthExperienceUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/WDFavoriteDisplayTypesControllerObserver.h>

@class _TtC18HealthExperienceUI11PlatterView, UILabel, UIButton;

@interface HealthExperienceUI.DataTypeDetailFavoritesCell : UICollectionViewCell <WDFavoriteDisplayTypesControllerObserver> {

	 platterView;
	 titleLabel;
	 favoriteButton;
	 favoritesController;
	 parentViewController;
	 item;

}

@property (assign,__weak,nonatomic) _TtC18HealthExperienceUI11PlatterView * platterView; 
@property (assign,__weak,nonatomic) UILabel * titleLabel; 
@property (assign,__weak,nonatomic) UIButton * favoriteButton; 
@property (assign,nonatomic) BOOL highlighted; 
-(void)favoriteButtonToggled:(id)arg1 ;
-(void)favoriteDisplayTypesControllerReady:(id)arg1 ;
-(void)favoriteDisplayTypesControllerDidUpdate:(id)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(_TtC18HealthExperienceUI11PlatterView *)platterView;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)favoriteButton;
-(void)setFavoriteButton:(UIButton *)arg1 ;
-(BOOL)isHighlighted;
-(void)setPlatterView:(_TtC18HealthExperienceUI11PlatterView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)awakeFromNib;
-(void)setHighlighted:(BOOL)arg1 ;
@end
