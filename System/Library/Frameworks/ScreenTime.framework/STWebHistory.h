/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ScreenTime.framework/ScreenTime
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSXPCConnection;

@interface STWebHistory : NSObject {

	NSString* _bundleIdentifier;
	NSXPCConnection* _xpcConnection;

}

@property (copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSXPCConnection * xpcConnection;               //@synthesize xpcConnection=_xpcConnection - In the implementation block
-(NSXPCConnection *)xpcConnection;
-(id)initWithBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)deleteAllHistory;
-(void)deleteHistoryForURL:(id)arg1 ;
-(void)deleteHistoryDuringInterval:(id)arg1 ;
@end
