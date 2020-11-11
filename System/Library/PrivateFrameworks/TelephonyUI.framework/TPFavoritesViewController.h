/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>

@class TPFavoritesController, UIView, NSArray, CNContactFormatter, NSIndexSet;

@interface TPFavoritesViewController : UICollectionViewController {

	BOOL _contentUnavailable;
	TPFavoritesController* _favoritesController;
	UIView* _contentUnavailableView;
	NSArray* _favoritesEntries;
	CNContactFormatter* _contactFormatter;
	NSIndexSet* _sections;

}

@property (nonatomic,retain) CNContactFormatter * contactFormatter;                      //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,retain) NSIndexSet * sections;                                      //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) BOOL contentUnavailable;                                    //@synthesize contentUnavailable=_contentUnavailable - In the implementation block
@property (nonatomic,retain) UIView * contentUnavailableView;                            //@synthesize contentUnavailableView=_contentUnavailableView - In the implementation block
@property (nonatomic,readonly) TPFavoritesController * favoritesController;              //@synthesize favoritesController=_favoritesController - In the implementation block
@property (nonatomic,copy) NSArray * favoritesEntries;                                   //@synthesize favoritesEntries=_favoritesEntries - In the implementation block
+(id)avatarViewControllerSettings;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setSections:(NSIndexSet *)arg1 ;
-(NSIndexSet *)sections;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)init;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)commonInit;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setFavoritesEntries:(NSArray *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)relayoutCollectionView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIView *)contentUnavailableView;
-(void)setContentUnavailableView:(UIView *)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CNContactFormatter *)contactFormatter;
-(NSArray *)favoritesEntries;
-(void)dealloc;
-(void)handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)handleFavoritesControllerFavoritesEntriesDidChangeNotification:(id)arg1 ;
-(void)setContentUnavailable:(BOOL)arg1 animated:(BOOL)arg2 ;
-(TPFavoritesController *)favoritesController;
-(void)setFavoritesEntries:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setContentUnavailable:(BOOL)arg1 ;
-(void)refreshView;
-(void)postCNContactsClientDidDisplayFavoritesNotification;
-(id)favoritesEntryAtIndex:(long long)arg1 ;
-(BOOL)useAccessibileLayout;
-(CGSize)accessibleCellSizeFor:(id)arg1 layout:(id)arg2 ;
-(CGSize)cellSizeFor:(id)arg1 layout:(id)arg2 ;
-(id)cellHeightToFitWidgetContainedCollectionView:(id)arg1 layout:(id)arg2 ;
-(void)refreshViewAnimated:(BOOL)arg1 ;
-(void)setFavoritesController:(TPFavoritesController *)arg1 ;
-(BOOL)contentUnavailable;
@end
