/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol EKEditItemViewControllerDelegate <NSObject>
@optional
-(void)editItemViewControllerWantsKeyboardPinned:(BOOL)arg1;
-(BOOL)editItemViewControllerSave:(id)arg1;

@required
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
-(id)editItemEventToDetach;

@end

