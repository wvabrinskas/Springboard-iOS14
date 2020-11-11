/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/AVTAvatarLibraryModelDelegate.h>

@protocol AVTAvatarLibraryViewControllerDelegate;
@class UICollectionView, UILongPressGestureRecognizer, AVTAvatarLibraryModel, _AVTAvatarRecordImageProvider, AVTUIEnvironment, NSString;

@interface AVTAvatarLibraryViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AVTAvatarLibraryModelDelegate> {

	id<AVTAvatarLibraryViewControllerDelegate> _delegate;
	UICollectionView* _collectionView;
	UILongPressGestureRecognizer* _longPressGesture;
	AVTAvatarLibraryModel* _model;
	_AVTAvatarRecordImageProvider* _imageProvider;
	AVTUIEnvironment* _environment;

}

@property (nonatomic,readonly) UICollectionView * collectionView;                                     //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * longPressGesture;                       //@synthesize longPressGesture=_longPressGesture - In the implementation block
@property (nonatomic,readonly) AVTAvatarLibraryModel * model;                                         //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) _AVTAvatarRecordImageProvider * imageProvider;                         //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                                        //@synthesize environment=_environment - In the implementation block
@property (assign,nonatomic,__weak) id<AVTAvatarLibraryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(AVTAvatarLibraryModel *)model;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id<AVTAvatarLibraryViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(id)initWithAvatarStore:(id)arg1 environment:(id)arg2 ;
-(void)setDelegate:(id<AVTAvatarLibraryViewControllerDelegate>)arg1 ;
-(UILongPressGestureRecognizer *)longPressGesture;
-(_AVTAvatarRecordImageProvider *)imageProvider;
-(void)presetEditorViewController:(id)arg1 ;
-(void)didAddRecord:(id)arg1 ;
-(void)didDeleteRecord:(id)arg1 ;
-(void)presentUIViewController:(id)arg1 forItem:(id)arg2 ;
-(void)insertItemsAtIndexes:(id)arg1 deleteItemsAtIndexes:(id)arg2 reloadItemsAtIndexes:(id)arg3 ;
-(void)didUpdateLibraryItems:(id)arg1 ;
-(void)didEditRecord:(id)arg1 ;
-(void)dismissController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewDidLoad;
-(AVTUIEnvironment *)environment;
-(void)didLongPress:(id)arg1 ;
-(id)initWithModel:(id)arg1 imageProvider:(id)arg2 environment:(id)arg3 ;
-(BOOL)shouldUseLargeLayout;
-(void)updateVisibleHeaders;
-(id)initWithAvatarStore:(id)arg1 ;
-(void)loadView;
-(void)didTapDoneButton:(id)arg1 ;
-(UICollectionView *)collectionView;
@end
