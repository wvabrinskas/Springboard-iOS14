/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FPXEnumerator.h>

@protocol FPXEnumerator <NSObject>
@required
-(void)currentSyncAnchorWithCompletion:(/*^block*/id)arg1;
-(void)enumerateItemsFromPage:(id)arg1 reply:(/*^block*/id)arg2;
-(void)enumerateChangesFromToken:(id)arg1 reply:(/*^block*/id)arg2;
-(void)keepAliveConnectionForRegisteredObserver:(/*^block*/id)arg1;
-(void)invalidate;

@end


@protocol NSFileProviderEnumerator, FPXEnumeratorObserver;
@class FPXDomainContext, FPItemID, NSString;

@interface FPXEnumerator : NSObject <FPXEnumerator> {

	FPXDomainContext* _domainContext;
	id<NSFileProviderEnumerator> _vendorEnumerator;
	FPItemID* _observedItemID;
	BOOL _invalidated;
	BOOL _forceFileURLs;
	id<FPXEnumeratorObserver> _observer;

}

@property (readonly) id<FPXEnumeratorObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) FPItemID * observedItemID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(FPItemID *)observedItemID;
-(void)alternateContentsWereUpdatedAtURL:(id)arg1 forItem:(id)arg2 ;
-(void)forceItemUpdate:(id)arg1 ;
-(id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 vendorEnumerator:(id)arg3 observer:(id)arg4 forceFileURLs:(BOOL)arg5 ;
-(id<FPXEnumeratorObserver>)observer;
-(void)invalidateVendorEnumeration;
-(void)forceAddFileURLsForItems:(id)arg1 ;
-(void)currentSyncAnchorWithCompletion:(/*^block*/id)arg1 ;
-(void)enumerateItemsFromPage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)enumerateChangesFromToken:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)keepAliveConnectionForRegisteredObserver:(/*^block*/id)arg1 ;
-(void)invalidate;
-(void)dealloc;
@end
