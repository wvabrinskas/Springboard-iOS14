/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFCompactThumbnailViewControllerDelegate.h>

@protocol WFCompactContentPreviewViewControllerDelegate;
@class WFContentItem, UIActivityIndicatorView, WFCompactThumbnailViewController, UIView, NSString;

@interface WFCompactContentPreviewViewController : UIViewController <WFCompactThumbnailViewControllerDelegate> {

	WFContentItem* _contentItem;
	id<WFCompactContentPreviewViewControllerDelegate> _delegate;
	UIActivityIndicatorView* _indicatorView;
	WFCompactThumbnailViewController* _thumbnailViewController;

}

@property (assign,nonatomic,__weak) UIActivityIndicatorView * indicatorView;                                 //@synthesize indicatorView=_indicatorView - In the implementation block
@property (nonatomic,retain) WFCompactThumbnailViewController * thumbnailViewController;                     //@synthesize thumbnailViewController=_thumbnailViewController - In the implementation block
@property (nonatomic,retain) WFContentItem * contentItem;                                                    //@synthesize contentItem=_contentItem - In the implementation block
@property (assign,nonatomic,__weak) id<WFCompactContentPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * sourceViewForQuickLook; 
@property (nonatomic,readonly) BOOL contentAllowsScrolling; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFCompactContentPreviewViewControllerDelegate>)delegate;
-(WFContentItem *)contentItem;
-(void)viewDidLayoutSubviews;
-(void)setDelegate:(id<WFCompactContentPreviewViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)loadView;
-(double)contentHeightForWidth:(double)arg1 ;
-(void)setContentItem:(WFContentItem *)arg1 ;
-(UIActivityIndicatorView *)indicatorView;
-(void)setIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(WFCompactThumbnailViewController *)thumbnailViewController;
-(void)setThumbnailViewController:(WFCompactThumbnailViewController *)arg1 ;
-(void)invalidateContentSize;
-(void)thumbnailViewControllerDidInvalidateSize:(id)arg1 ;
-(UIView *)sourceViewForQuickLook;
-(BOOL)contentAllowsScrolling;
-(void)getThumbnailViewControllerForContentItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_fileThumbnailViewControllerForContentItem:(id)arg1 ;
-(void)_getTypeSpecificThumbnailViewControllerForContentItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
