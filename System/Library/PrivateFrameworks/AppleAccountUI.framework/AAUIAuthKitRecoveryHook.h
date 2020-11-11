/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AAUIServerHook.h>

@protocol AAUIServerHookDelegate;
@class AAUIServerHookResponse, AKAppleIDServerUIDataHarvester, RUIObjectModel, NSString;

@interface AAUIAuthKitRecoveryHook : NSObject <AAUIServerHook> {

	id<AAUIServerHookDelegate> _delegate;
	AAUIServerHookResponse* _serverHookResponse;
	AKAppleIDServerUIDataHarvester* _serverDataHarvester;

}

@property (nonatomic,retain) AKAppleIDServerUIDataHarvester * serverDataHarvester;              //@synthesize serverDataHarvester=_serverDataHarvester - In the implementation block
@property (nonatomic,retain) AAUIServerHookResponse * serverHookResponse;                       //@synthesize serverHookResponse=_serverHookResponse - In the implementation block
@property (nonatomic,retain) RUIObjectModel * objectModel; 
@property (assign,nonatomic,__weak) id<AAUIServerHookDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AKAppleIDServerUIDataHarvester *)serverDataHarvester;
-(id<AAUIServerHookDelegate>)delegate;
-(void)setDelegate:(id<AAUIServerHookDelegate>)arg1 ;
-(BOOL)shouldMatchElement:(id)arg1 ;
-(BOOL)shouldMatchModel:(id)arg1 ;
-(void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)processObjectModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)harvestDataFromResponse:(id)arg1 ;
-(AAUIServerHookResponse *)serverHookResponse;
-(void)setServerHookResponse:(AAUIServerHookResponse *)arg1 ;
-(void)setServerDataHarvester:(AKAppleIDServerUIDataHarvester *)arg1 ;
-(id)_cdpStateUIProvider;
@end
