/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PROPlugInFirewallErrorHandler;
@class Protocol;

@interface PROPlugInFirewall : NSObject {

	id<PROPlugInFirewallErrorHandler> errorHandler;
	id protectedObject;
	Protocol* protocol;
	Protocol* secondaryProtocol;

}
+(void)doesNotRecognizeSelector:(SEL)arg1 ;
+(id)methodSignatureForSelector:(SEL)arg1 ;
+(void)forwardInvocation:(id)arg1 ;
+(void)deadMethod;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)dealloc;
-(id)initWithProtectedObject:(id)arg1 protocol:(id)arg2 secondaryProtocol:(id)arg3 errorHandler:(id)arg4 ;
-(void)deadMethod;
-(id)protectedObject;
@end
