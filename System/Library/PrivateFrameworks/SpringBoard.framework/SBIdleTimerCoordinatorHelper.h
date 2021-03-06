/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBIdleTimerProviding, SBIdleTimerCoordinating;
@class NSMapTable;

@interface SBIdleTimerCoordinatorHelper : NSObject {

	id<SBIdleTimerProviding> _sourceProvider;
	id<SBIdleTimerCoordinating> _targetCoordinator;
	NSMapTable* _idleTimerCache;

}

@property (assign,nonatomic,__weak) id<SBIdleTimerProviding> sourceProvider;                    //@synthesize sourceProvider=_sourceProvider - In the implementation block
@property (nonatomic,readonly) NSMapTable * idleTimerCache;                                     //@synthesize idleTimerCache=_idleTimerCache - In the implementation block
@property (assign,nonatomic,__weak) id<SBIdleTimerCoordinating> targetCoordinator;              //@synthesize targetCoordinator=_targetCoordinator - In the implementation block
-(void)removeProvider:(id)arg1 ;
-(id)init;
-(id)idleTimerProxyForProvider:(id)arg1 ;
-(id<SBIdleTimerProviding>)sourceProvider;
-(id)_updateProvider:(id)arg1 behavior:(id)arg2 reason:(id)arg3 ;
-(void)bindProvider:(id)arg1 toSourceTimer:(id)arg2 behavior:(id)arg3 forReason:(id)arg4 ;
-(void)setSourceProvider:(id<SBIdleTimerProviding>)arg1 ;
-(NSMapTable *)idleTimerCache;
-(id)proposeIdleTimerBehavior:(id)arg1 fromProvider:(id)arg2 reason:(id)arg3 ;
-(id<SBIdleTimerCoordinating>)targetCoordinator;
-(BOOL)hasProvider:(id)arg1 ;
-(void)setTargetCoordinator:(id<SBIdleTimerCoordinating>)arg1 ;
-(id)proposeProvider:(id)arg1 byCoordinator:(id)arg2 reason:(id)arg3 ;
-(id)_updateProviderInfo:(id)arg1 behavior:(id)arg2 reason:(id)arg3 ;
-(id)initWithSourceProvider:(id)arg1 ;
-(id)updateProvider:(id)arg1 behavior:(id)arg2 reason:(id)arg3 ;
@end

