/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CATSocketDelegate, OS_dispatch_source, OS_dispatch_queue;
@class CATEndPoint, NSObject;

@interface CATSocket : NSObject {

	BOOL mIsInvalid;
	int mState;
	int _nativeSocket;
	id<CATSocketDelegate> _delegate;
	CATEndPoint* _localEndPoint;
	CATEndPoint* _remoteEndPoint;
	NSObject*<OS_dispatch_source> _socketSource;
	NSObject*<OS_dispatch_queue> _socketQueue;
	NSObject*<OS_dispatch_queue> _userQueue;

}

@property (assign,nonatomic) int nativeSocket;                                          //@synthesize nativeSocket=_nativeSocket - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> socketSource;              //@synthesize socketSource=_socketSource - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> socketQueue;                //@synthesize socketQueue=_socketQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> userQueue;                  //@synthesize userQueue=_userQueue - In the implementation block
@property (assign,nonatomic,__weak) id<CATSocketDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CATEndPoint * localEndPoint;                             //@synthesize localEndPoint=_localEndPoint - In the implementation block
@property (nonatomic,readonly) CATEndPoint * remoteEndPoint;                            //@synthesize remoteEndPoint=_remoteEndPoint - In the implementation block
-(id)init;
-(id<CATSocketDelegate>)delegate;
-(void)suspend;
-(void)setDelegate:(id<CATSocketDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)userQueue;
-(void)resume;
-(void)delegateDidConnect;
-(void)invalidate;
-(void)dealloc;
-(NSObject*<OS_dispatch_source>)socketSource;
-(void)delegateDidClose;
-(void)delegateDidReceiveData:(id)arg1 ;
-(int)nativeSocket;
-(void)socketDidCancel;
-(void)socketDidReceiveEvent;
-(void)populateLocalEndPoint;
-(void)populateRemoteEndPoint;
-(void)setNativeSocket:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)socketQueue;
-(void)socketDidConnect;
-(void)socketDidFailWithError:(id)arg1 ;
-(void)socketDidReceiveListeningEvent;
-(void)socketDidReceiveData;
-(void)acceptPendingConnection;
-(id)initWithNativeSocket:(int)arg1 ;
-(BOOL)delegateShouldAcceptNewSocket:(id)arg1 ;
-(void)delegateDidFailWithError:(id)arg1 ;
-(BOOL)listenWithEndPoint:(id)arg1 error:(id*)arg2 ;
-(BOOL)connectToEndPoint:(id)arg1 error:(id*)arg2 ;
-(CATEndPoint *)localEndPoint;
-(CATEndPoint *)remoteEndPoint;
@end

