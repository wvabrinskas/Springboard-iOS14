/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNContactContentViewControllerDelegate <CNContactViewControllerDelegate>
@optional
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
-(void)contactViewController:(id)arg1 didChangeToEditMode:(BOOL)arg2;
-(id)contactPresentedViewController:(id)arg1;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;

@end

