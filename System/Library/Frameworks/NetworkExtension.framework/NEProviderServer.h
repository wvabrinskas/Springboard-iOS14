/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSMutableArray, NEExtensionProviderContext, NSString;

@interface NEProviderServer : NSObject <NSXPCListenerDelegate> {

	NSMutableArray* _listeners;
	NSMutableArray* _contexts;

}

@property (nonatomic,readonly) NSMutableArray * listeners;                   //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,readonly) NSMutableArray * contexts;                    //@synthesize contexts=_contexts - In the implementation block
@property (readonly) NEExtensionProviderContext * firstContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(void)start;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSMutableArray *)listeners;
-(id)getListenerForExtensionPoint:(id)arg1 ;
-(void)generateProviderEndpointInfoInMessage:(id)arg1 extensionPoint:(id)arg2 ;
-(NEExtensionProviderContext *)firstContext;
-(void)removeProviderContext:(id)arg1 ;
-(NSMutableArray *)contexts;
@end

