/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/AVTNotifyingContainerViewDelegate.h>
#import <libobjc.A.dylib/AVTStickerCollectionViewCellDelegate.h>
#import <libobjc.A.dylib/AVTObjectViewController.h>

@protocol AVTPresenterDelegate, AVTStickerSheetControllerDelegate, AVTStickerDisclosureValidationDelegate, AVTStickerTaskScheduler;
@class UIView, UICollectionView, AVTStickerSheetModel, UIImage, NSString;

@interface AVTStickerSheetController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTNotifyingContainerViewDelegate, AVTStickerCollectionViewCellDelegate, AVTObjectViewController> {

	BOOL _allowsPeel;
	BOOL _isPageVisible;
	BOOL _areAllStickersRendered;
	BOOL _showPrereleaseSticker;
	id<AVTPresenterDelegate> presenterDelegate;
	id<AVTStickerSheetControllerDelegate> _delegate;
	id<AVTStickerDisclosureValidationDelegate> _disclosureValidationDelegate;
	UIView* _view;
	UICollectionView* _collectionView;
	AVTStickerSheetModel* _model;
	UIImage* _placeholderImage;
	id<AVTStickerTaskScheduler> _taskScheduler;
	UIEdgeInsets _sectionInsets;

}

@property (nonatomic,retain) UIView * view;                                                                               //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                                           //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) BOOL isPageVisible;                                                                          //@synthesize isPageVisible=_isPageVisible - In the implementation block
@property (assign,nonatomic) BOOL areAllStickersRendered;                                                                 //@synthesize areAllStickersRendered=_areAllStickersRendered - In the implementation block
@property (nonatomic,retain) AVTStickerSheetModel * model;                                                                //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                                                  //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,readonly) id<AVTStickerTaskScheduler> taskScheduler;                                                 //@synthesize taskScheduler=_taskScheduler - In the implementation block
@property (assign,nonatomic) BOOL showPrereleaseSticker;                                                                  //@synthesize showPrereleaseSticker=_showPrereleaseSticker - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInsets;                                                                  //@synthesize sectionInsets=_sectionInsets - In the implementation block
@property (assign,nonatomic,__weak) id<AVTStickerSheetControllerDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate;              //@synthesize disclosureValidationDelegate=_disclosureValidationDelegate - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarRecord> avatarRecord; 
@property (nonatomic,readonly) BOOL allowsPeel;                                                                           //@synthesize allowsPeel=_allowsPeel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AVTPresenterDelegate> presenterDelegate; 
-(double)topPadding;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(AVTStickerSheetModel *)model;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(double)numberOfItemsPerRow;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id<AVTAvatarRecord>)avatarRecord;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id<AVTStickerSheetControllerDelegate>)delegate;
-(UIView *)view;
-(void)setIsPageVisible:(BOOL)arg1 ;
-(void)discardStickerItems;
-(BOOL)isPageVisible;
-(BOOL)areAllStickersRendered;
-(void)startAllSchedulerTasksExcludingVisibleIndexPaths:(id)arg1 ;
-(void)updateItem:(id)arg1 withStickerResource:(id)arg2 reloadCell:(BOOL)arg3 ;
-(void)scheduleSheetStickerTask:(/*^block*/id)arg1 withIndexPath:(id)arg2 ;
-(void)clearStickerRendererIfNeeded;
-(void)reloadCollectionViewItemForStickerItem:(id)arg1 ;
-(BOOL)allowsPeel;
-(id<AVTStickerDisclosureValidationDelegate>)disclosureValidationDelegate;
-(void)setDisclosureValidationDelegate:(id<AVTStickerDisclosureValidationDelegate>)arg1 ;
-(BOOL)showPrereleaseSticker;
-(void)setShowPrereleaseSticker:(BOOL)arg1 ;
-(void)scheduleSheetPlaceholderTask:(/*^block*/id)arg1 ;
-(CGPoint)maxedContentOffset:(CGPoint)arg1 ;
-(CGSize)minimumContentSizeForSize:(CGSize)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)notifyingContainerViewWillChangeSize:(CGSize)arg1 ;
-(void)notifyingContainerViewDidChangeSize:(CGSize)arg1 ;
-(void)stickerCellDidTapSticker:(id)arg1 ;
-(void)stickerCellDidPeelSticker:(id)arg1 ;
-(void)setSectionInsets:(UIEdgeInsets)arg1 ;
-(void)sheetDidDisappear;
-(id)initWithStickerSheetModel:(id)arg1 taskScheduler:(id)arg2 allowsPeel:(BOOL)arg3 ;
-(void)sheetWillAppear;
-(void)startAllSchedulerTasks;
-(id)firstStickerView;
-(void)setAreAllStickersRendered:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(UIEdgeInsets)sectionInsets;
-(void)setPresenterDelegate:(id<AVTPresenterDelegate>)arg1 ;
-(id<AVTPresenterDelegate>)presenterDelegate;
-(void)setDelegate:(id<AVTStickerSheetControllerDelegate>)arg1 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)setModel:(AVTStickerSheetModel *)arg1 ;
-(UIImage *)placeholderImage;
-(void)scrollToContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(id<AVTStickerTaskScheduler>)taskScheduler;
-(/*^block*/id)placeholderProvider;
-(void)loadView;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)dealloc;
@end
