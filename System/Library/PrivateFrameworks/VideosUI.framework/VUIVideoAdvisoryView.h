/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIVideoAdvisoryViewLayout, _TVImageView, UIView, NSArray;

@interface VUIVideoAdvisoryView : UIView {

	VUIVideoAdvisoryViewLayout* _layout;
	_TVImageView* _logoImageView;
	UIView* _dividerView;
	NSArray* _legendViews;

}

@property (nonatomic,retain) VUIVideoAdvisoryViewLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) _TVImageView * logoImageView;                     //@synthesize logoImageView=_logoImageView - In the implementation block
@property (nonatomic,retain) UIView * dividerView;                             //@synthesize dividerView=_dividerView - In the implementation block
@property (nonatomic,copy) NSArray * legendViews;                              //@synthesize legendViews=_legendViews - In the implementation block
-(UIEdgeInsets)_margin;
-(BOOL)_isPortrait;
-(void)setLayout:(VUIVideoAdvisoryViewLayout *)arg1 ;
-(void)setLogoImageView:(_TVImageView *)arg1 ;
-(_TVImageView *)logoImageView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(VUIVideoAdvisoryViewLayout *)layout;
-(UIView *)dividerView;
-(void)setDividerView:(UIView *)arg1 ;
-(CGSize)_logoSize;
-(void)_configureSubviewsWithDictionary:(id)arg1 ;
-(void)_showAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hideAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(CGSize)_dividerSize;
-(UIEdgeInsets)_logoMargin;
-(UIEdgeInsets)_dividerMargin;
-(void)_showWithAnimationWithCompletion:(/*^block*/id)arg1 ;
-(void)_hideWithAnimationWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithAdvisoryInfoDictionary:(id)arg1 ;
-(void)show:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(CGSize)_legendSize;
-(UIEdgeInsets)_legendsMargin;
-(NSArray *)legendViews;
-(void)setLegendViews:(NSArray *)arg1 ;
@end
