/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>

@interface NewsUI2.TagFeedViewController : UIViewController <UICollectionViewDelegate> {

	 feedDescriptor;
	 styler;
	 eventHandler;
	 blueprintViewController;
	 commands;
	 refreshStateMachine;
	 refreshControl;
	 sharingActivityProviderFactory;

}
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didPullToRefreshWithSender:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end
