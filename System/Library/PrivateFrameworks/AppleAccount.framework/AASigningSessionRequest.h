/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleAccount/AARequest.h>

@class NSData;

@interface AASigningSessionRequest : AARequest {

	NSData* _sessionInfoRequestData;

}
+(Class)responseClass;
-(id)urlRequest;
-(id)initWithURLString:(id)arg1 sessionInfoRequestData:(id)arg2 ;
@end
