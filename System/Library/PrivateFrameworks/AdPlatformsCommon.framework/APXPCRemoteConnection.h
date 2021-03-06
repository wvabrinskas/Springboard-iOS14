/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSXPCConnection, NSString, APUnfairLock;

@interface APXPCRemoteConnection : NSObject {

	int _numClients;
	NSMutableArray* _delegates;
	NSXPCConnection* _xpcConnection;
	NSString* _machService;
	APUnfairLock* _unfairLock;

}

@property (assign,nonatomic) int numClients;                               //@synthesize numClients=_numClients - In the implementation block
@property (nonatomic,retain) NSMutableArray * delegates;                   //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSString * machService;                     //@synthesize machService=_machService - In the implementation block
@property (nonatomic,readonly) APUnfairLock * unfairLock;                  //@synthesize unfairLock=_unfairLock - In the implementation block
+(id)sharedConnectionFor:(id)arg1 ;
+(id)connectionFor:(id)arg1 ;
+(id)connectionForMachService:(id)arg1 ;
+(void)addSharedConnection:(id)arg1 forMachService:(id)arg2 ;
+(id)sharedConnections;
+(void)removeSharedConnectionForMachService:(id)arg1 ;
-(NSMutableArray *)delegates;
-(void)addDelegate:(id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSString *)machService;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)setDelegates:(NSMutableArray *)arg1 ;
-(APUnfairLock *)unfairLock;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)invalidateForDelegate:(id)arg1 ;
-(void)increaseConnectionCount;
-(void)decreaseConnectionCount;
-(int)numClients;
-(void)setNumClients:(int)arg1 ;
@end

