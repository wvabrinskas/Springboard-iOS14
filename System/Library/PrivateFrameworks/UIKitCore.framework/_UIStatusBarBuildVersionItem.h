/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarStringView;

@interface _UIStatusBarBuildVersionItem : _UIStatusBarItem {

	_UIStatusBarStringView* _buildVersionView;

}

@property (nonatomic,retain) _UIStatusBarStringView * buildVersionView;              //@synthesize buildVersionView=_buildVersionView - In the implementation block
-(void)_create_buildVersionView;
-(BOOL)needsUpdate;
-(id)viewForIdentifier:(id)arg1 ;
-(_UIStatusBarStringView *)buildVersionView;
-(void)setBuildVersionView:(_UIStatusBarStringView *)arg1 ;
-(BOOL)canEnableDisplayItem:(id)arg1 fromData:(id)arg2 ;
@end

