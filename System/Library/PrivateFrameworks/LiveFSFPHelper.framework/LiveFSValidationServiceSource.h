/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NSFileProviderValidationServiceV1.h>
#import <libobjc.A.dylib/NSFileProviderServiceSource.h>

@class LiveFSFPExtensionHelper, NSString, NSOperationQueue, NSHashTable;

@interface LiveFSValidationServiceSource : NSObject <NSXPCListenerDelegate, NSFileProviderValidationServiceV1, NSFileProviderServiceSource> {

	LiveFSFPExtensionHelper* _fileProviderExtension;
	NSString* _itemIdentifier;
	NSOperationQueue* _operationQueue;
	NSHashTable* _listeners;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * serviceName; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)makeListenerEndpointAndReturnError:(id*)arg1 ;
-(NSString *)serviceName;
-(id)initWithFileProviderExtension:(id)arg1 itemIdentifier:(id)arg2 ;
-(void)validation_allowValidation:(/*^block*/id)arg1 ;
-(void)validation_evictDocumentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)validation_shareDocumentWithCompletionHandler:(/*^block*/id)arg1 ;
@end

