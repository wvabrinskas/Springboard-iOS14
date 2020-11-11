/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUSearchableViewController.h>

@protocol HUSearchBar;
@class UIView, UIScrollView, NSString;

@interface HUSearchableItemTableViewController : HUItemTableViewController <HUSearchableViewController> {

	UIView*<HUSearchBar> _searchBar;
	unsigned long long _searchBarPosition;
	UIScrollView* _searchBarWrapper;

}

@property (nonatomic,readonly) UIScrollView * searchBarWrapper;                   //@synthesize searchBarWrapper=_searchBarWrapper - In the implementation block
@property (nonatomic,readonly) UIView*<HUSearchBar> searchBar;                    //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,readonly) unsigned long long searchBarPosition;              //@synthesize searchBarPosition=_searchBarPosition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)textFieldDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(UIView*<HUSearchBar>)searchBar;
-(void)setupSearchBar;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 searchBar:(id)arg3 searchBarPosition:(unsigned long long)arg4 ;
-(void)updateForSearch;
-(unsigned long long)searchBarPosition;
-(UIScrollView *)searchBarWrapper;
@end
