/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/PUViewControllerSpecChangeObserver.h>

@protocol PUSlideshowThemeDelegate;
@class NSArray, UITableView, PUSlideshowSettingsViewControllerSpec, OKProducerPreset, NSString;

@interface PUSlideshowThemeViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, PUViewControllerSpecChangeObserver> {

	NSArray* _presets;
	UITableView* _tableView;
	PUSlideshowSettingsViewControllerSpec* _spec;
	BOOL _shouldHideTableViewWhenViewWillDisappear;
	BOOL __needsUpdateSpec;
	BOOL __needsUpdateBackgroundView;
	BOOL __needsUpdateTableView;
	OKProducerPreset* _currentPreset;
	id<PUSlideshowThemeDelegate> _delegate;

}

@property (assign,setter=_setNeedsUpdateSpec:,nonatomic) BOOL _needsUpdateSpec;                                  //@synthesize _needsUpdateSpec=__needsUpdateSpec - In the implementation block
@property (assign,setter=_setNeedsUpdateBackgroundView:,nonatomic) BOOL _needsUpdateBackgroundView;              //@synthesize _needsUpdateBackgroundView=__needsUpdateBackgroundView - In the implementation block
@property (assign,setter=_setNeedsUpdateTableView:,nonatomic) BOOL _needsUpdateTableView;                        //@synthesize _needsUpdateTableView=__needsUpdateTableView - In the implementation block
@property (nonatomic,retain) OKProducerPreset * currentPreset;                                                   //@synthesize currentPreset=_currentPreset - In the implementation block
@property (assign,nonatomic,__weak) id<PUSlideshowThemeDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PUSlideshowThemeDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_invalidateBackgroundView;
-(void)_invalidateTableView;
-(void)_updateBackgroundViewIfNeeded;
-(void)_updateTableViewIfNeeded;
-(BOOL)_needsUpdateBackgroundView;
-(void)_setNeedsUpdateBackgroundView:(BOOL)arg1 ;
-(BOOL)_needsUpdateTableView;
-(void)_setNeedsUpdateTableView:(BOOL)arg1 ;
-(void)viewControllerSpec:(id)arg1 didChange:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_didPickPreset:(id)arg1 ;
-(void)_updateIfNeeded;
-(void)setDelegate:(id<PUSlideshowThemeDelegate>)arg1 ;
-(void)_invalidateSpec;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)_needsUpdateSpec;
-(void)_setNeedsUpdateSpec:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setCurrentPreset:(OKProducerPreset *)arg1 ;
-(BOOL)_needsUpdate;
-(BOOL)pu_wantsNavigationBarVisible;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(OKProducerPreset *)currentPreset;
-(void)_updateSpecIfNeeded;
-(void)_didFinish;
-(void)_setNeedsUpdate;
-(void)dealloc;
@end
