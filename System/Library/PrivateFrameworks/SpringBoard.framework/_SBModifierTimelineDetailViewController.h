/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, _SBModifierTimelineModifierDetailViewController, _SBModifierTimelineTextViewController, SBSwitcherModifierTimelineEntry, NSString;

@interface _SBModifierTimelineDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	_SBModifierTimelineModifierDetailViewController* _modifierDetailViewController;
	_SBModifierTimelineTextViewController* _actionDetailViewController;
	SBSwitcherModifierTimelineEntry* _entry;

}

@property (nonatomic,retain) SBSwitcherModifierTimelineEntry * entry;              //@synthesize entry=_entry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_done;
-(void)viewWillLayoutSubviews;
-(void)setEntry:(SBSwitcherModifierTimelineEntry *)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(SBSwitcherModifierTimelineEntry *)entry;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(long long)_numberOfModifiersInStackSnapshot:(id)arg1 ;
-(id)_stackSnapshotAtIndex:(long long)arg1 ;
@end
