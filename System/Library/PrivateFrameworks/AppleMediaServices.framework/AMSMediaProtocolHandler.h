/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSURLProtocolHandler.h>

@protocol AMSMediaTokenServiceProtocol;
@interface AMSMediaProtocolHandler : AMSURLProtocolHandler {

	id<AMSMediaTokenServiceProtocol> _tokenService;

}

@property (nonatomic,readonly) id<AMSMediaTokenServiceProtocol> tokenService;              //@synthesize tokenService=_tokenService - In the implementation block
-(void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(BOOL)arg3 error:(id*)arg4 ;
-(id)handleResponse:(id)arg1 task:(id)arg2 ;
-(id)initWithTokenService:(id)arg1 ;
-(id<AMSMediaTokenServiceProtocol>)tokenService;
@end

