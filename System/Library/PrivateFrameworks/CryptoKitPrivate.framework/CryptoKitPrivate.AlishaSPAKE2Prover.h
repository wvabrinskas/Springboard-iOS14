/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CryptoKitPrivate.framework/CryptoKitPrivate
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CryptoKitPrivate.AlishaSPAKE2Prover : NSObject {

	 spakeCtxData;
	 aad;
	 X;
	 z0_self;
	 z1_self;

}
-(id)init;
-(id)getX;
-(id)initWithPassword:(id)arg1 salt:(id)arg2 authenticatedData:(id)arg3 keyDerivationCost:(unsigned long long)arg4 ;
-(id)processResponseWithY:(id)arg1 M1:(id)arg2 ;
@end
