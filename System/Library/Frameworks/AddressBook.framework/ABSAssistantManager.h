/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ABSAddressBook;

@interface ABSAssistantManager : NSObject {

	ABSAddressBook* _addressBook;

}

@property (nonatomic,readonly) ABSAddressBook * addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
-(id)init;
-(id)initWithAddressBook:(id)arg1 ;
-(ABSAddressBook *)addressBook;
-(id)newSAPersonFromABPerson:(void*)arg1 ;
@end
