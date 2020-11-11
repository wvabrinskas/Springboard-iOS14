/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStore/ISStoreURLOperation.h>

@class SBKRequest;

@interface SBKTransactionURLOperation : ISStoreURLOperation {

	BOOL _shouldAuthenticate;
	SBKRequest* _SBKRequest;

}

@property (assign,nonatomic) BOOL shouldAuthenticate;                               //@synthesize shouldAuthenticate=_shouldAuthenticate - In the implementation block
@property (setter=BKRequest,nonatomic,retain) SBKRequest * SBKRequest;              //@synthesize SBKRequest=_SBKRequest - In the implementation block
+(id)operationWithRequest:(id)arg1 delegate:(id)arg2 ;
-(id)init;
-(SBKRequest *)SBKRequest;
-(void)setShouldAuthenticate:(BOOL)arg1 ;
-(id)description;
-(void)setSBKRequest:(SBKRequest *)arg1 ;
-(id)_init;
-(BOOL)shouldAuthenticate;
@end
