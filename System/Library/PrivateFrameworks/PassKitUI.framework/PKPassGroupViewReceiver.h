/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKPassGroupViewReceiver <NSObject>
@optional
-(void)groupViewDidMoveToReceiver:(id)arg1;
-(void)groupViewWillBeAvailable:(id)arg1;
-(void)groupViewNeedsAnimating:(id)arg1 withVelocity:(double)arg2 dragging:(BOOL)arg3;
-(void)willDeletePass:(id)arg1;
-(void)didDeletePass:(id)arg1;
-(void)setTransitionDuration:(double)arg1;

@required
-(void)groupViewIsAvailable:(id)arg1;
-(void)leadingHeaderViewInterstitialIsAvailable:(id)arg1;
-(void)trailingHeaderViewInterstitialIsAvailable:(id)arg1;

@end
