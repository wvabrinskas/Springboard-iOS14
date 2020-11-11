/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UISharingPublicController <NSObject>
@required
-(void)_shareDidChange:(id)arg1;
-(void)_dismissViewControllerWithError:(id)arg1;
-(void)_shareWasMadePrivate;
-(void)_cloudSharingControllerDidModifyPrimarySwitch:(BOOL)arg1;
-(void)_cloudSharingControllerDidModifySecondarySwitch:(BOOL)arg1;
-(void)_cloudSharingControllerDidActivateShowSharedFolder;
-(void)_cloudSharingControllerDidChooseTransport:(id)arg1;
-(void)_requestSavedShareWithCompletion:(/*^block*/id)arg1;
-(void)_performAuxiliaryActionWithCompletion:(/*^block*/id)arg1;
-(void)_performHeaderActionWithCompletion:(/*^block*/id)arg1;
-(void)_dismissForActivityRepresentation:(/*^block*/id)arg1;
-(void)_representFullscreenAfterActivityDismissal:(/*^block*/id)arg1;

@end
