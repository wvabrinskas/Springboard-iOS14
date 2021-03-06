/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Health/FeedItemPlugins/HighlightAlerts.healthplugin/HighlightAlerts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class NSString;

@interface HighlightAlerts.HighlightAlertsTileViewController : UIViewController {

	 context;
	 $__lazy_storage_$_typeImageView;
	 $__lazy_storage_$_bodyLabel;
	 $__lazy_storage_$_descriptionLabel;
	 $__lazy_storage_$_diagramImageView;
	 moreDetailsFont;
	 descriptionLabelConstraints;
	 descriptionBottomSpacingConstraint;
	 descriptionToDiagramSpacingConstraint;
	 diagramToBottomConstraints;
	 bodyLabelToDiagramSpacingConstraint;
	 bodyLabelToBottomSpacingConstraint;
	 bodyLabelAndIconHorizontalConstraints;
	 bodyLabelOnlyHorizontalConstraints;
	 bodyLabelVerticalConstraints;
	 viewModel;

}

@property (copy,nonatomic) NSString * title; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)updateViewConstraints;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)handleTap;
@end

