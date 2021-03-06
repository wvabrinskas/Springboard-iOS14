/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSServiceConnectionEndpointMonitorDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSWorkspaceDelegate, OS_dispatch_queue;
@class FBSSerialQueue, BSAtomicSignal, FBSWorkspaceFencingImpl, NSObject, NSMutableDictionary, BSServiceConnectionEndpointMonitor, BSServiceConnectionEndpoint, NSArray, NSString;

@interface FBSWorkspace : NSObject <BSServiceConnectionEndpointMonitorDelegate, BSDescriptionProviding> {

	FBSSerialQueue* _callOutQueue;
	id<FBSWorkspaceDelegate> _delegate;
	BSAtomicSignal* _activateSignal;
	FBSWorkspaceFencingImpl* _fencingImpl;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _queue_identifierToScenesSource;
	BSServiceConnectionEndpointMonitor* _connectionEndpointMonitor;
	BSServiceConnectionEndpoint* _defaultShellEndpoint;

}

@property (nonatomic,readonly) id<FBSWorkspaceDelegate> delegate; 
@property (nonatomic,readonly) BSServiceConnectionEndpoint * defaultShellEndpoint;              //@synthesize defaultShellEndpoint=_defaultShellEndpoint - In the implementation block
@property (nonatomic,copy,readonly) NSArray * scenes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedWorkspaceIfExists;
+(void)_registerBlockForWorkspaceCreation:(/*^block*/id)arg1 ;
-(void)synchronizeSystemAnimationFencesWithCleanUpBlock:(/*^block*/id)arg1 ;
-(void)enumerateScenesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)trackSystemAnimationFence:(id)arg1 ;
-(id)succinctDescription;
-(id)requestSystemAnimationFence;
-(BOOL)isTrackingAnySystemAnimationFence;
-(id)_initWithOptions:(id)arg1 ;
-(void)_activate;
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(id)initWithSerialQueue:(id)arg1 ;
-(id<FBSWorkspaceDelegate>)delegate;
-(id)_queue_scenesClientForEndpoint:(id)arg1 creatingIfNecessary:(BOOL)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)debugDescription;
-(void)requestDestructionOfScene:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)requestSceneFromEndpoint:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<FBSWorkspaceDelegate>)arg1 ;
-(void)monitor:(id)arg1 willLoseEndpoint:(id)arg2 ;
-(NSString *)description;
-(void)_queue_unregisterSource:(id)arg1 ;
-(void)monitor:(id)arg1 didReceiveEndpoint:(id)arg2 ;
-(void)requestSceneCreationWithIdentifier:(id)arg1 initialClientSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_unregisterSource:(id)arg1 ;
-(void)_queue_registerSource:(id)arg1 ;
-(void)_registerSource:(id)arg1 ;
-(NSArray *)scenes;
-(id)_initWithSerialQueue:(id)arg1 ;
-(void)_calloutQueue_executeCalloutFromSource:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)sceneWithIdentifier:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BSServiceConnectionEndpoint *)defaultShellEndpoint;
-(id)succinctDescriptionBuilder;
-(void)requestSceneCreationWithInitialClientSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

