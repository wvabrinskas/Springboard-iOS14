/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreOverlays.framework/AppStoreOverlays
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ASORemoteAppOverlayDelegate <NSObject>
@required
-(void)remoteStoreOverlayDidFailToLoadWithError:(id)arg1;
-(void)remoteStoreOverlayWillStartPresenting:(id)arg1 executeBlock:(/*^block*/id)arg2;
-(void)remoteStoreOverlayDidFinishPresentation:(id)arg1;
-(void)remoteStoreOverlayWillStartDismissing:(id)arg1 executeBlock:(/*^block*/id)arg2;
-(void)remoteStoreOverlayDidFinishDismissal:(id)arg1;

@end
