/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class PXCMMPosterHeaderViewSpec, PXCMMImageView, PXGradientView, UILabel, UIImageView, PXCMMPosterHeaderViewModel, NSString;

@interface PXCMMPosterHeaderView : UIView <PXChangeObserver> {

	PXCMMPosterHeaderViewSpec* _spec;
	PXCMMImageView* _imageView;
	PXGradientView* _topGradientView;
	PXGradientView* _bottomGradientView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _statusLabel;
	UIImageView* _statusCheckmark;
	PXCMMPosterHeaderViewModel* _viewModel;
	long long _presentationStyle;

}

@property (nonatomic,readonly) long long presentationStyle;                       //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,retain) PXCMMPosterHeaderViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeightForWidth:(double)arg1 traitCollection:(id)arg2 screen:(id)arg3 ;
+(void)preheatSharedValuesForPresentationStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(PXCMMPosterHeaderViewModel *)viewModel;
-(id)init;
-(void)setViewModel:(PXCMMPosterHeaderViewModel *)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(long long)presentationStyle;
-(void)_updateTitle;
-(void)_updateFonts;
-(void)_updateStatusString;
-(void)layoutSubviews;
-(void)_updateSubtitle;
-(void)_performLayoutWithSize:(CGSize)arg1 ;
-(id)test_subtitle;
-(id)test_statusString;
-(BOOL)test_showStatusCheckmark;
-(id)initWithCoder:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)initWithPresentationStyle:(long long)arg1 ;
-(id)test_title;
@end
