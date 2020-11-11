/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridActionSetListViewController.h>

@protocol HUSelectableGridActionSetListViewControllerDelegate;
@class HFMutableSetDiff;

@interface HUSelectableGridActionSetListViewController : HUGridActionSetListViewController {

	id<HUSelectableGridActionSetListViewControllerDelegate> _delegate;
	HFMutableSetDiff* _mutableSelectedActionSets;

}

@property (nonatomic,retain) HFMutableSetDiff * mutableSelectedActionSets;                                         //@synthesize mutableSelectedActionSets=_mutableSelectedActionSets - In the implementation block
@property (assign,nonatomic,__weak) id<HUSelectableGridActionSetListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(id)init;
-(id<HUSelectableGridActionSetListViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HUSelectableGridActionSetListViewControllerDelegate>)arg1 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2 ;
-(id)initWithRoom:(id)arg1 selectedActionSets:(id)arg2 ;
-(void)setMutableSelectedActionSets:(HFMutableSetDiff *)arg1 ;
-(void)_selectedItemStateChanged:(id)arg1 isSelected:(BOOL)arg2 accessoryViewCell:(id)arg3 ;
-(HFMutableSetDiff *)mutableSelectedActionSets;
-(void)_updateSelectionState:(BOOL)arg1 forCell:(id)arg2 ;
-(void)selectedActionSetStateChanged:(id)arg1 isSelected:(BOOL)arg2 ;
@end
