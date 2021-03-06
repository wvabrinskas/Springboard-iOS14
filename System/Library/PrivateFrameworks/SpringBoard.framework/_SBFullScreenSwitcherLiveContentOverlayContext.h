/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBSwitcherLiveContentOverlay;
@interface _SBFullScreenSwitcherLiveContentOverlayContext : NSObject {

	long long _overlayType;
	id<SBSwitcherLiveContentOverlay> _overlay;

}

@property (nonatomic,readonly) long long overlayType;                                 //@synthesize overlayType=_overlayType - In the implementation block
@property (nonatomic,readonly) id<SBSwitcherLiveContentOverlay> overlay;              //@synthesize overlay=_overlay - In the implementation block
-(id<SBSwitcherLiveContentOverlay>)overlay;
-(id)initWithOverlay:(id)arg1 overlayType:(long long)arg2 ;
-(long long)overlayType;
@end

