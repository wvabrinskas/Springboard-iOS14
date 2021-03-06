/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKMacToolbarItemProvider <NSObject>
@optional
-(id)virtualView;
-(BOOL)reparentToolbarItem:(id)arg1;
-(BOOL)prefersBottomDividerHidden;
-(double)virtualToolbarPreferredHeight;
-(UIEdgeInsets*)virtualToolbarContentInsets;
-(void)toolbarWillAddItem:(id)arg1;
-(void)toolbarDidRemoveItem:(id)arg1;
-(BOOL)itemProviderDisablesTouches;

@required
-(void)configureWithToolbarController:(id)arg1;
-(id)toolbarItemForIdentifier:(id)arg1;
-(void)providerWillBeRemovedFromToolbarController:(id)arg1;

@end

