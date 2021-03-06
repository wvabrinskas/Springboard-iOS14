/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, NSLayoutConstraint;

@interface PUAssetPickerHeaderView : UICollectionReusableView {

	UILabel* _label;
	double _sideMargins;
	NSLayoutConstraint* _labelLeadingConstraint;
	NSLayoutConstraint* _labelTrailingConstraint;

}

@property (nonatomic,readonly) NSLayoutConstraint * labelLeadingConstraint;               //@synthesize labelLeadingConstraint=_labelLeadingConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * labelTrailingConstraint;              //@synthesize labelTrailingConstraint=_labelTrailingConstraint - In the implementation block
@property (nonatomic,retain) UILabel * label;                                             //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) double sideMargins;                                          //@synthesize sideMargins=_sideMargins - In the implementation block
+(id)kind;
+(id)identifier;
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSLayoutConstraint *)labelLeadingConstraint;
-(NSLayoutConstraint *)labelTrailingConstraint;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setSideMargins:(double)arg1 ;
-(double)sideMargins;
@end

