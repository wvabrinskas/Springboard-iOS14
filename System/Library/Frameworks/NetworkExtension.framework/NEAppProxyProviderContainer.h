/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NEAppProxyProviderContainerDelegate, OS_dispatch_queue;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NEAppProxyProvider, NSObject;

@interface NEAppProxyProviderContainer : NSObject {

	unsigned _delegateInterfaceIndex;
	NEAppProxyProvider* _provider;
	id<NEAppProxyProviderContainerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _flowQueue;
	NEFlowDirectorRef _director;
	/*^block*/id _stopCompletionHandler;

}

@property (retain) id<NEAppProxyProviderContainerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> flowQueue;                        //@synthesize flowQueue=_flowQueue - In the implementation block
@property (assign) NEFlowDirectorRef director;                                    //@synthesize director=_director - In the implementation block
@property (assign) unsigned delegateInterfaceIndex;                               //@synthesize delegateInterfaceIndex=_delegateInterfaceIndex - In the implementation block
@property (copy) id stopCompletionHandler;                                        //@synthesize stopCompletionHandler=_stopCompletionHandler - In the implementation block
@property (readonly) NEAppProxyProvider * provider;                               //@synthesize provider=_provider - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setDelegateInterface:(unsigned)arg1 ;
-(void)flowDivertOpenControlSocket;
-(void)setInitialFlowDivertControlSocket:(id)arg1 ;
-(id<NEAppProxyProviderContainerDelegate>)delegate;
-(void)setStopCompletionHandler:(id)arg1 ;
-(void)setDelegate:(id<NEAppProxyProviderContainerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 providerClass:(Class)arg2 ;
-(NSObject*<OS_dispatch_queue>)flowQueue;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setFlowQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegateInterfaceIndex:(unsigned)arg1 ;
-(void)flowDivertNewFlow:(NEFlowRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stop;
-(void)handleAppMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDirector:(NEFlowDirectorRef)arg1 ;
-(NEAppProxyProvider *)provider;
-(unsigned)delegateInterfaceIndex;
-(void)setConfiguration:(id)arg1 ;
-(void)wake;
-(NEFlowDirectorRef)director;
-(id)stopCompletionHandler;
@end
