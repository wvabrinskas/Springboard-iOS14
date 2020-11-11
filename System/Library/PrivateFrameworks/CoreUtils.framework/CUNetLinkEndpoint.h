/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CUNetLinkEndpoint : NSObject {

	SCD_Union_CU22 _ipAddr;
	int _state;
	/*^block*/id _stateChangedHandler;
	unsigned long long _expireTime;
	unsigned long long _expiredTicks;
	BOOL _present;
	unsigned _seqNum;
	unsigned _stateChanges;
	BOOL _client;

}

@property (assign,nonatomic) /*function pointer*/void* ipAddr;              //@synthesize ipAddr=_ipAddr - In the implementation block
@property (getter=isClient,nonatomic,readonly) BOOL client;                 //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) int state;                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id stateChangedHandler;                          //@synthesize stateChangedHandler=_stateChangedHandler - In the implementation block
-(id)stateChangedHandler;
-(/*function pointer*/void*)ipAddr;
-(void)setStateChangedHandler:(id)arg1 ;
-(BOOL)isClient;
-(int)state;
-(id)descriptionWithLevel:(int)arg1 ;
-(id)description;
-(void)setIpAddr:(/*function pointer*/void*)arg1 ;
@end
