/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class NSString, SKUIClientContext;

@interface SKUIRedeemOperation : NSOperation {

	BOOL _cameraRecognized;
	NSString* _code;
	SKUIClientContext* _clientContext;
	/*^block*/id _resultBlock;

}

@property (assign,nonatomic) BOOL cameraRecognized;                          //@synthesize cameraRecognized=_cameraRecognized - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (copy) id resultBlock;                                             //@synthesize resultBlock=_resultBlock - In the implementation block
-(id)_authenticationContext;
-(id)resultBlock;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)main;
-(BOOL)cameraRecognized;
-(void)setCameraRecognized:(BOOL)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setResultBlock:(id)arg1 ;
-(id)initWithCode:(id)arg1 ;
-(id)_redeemForSuccessDictionary:(id)arg1 ;
-(id)_requestPropertiesForThankYouWithURL:(id)arg1 ;
-(id)_performRequestWithProperties:(id)arg1 error:(id*)arg2 ;
-(void)_applyThankYouDictionary:(id)arg1 toRedeem:(id)arg2 ;
-(id)_itemsForItemIdentifiers:(id)arg1 ;
@end

