/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/APXPCActionRequesterProtocol.h>

@class NSUUID, Protocol, APXPCRemoteConnection, NSString;

@interface APXPCActionRequester : NSObject <APXPCActionRequesterProtocol> {

	Protocol* _exportedInterface;
	id _exportedObject;
	id _remoteObjectProxy;
	APXPCRemoteConnection* _connection;
	NSUUID* _delegateID;

}

@property (nonatomic,retain) id remoteObjectProxy;                            //@synthesize remoteObjectProxy=_remoteObjectProxy - In the implementation block
@property (nonatomic,retain) APXPCRemoteConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSUUID * delegateID;                             //@synthesize delegateID=_delegateID - In the implementation block
@property (nonatomic,readonly) Protocol * exportedInterface;                  //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (nonatomic,readonly) id exportedObject;                             //@synthesize exportedObject=_exportedObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)machService;
+(id)unfairLock;
+(BOOL)canShareConnection;
-(id)xpcConnection;
-(id)exportedObject;
-(id)remoteObjectProxy;
-(id)init;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(Protocol *)exportedInterface;
-(id)remoteObjectInterface;
-(void)setRemoteObjectProxy:(id)arg1 ;
-(NSString *)description;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)finished;
-(void)setConnection:(APXPCRemoteConnection *)arg1 ;
-(APXPCRemoteConnection *)connection;
-(void)dealloc;
-(NSUUID *)delegateID;
-(void)extendCollectionClassesForExportedInterface:(id)arg1 ;
-(void)extendCollectionClassesForRemoteInterface:(id)arg1 ;
-(void)setDelegateID:(NSUUID *)arg1 ;
@end

