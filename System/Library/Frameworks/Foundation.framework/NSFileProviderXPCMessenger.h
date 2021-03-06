/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSFileProviderXPCInterface.h>

@protocol NSFileProvider, OS_dispatch_queue;
@class NSObject, NSFileProviderProxy, NSString;

@interface NSFileProviderXPCMessenger : NSObject <NSFileProviderXPCInterface> {

	id<NSFileProvider> _fileProvider;
	NSObject*<OS_dispatch_queue> _queue;
	NSFileProviderProxy* _fileProviderProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)provideItemAtURL:(id)arg1 forClaimWithID:(id)arg2 madeByClientWithProcessIdentifier:(int)arg3 options:(unsigned long long)arg4 kernelOperation:(unsigned)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)initWithFileProviderProxy:(id)arg1 ;
-(oneway void)cancelProvidingItemAtURL:(id)arg1 forClaimWithID:(id)arg2 ;
-(oneway void)observeEndOfWriteAtURL:(id)arg1 forClaimWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3 ;
-(void)movingItemAtURL:(id)arg1 requiresProvidingWithDestinationURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_makeProvider:(id)arg1 provideItemAtURL:(id)arg2 options:(unsigned long long)arg3 forAccessClaimWithID:(id)arg4 processIdentifier:(int)arg5 kernelOperation:(unsigned)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)collectDebuggingInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)checkInProviderWithReply:(/*^block*/id)arg1 ;
-(id)initWithFileProvider:(id)arg1 queue:(id)arg2 ;
-(void)providePhysicalItemForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)observePresentationChangeOfKind:(id)arg1 forPresenterWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3 observedUbiquityAttributes:(id)arg4 url:(id)arg5 newURL:(id)arg6 ;
-(void)invalidate;
-(void)dealloc;
@end

