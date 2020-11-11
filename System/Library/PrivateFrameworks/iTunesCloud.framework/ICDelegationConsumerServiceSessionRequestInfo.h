/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ICDelegationConsumerServiceSessionRequestInfo : NSObject {

	unsigned long long _accountID;
	unsigned long long _fairPlaySessionID;

}

@property (nonatomic,readonly) unsigned long long accountID;                      //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) unsigned long long fairPlaySessionID;              //@synthesize fairPlaySessionID=_fairPlaySessionID - In the implementation block
-(unsigned long long)fairPlaySessionID;
-(id)initWithAccountID:(unsigned long long)arg1 fairPlaySessionID:(unsigned long long)arg2 ;
-(unsigned long long)accountID;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end
