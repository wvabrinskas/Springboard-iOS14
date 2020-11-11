/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Accounts/Notification/CoreRecentsAccountNotificationPlugin.bundle/CoreRecentsAccountNotificationPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ACAccountStore;

@interface CRMailAccountIterator : NSObject {

	ACAccountStore* _accountStore;

}
+(id)receivedEmailAddressesFromAccount:(id)arg1 ;
-(id)initWithAccountStore:(id)arg1 ;
-(id)init;
-(id)mailAccounts;
-(id)emailAddressesForAccount:(id)arg1 ;
-(void)enumerateEmailAddresses:(/*^block*/id)arg1 ;
@end
