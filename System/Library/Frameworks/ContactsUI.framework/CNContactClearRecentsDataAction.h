/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/CNContactAction.h>

@class CNContactRecentsReference, CNUICoreRecentsManager;

@interface CNContactClearRecentsDataAction : CNContactAction {

	CNContactRecentsReference* _recentsData;
	CNUICoreRecentsManager* _coreRecentsManager;

}

@property (nonatomic,readonly) CNContactRecentsReference * recentsData;                  //@synthesize recentsData=_recentsData - In the implementation block
@property (nonatomic,readonly) CNUICoreRecentsManager * coreRecentsManager;              //@synthesize coreRecentsManager=_coreRecentsManager - In the implementation block
-(BOOL)isDestructive;
-(id)title;
-(BOOL)canPerformAction;
-(void)performActionWithSender:(id)arg1 ;
-(CNContactRecentsReference *)recentsData;
-(CNUICoreRecentsManager *)coreRecentsManager;
-(id)initWithRecentsData:(id)arg1 coreRecentsManager:(id)arg2 ;
@end

