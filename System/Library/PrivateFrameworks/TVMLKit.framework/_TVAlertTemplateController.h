/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <TVMLKit/_TVCollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@class IKViewElement, _TVCollectionView, NSArray, IKImageElement, NSIndexPath, NSString;

@interface _TVAlertTemplateController : _TVBgImageLoadingViewController <UICollectionViewDelegateFlowLayout, _TVCollectionViewDelegate, UICollectionViewDataSource> {

	IKViewElement* _templateElement;
	_TVCollectionView* _collectionView;
	NSArray* _collectionViewElements;
	IKImageElement* _bgImageElement;
	IKImageElement* _bgHeroImageElement;
	NSIndexPath* _lastFocusedIndexPath;
	BOOL _updateAutoHighlight;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(long long)_blurEffectStyle;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)updateWithTemplateElement:(id)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(BOOL)_backgroundImageRequiresBlur;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(void)_scrollToPreferredFocusView;
@end
