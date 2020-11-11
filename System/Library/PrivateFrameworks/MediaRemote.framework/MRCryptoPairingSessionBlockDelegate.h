/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MRCryptoPairingSessionDelegate.h>

@class NSString;

@interface MRCryptoPairingSessionBlockDelegate : NSObject <MRCryptoPairingSessionDelegate> {

	/*^block*/id _dataExchangeBlock;
	/*^block*/id _showSetupCodeBlock;
	/*^block*/id _hideSetupCodeBlock;
	/*^block*/id _promptForSetupCodeBlock;
	/*^block*/id _exchangeCompleteBlock;

}

@property (nonatomic,copy) id dataExchangeBlock;                    //@synthesize dataExchangeBlock=_dataExchangeBlock - In the implementation block
@property (nonatomic,copy) id showSetupCodeBlock;                   //@synthesize showSetupCodeBlock=_showSetupCodeBlock - In the implementation block
@property (nonatomic,copy) id hideSetupCodeBlock;                   //@synthesize hideSetupCodeBlock=_hideSetupCodeBlock - In the implementation block
@property (nonatomic,copy) id promptForSetupCodeBlock;              //@synthesize promptForSetupCodeBlock=_promptForSetupCodeBlock - In the implementation block
@property (nonatomic,copy) id exchangeCompleteBlock;                //@synthesize exchangeCompleteBlock=_exchangeCompleteBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataExchangeBlock:(id)arg1 ;
-(void)setPromptForSetupCodeBlock:(id)arg1 ;
-(void)setExchangeCompleteBlock:(id)arg1 ;
-(void)pairingSession:(id)arg1 promptForSetupCodeWithCompletion:(/*^block*/id)arg2 ;
-(id)dataExchangeBlock;
-(id)showSetupCodeBlock;
-(id)hideSetupCodeBlock;
-(id)promptForSetupCodeBlock;
-(id)exchangeCompleteBlock;
-(void)pairingSession:(id)arg1 didPrepareExchangeData:(id)arg2 ;
-(void)pairingSession:(id)arg1 showSetupCode:(id)arg2 ;
-(void)pairingSessionHideSetupCode:(id)arg1 ;
-(void)pairingSession:(id)arg1 promptForSetupCodeWithDelay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)pairingSession:(id)arg1 didCompleteExchangeWithError:(id)arg2 ;
-(void)setShowSetupCodeBlock:(id)arg1 ;
-(void)setHideSetupCodeBlock:(id)arg1 ;
@end
