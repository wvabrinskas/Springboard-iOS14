/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface SFExternalCredentialIdentityStoreManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedManager;
-(id)init;
-(id)_credentialIdentityStoreWithIdentifier:(id)arg1 ;
-(void)getCredentialIdentityStoreWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCredentialIdentityStoreWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
