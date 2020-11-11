/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <StoreServices/StoreServices-Structs.h>
@interface SSVFairPlaySAPContext : NSObject {

	BOOL _complete;
	FPSAPContextOpaque_Ref _context;
	FairPlayHWInfo_ _hardwareInfo;
	long long _version;

}

@property (getter=isComplete,nonatomic,readonly) BOOL complete;              //@synthesize complete=_complete - In the implementation block
-(BOOL)verifySignature:(id)arg1 forData:(id)arg2 error:(id*)arg3 ;
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isComplete;
-(id)exchangeData:(id)arg1 error:(id*)arg2 ;
-(void)_teardownSession;
-(id)primingSignatureForData:(id)arg1 error:(id*)arg2 ;
-(id)initWithSAPVersion:(long long)arg1 ;
-(void)dealloc;
-(BOOL)verifyPrimeSignature:(id)arg1 error:(id*)arg2 ;
@end
