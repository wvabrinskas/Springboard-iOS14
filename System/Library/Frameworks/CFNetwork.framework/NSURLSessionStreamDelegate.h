/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSURLSessionStreamDelegate <NSURLSessionTaskDelegate>
@optional
-(void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
-(void)URLSession:(id)arg1 betterRouteDiscoveredForStreamTask:(id)arg2;
-(void)URLSession:(id)arg1 writeClosedForStreamTask:(id)arg2;
-(void)URLSession:(id)arg1 readClosedForStreamTask:(id)arg2;

@end
