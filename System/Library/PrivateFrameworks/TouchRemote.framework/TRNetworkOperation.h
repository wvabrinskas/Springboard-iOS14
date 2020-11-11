/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TouchRemote/TROperation.h>

@interface TRNetworkOperation : TROperation {

	/*^block*/id _sendingWiFiInfoHandler;

}

@property (nonatomic,copy) id sendingWiFiInfoHandler;              //@synthesize sendingWiFiInfoHandler=_sendingWiFiInfoHandler - In the implementation block
-(void)execute;
-(void)_handleResponse:(id)arg1 ;
-(void)_sendRequestWithSSID:(id)arg1 password:(id)arg2 ;
-(id)sendingWiFiInfoHandler;
-(void)setSendingWiFiInfoHandler:(id)arg1 ;
@end
