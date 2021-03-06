/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIResponder.h>

@interface TeaUI.MenuManager : UIResponder {

	 menu;
	 menuItems;
	 alternateMenuItems;
	 stagedMenuActions;
	 stagedAlternateMenuActions;

}
-(void)handleAlternateMenuCommandWithSender:(id)arg1 ;
-(void)handleMenuCommandWithSender:(id)arg1 ;
-(void)handleShareCommandWithSender:(id)arg1 ;
-(id)init;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)buildMenuWithBuilder:(id)arg1 ;
@end

