/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableSet, NSDictionary, NSObject, FPPacer;

@interface FPProviderDomainChangesReceiver : NSObject {

	NSMutableSet* _changesHandlers;
	NSDictionary* _providerDomainsByID;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	int _notifyToken;
	int _settingsChangedToken;
	FPPacer* _pacer;

}
+(id)sharedChangesReceiver;
-(void)updateProviderDomainsWithAttemptCount:(unsigned long long)arg1 ;
-(id)addChangesHandler:(/*^block*/id)arg1 ;
-(void)signalChange;
-(void)removeChangesHandlerToken:(id)arg1 ;
-(void)providerDomainsHaveChanged:(id)arg1 error:(id)arg2 ;
-(id)_init;
-(void)callChangesHandlersWithProviderDomains:(id)arg1 error:(id)arg2 ;
@end
