/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIStatusBarCellularItem.h>

@class _UIStatusBarBadgeView;

@interface _UIStatusBarCellularExpandedItem : _UIStatusBarCellularItem {

	_UIStatusBarBadgeView* _badgeView;

}

@property (nonatomic,retain) _UIStatusBarBadgeView * badgeView;              //@synthesize badgeView=_badgeView - In the implementation block
+(id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3 allowDualNetwork:(BOOL)arg4 ;
+(id)badgeDisplayIdentifier;
-(void)_create_badgeView;
-(_UIStatusBarBadgeView *)badgeView;
-(id)viewForIdentifier:(id)arg1 ;
-(void)setBadgeView:(_UIStatusBarBadgeView *)arg1 ;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
@end
