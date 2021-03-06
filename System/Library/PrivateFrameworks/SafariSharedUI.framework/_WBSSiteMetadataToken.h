/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WBSSiteMetadataRequest, NSTimer;

@interface _WBSSiteMetadataToken : NSObject {

	BOOL _cancelled;
	BOOL _isOneTimeRequest;
	BOOL _didReceiveResponse;
	WBSSiteMetadataRequest* _request;
	long long _priority;
	/*^block*/id _responseHandler;
	NSTimer* _delayTimer;

}

@property (getter=isCancelled) BOOL cancelled;                                //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,readonly) BOOL isOneTimeRequest;                         //@synthesize isOneTimeRequest=_isOneTimeRequest - In the implementation block
@property (nonatomic,readonly) WBSSiteMetadataRequest * request;              //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) long long priority;                              //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy,readonly) id responseHandler;                       //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,retain) NSTimer * delayTimer;                            //@synthesize delayTimer=_delayTimer - In the implementation block
@property (assign,nonatomic) BOOL didReceiveResponse;                         //@synthesize didReceiveResponse=_didReceiveResponse - In the implementation block
-(id)responseHandler;
-(WBSSiteMetadataRequest *)request;
-(BOOL)isCancelled;
-(id)initWithRequest:(id)arg1 priority:(long long)arg2 responseHandler:(/*^block*/id)arg3 ;
-(BOOL)isOneTimeRequest;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)didReceiveResponse;
-(long long)priority;
-(void)dispatchResponse:(id)arg1 ;
-(void)setDelayTimer:(NSTimer *)arg1 ;
-(id)initWithOneTimeRequest:(id)arg1 priority:(long long)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)setPriority:(long long)arg1 ;
-(void)setDidReceiveResponse:(BOOL)arg1 ;
-(NSTimer *)delayTimer;
-(void)dealloc;
@end

