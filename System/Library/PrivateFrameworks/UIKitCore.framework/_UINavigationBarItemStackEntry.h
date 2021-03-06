/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UINavigationItem, _UINavigationBarLayout;

@interface _UINavigationBarItemStackEntry : NSObject {

	BOOL _searchActive;
	UINavigationItem* _item;
	_UINavigationBarLayout* _normalLayout;
	_UINavigationBarLayout* _searchLayout;

}

@property (nonatomic,readonly) UINavigationItem * item;                              //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) _UINavigationBarLayout * activeLayout; 
@property (nonatomic,readonly) _UINavigationBarLayout * inactiveLayout; 
@property (assign,getter=isSearchActive,nonatomic) BOOL searchActive;                //@synthesize searchActive=_searchActive - In the implementation block
@property (nonatomic,retain) _UINavigationBarLayout * normalLayout;                  //@synthesize normalLayout=_normalLayout - In the implementation block
@property (nonatomic,retain) _UINavigationBarLayout * searchLayout;                  //@synthesize searchLayout=_searchLayout - In the implementation block
+(id)entryForItem:(id)arg1 replaceExistingWithNew:(BOOL)arg2 ;
+(id)newEntryForItem:(id)arg1 ;
-(_UINavigationBarLayout *)activeLayout;
-(BOOL)isSearchActive;
-(_UINavigationBarLayout *)normalLayout;
-(UINavigationItem *)item;
-(_UINavigationBarLayout *)searchLayout;
-(void)setNormalLayout:(_UINavigationBarLayout *)arg1 ;
-(id)description;
-(_UINavigationBarLayout *)inactiveLayout;
-(void)updateStateFromCounterpart:(id)arg1 ;
-(void)setSearchActive:(BOOL)arg1 ;
-(void)setSearchLayout:(_UINavigationBarLayout *)arg1 ;
-(void)dealloc;
@end

