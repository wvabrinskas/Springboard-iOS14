/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@protocol WFRunWorkflowFooterViewDelegate;
@class WFModulesQuickLookView, WFFloatingButton, UIStackView;

@interface WFRunWorkflowFooterView : UICollectionReusableView {

	id<WFRunWorkflowFooterViewDelegate> _delegate;
	WFModulesQuickLookView* _quickLookView;
	WFFloatingButton* _addButton;
	UIStackView* _stackView;

}

@property (nonatomic,retain) WFFloatingButton * addButton;                                     //@synthesize addButton=_addButton - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                          //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic,__weak) id<WFRunWorkflowFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFModulesQuickLookView * quickLookView;                         //@synthesize quickLookView=_quickLookView - In the implementation block
+(double)preferredAddButtonHeight;
+(double)preferredBottomPaddingHeight;
+(CGSize)preferredQuickLookViewSizeForTraitCollection:(id)arg1 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(WFFloatingButton *)addButton;
-(id<WFRunWorkflowFooterViewDelegate>)delegate;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)setAddButton:(WFFloatingButton *)arg1 ;
-(void)setDelegate:(id<WFRunWorkflowFooterViewDelegate>)arg1 ;
-(UIStackView *)stackView;
-(WFModulesQuickLookView *)quickLookView;
-(void)setQuickLookViewHidden:(BOOL)arg1 addButtonHidden:(BOOL)arg2 ;
-(void)updateAddButtonGradient;
-(void)didTapAddButton;
@end

