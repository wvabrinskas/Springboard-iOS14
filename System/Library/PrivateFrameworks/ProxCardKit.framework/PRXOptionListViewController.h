/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <ProxCardKit/PRXCardContentViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@class NSArray, UICollectionView, NSString;

@interface PRXOptionListViewController : PRXCardContentViewController <UICollectionViewDelegate, UICollectionViewDataSource> {

	NSArray* _options;
	/*^block*/id _formatterBlock;
	/*^block*/id _selectionHandler;
	UICollectionView* _collectionView;

}

@property (nonatomic,copy) NSArray * options;                                  //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id formatterBlock;                                  //@synthesize formatterBlock=_formatterBlock - In the implementation block
@property (nonatomic,copy) NSArray * selectedOptions; 
@property (nonatomic,copy) id selectionHandler;                                //@synthesize selectionHandler=_selectionHandler - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)initWithContentView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setOptions:(NSArray *)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)viewDidLayoutSubviews;
-(NSArray *)options;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(id)formatterBlock;
-(void)viewLayoutMarginsDidChange;
-(id)selectionHandler;
-(void)setSelectionHandler:(id)arg1 ;
-(UICollectionView *)collectionView;
-(void)setSelectedOptions:(NSArray *)arg1 ;
-(NSArray *)selectedOptions;
-(void)_createCollectionViewLayout;
-(void)setFormatterBlock:(id)arg1 ;
@end

