/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CarPlayUI/CarPlayUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UIFont, UILabel;

@interface CPUITitleView : UIView {

	NSLayoutConstraint* _badgeWidthConstraint;
	BOOL _explicitTrack;
	BOOL _shouldUseMusicExplicitGlyph;
	UIFont* _font;
	UILabel* _titleLabel;
	UILabel* _explicitLabel;

}

@property (nonatomic,retain) UILabel * explicitLabel;                                //@synthesize explicitLabel=_explicitLabel - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIFont * font;                                          //@synthesize font=_font - In the implementation block
@property (assign,getter=isExplicitTrack,nonatomic) BOOL explicitTrack;              //@synthesize explicitTrack=_explicitTrack - In the implementation block
@property (assign,nonatomic) BOOL shouldUseMusicExplicitGlyph;                       //@synthesize shouldUseMusicExplicitGlyph=_shouldUseMusicExplicitGlyph - In the implementation block
-(UILabel *)titleLabel;
-(void)setFont:(UIFont *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isExplicitTrack;
-(UIFont *)font;
-(void)setupConstraints;
-(void)setExplicitTrack:(BOOL)arg1 ;
-(void)updateConstraints;
-(id)_createLabelWithTextAlignment:(long long)arg1 ;
-(void)_updateExplicitTreatmentString;
-(UILabel *)explicitLabel;
-(void)setShouldUseMusicExplicitGlyph:(BOOL)arg1 ;
-(BOOL)shouldUseMusicExplicitGlyph;
-(void)setExplicitLabel:(UILabel *)arg1 ;
@end
