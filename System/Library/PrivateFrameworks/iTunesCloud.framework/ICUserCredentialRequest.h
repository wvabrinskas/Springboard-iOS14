/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICUserIdentity, ICUserIdentityStore, ICClientInfo;

@interface ICUserCredentialRequest : NSObject <NSCopying> {

	ICUserIdentity* _identity;
	ICUserIdentityStore* _identityStore;
	ICClientInfo* _clientInfo;
	long long _qualityOfService;
	double _timeoutInterval;

}

@property (nonatomic,copy,readonly) ICUserIdentity * identity;                   //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) ICUserIdentityStore * identityStore;              //@synthesize identityStore=_identityStore - In the implementation block
@property (nonatomic,copy,readonly) ICClientInfo * clientInfo;                   //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                         //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                             //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
-(ICUserIdentityStore *)identityStore;
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1 ;
-(ICUserIdentity *)identity;
-(void)setQualityOfService:(long long)arg1 ;
-(ICClientInfo *)clientInfo;
-(long long)qualityOfService;
-(id)initWithIdentity:(id)arg1 identityStore:(id)arg2 clientInfo:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
