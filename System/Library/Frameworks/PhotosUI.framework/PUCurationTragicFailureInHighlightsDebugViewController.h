/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>

@class PHFetchResult, PUCurationTragicFailureInHighlightsGridDebugViewController, NSConditionLock, NSMutableArray;

@interface PUCurationTragicFailureInHighlightsDebugViewController : UITableViewController {

	PHFetchResult* _highlights;
	PUCurationTragicFailureInHighlightsGridDebugViewController* _assetCollectionViewController;
	unsigned long long _currentHighlightIndex;
	NSConditionLock* _backgroundActivityLock;
	NSMutableArray* _highlightDatas;

}
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_fetchUtilityAssetInformation;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)goToNextHighlight:(id)arg1 ;
-(void)goToPreviousHighlight:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
@end

