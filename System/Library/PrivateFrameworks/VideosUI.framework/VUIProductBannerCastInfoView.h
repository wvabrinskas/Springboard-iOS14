/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUICastInfoLayout, IKViewElement, NSArray;

@interface VUIProductBannerCastInfoView : UIView {

	VUICastInfoLayout* _layout;
	IKViewElement* _viewElement;
	NSArray* _labels;

}

@property (nonatomic,retain) VUICastInfoLayout * layout;               //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) NSArray * labels;                         //@synthesize labels=_labels - In the implementation block
+(id)configureViewWithItems:(id)arg1 existingView:(id)arg2 ;
-(NSArray *)labels;
-(void)setLayout:(VUICastInfoLayout *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateTextColor;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLabels:(NSArray *)arg1 ;
-(VUICastInfoLayout *)layout;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(CGSize)_layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
@end

