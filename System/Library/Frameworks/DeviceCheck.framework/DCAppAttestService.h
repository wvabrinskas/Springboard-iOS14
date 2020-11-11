/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/DeviceCheck.framework/DeviceCheck
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface DCAppAttestService : NSObject

@property (getter=isSupported,readonly) BOOL supported; 
+(id)sharedService;
-(void)generateKeyWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isSupported;
-(BOOL)_isSupportedReturningError:(id*)arg1 ;
-(id)_loadAppUUID;
-(void)_saveAppUUID:(id)arg1 ;
-(id)_rewrapAsDCError:(id)arg1 ;
-(void)attestKey:(id)arg1 clientDataHash:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)generateAssertion:(id)arg1 clientDataHash:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
