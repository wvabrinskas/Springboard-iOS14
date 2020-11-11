/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CNContactStore;

@interface SPCoreSpotlightInteractionHandler : NSObject {

	CNContactStore* _contactStore;

}

@property (nonatomic,retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)interestingContactIdentifiersFromIntent:(id)arg1 ;
-(CNContactStore *)contactStore;
-(id)attributeForIntent:(id)arg1 direction:(long long)arg2 ;
-(void)handleInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
@end
