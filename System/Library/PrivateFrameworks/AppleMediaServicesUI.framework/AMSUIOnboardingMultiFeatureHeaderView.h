/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UILabel, NSArray;

@interface AMSUIOnboardingMultiFeatureHeaderView : UIScrollView {

	BOOL _isPresentedInFormSheet;
	UILabel* _titleLabel;
	double _containerHeight;
	NSArray* _featureViews;

}

@property (nonatomic,retain) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSArray * featureViews;                   //@synthesize featureViews=_featureViews - In the implementation block
@property (assign,nonatomic) double containerHeight;                   //@synthesize containerHeight=_containerHeight - In the implementation block
@property (assign,nonatomic) BOOL isPresentedInFormSheet;              //@synthesize isPresentedInFormSheet=_isPresentedInFormSheet - In the implementation block
-(UILabel *)titleLabel;
-(id)initWithFeatures:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)updateContentSize;
-(void)setFrame:(CGRect)arg1 ;
-(double)containerHeight;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)adjustedContentInsetDidChange;
-(void)setContainerHeight:(double)arg1 ;
-(NSArray *)featureViews;
-(void)setFeatureViews:(NSArray *)arg1 ;
-(BOOL)isPresentedInFormSheet;
-(void)setIsPresentedInFormSheet:(BOOL)arg1 ;
@end

