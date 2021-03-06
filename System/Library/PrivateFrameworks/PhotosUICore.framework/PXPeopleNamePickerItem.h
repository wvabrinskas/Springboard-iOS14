/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHPerson, CNContact, NSAttributedString;

@interface PXPeopleNamePickerItem : NSObject {

	PHPerson* _person;
	CNContact* _contact;
	NSAttributedString* _title;
	NSAttributedString* _subtitle;

}

@property (readonly) PHPerson * person;                          //@synthesize person=_person - In the implementation block
@property (readonly) CNContact * contact;                        //@synthesize contact=_contact - In the implementation block
@property (readonly) NSAttributedString * title;                 //@synthesize title=_title - In the implementation block
@property (readonly) NSAttributedString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
-(CNContact *)contact;
-(NSAttributedString *)subtitle;
-(PHPerson *)person;
-(id)initWithPerson:(id)arg1 searchPrefix:(id)arg2 ;
-(id)initWithContact:(id)arg1 searchPrefix:(id)arg2 ;
-(NSAttributedString *)title;
@end

