/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <Sharing/Sharing-Structs.h>
@class CUCoalescer, NSMutableDictionary, NSObject;

@interface SFPowerSourceMonitor : NSObject {

	LogCategory* _ucat;
	BOOL _activateCalled;
	long long _previousSourcesCount;
	unsigned short _powerSourcesUpdateIndex;
	CUCoalescer* _updateCoalescer;
	NSMutableDictionary* _powerSources;
	int _psNotifyTokenAccessoryAttach;
	int _psNotifyTokenAccessoryPowerSource;
	int _psNotifyTokenAccessoryTimeRemaining;
	int _psNotifyTokenAnyPowerSource;
	BOOL _skipCoalescing;
	unsigned _changeFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	/*^block*/id _powerSourcesFoundHandler;
	/*^block*/id _powerSourcesLostHandler;
	/*^block*/id _powerSourcesChangedHandler;

}

@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL skipCoalescing;                                     //@synthesize skipCoalescing=_skipCoalescing - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id powerSourcesFoundHandler;                               //@synthesize powerSourcesFoundHandler=_powerSourcesFoundHandler - In the implementation block
@property (nonatomic,copy) id powerSourcesLostHandler;                                //@synthesize powerSourcesLostHandler=_powerSourcesLostHandler - In the implementation block
@property (nonatomic,copy) id powerSourcesChangedHandler;                             //@synthesize powerSourcesChangedHandler=_powerSourcesChangedHandler - In the implementation block
-(unsigned)changeFlags;
-(void)setChangeFlags:(unsigned)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_cleanup;
-(void)_foundPowerSource:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3 ;
-(void)setPowerSourcesLostHandler:(id)arg1 ;
-(void)_updatePowerSource:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3 ;
-(id)init;
-(void)_handlePowerSourcesChanged:(id)arg1 changes:(unsigned)arg2 ;
-(void)_updatePowerSources;
-(void)_handlePowerSourcesLost:(id)arg1 ;
-(id)invalidationHandler;
-(void)_triggerUpdatePowerSources;
-(void)setSkipCoalescing:(BOOL)arg1 ;
-(void)setPowerSourcesFoundHandler:(id)arg1 ;
-(BOOL)powerSourcesListWithOutInfo:(const void*)arg1 outSources:(const _CFArray*)arg2 outSourcesCount:(long long*)arg3 ;
-(void)setPowerSourcesChangedHandler:(id)arg1 ;
-(BOOL)skipCoalescing;
-(void)_removePowerSources:(id)arg1 ;
-(id)powerSourcesFoundHandler;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_handlePowerSourcesFound:(id)arg1 ;
-(void)_updatePowerSourcesWithInfo:(void*)arg1 sources:(CFArrayRef)arg2 sourcesCount:(long long)arg3 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)powerSourcesLostHandler;
-(void)_update;
-(id)powerSourcesChangedHandler;
-(void)invalidate;
-(void)dealloc;
@end

