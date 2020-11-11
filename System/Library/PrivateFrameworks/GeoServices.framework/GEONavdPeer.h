/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCConnection, NSMutableDictionary, GEONavdClientInfo;

@interface GEONavdPeer : NSObject {

	NSXPCConnection* _connection;
	NSMutableDictionary* _entitlementCache;
	GEONavdClientInfo* _clientInfo;
	BOOL _expectingUpdates;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) GEONavdClientInfo * clientInfo;              //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic) BOOL expectingUpdates;                         //@synthesize expectingUpdates=_expectingUpdates - In the implementation block
-(void)updateConnection:(id)arg1 ;
-(BOOL)expectingUpdates;
-(void)setExpectingUpdates:(BOOL)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 ;
-(GEONavdClientInfo *)clientInfo;
-(NSXPCConnection *)connection;
-(void)dealloc;
@end
