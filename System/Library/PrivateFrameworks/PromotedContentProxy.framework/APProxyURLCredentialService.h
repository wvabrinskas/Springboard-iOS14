/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PromotedContentProxy.framework/PromotedContentProxy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class APMescalSigning;

@interface APProxyURLCredentialService : NSObject {

	APMescalSigning* _mescalSigningObject;

}

@property (nonatomic,readonly) APMescalSigning * mescalSigningObject;              //@synthesize mescalSigningObject=_mescalSigningObject - In the implementation block
-(id)init;
-(id)signedCredentialForRequest:(id)arg1 withPersistence:(unsigned long long)arg2 ;
-(id)signedCredentialForUrl:(id)arg1 userAgent:(id)arg2 withPersistence:(unsigned long long)arg3 ;
-(id)signedCredentialForUrl:(id)arg1 userAgent:(id)arg2 request:(id)arg3 withPersistence:(unsigned long long)arg4 ;
-(id)_signedCredentialForUrl:(id)arg1 userAgent:(id)arg2 withPersistence:(unsigned long long)arg3 ;
-(APMescalSigning *)mescalSigningObject;
@end
