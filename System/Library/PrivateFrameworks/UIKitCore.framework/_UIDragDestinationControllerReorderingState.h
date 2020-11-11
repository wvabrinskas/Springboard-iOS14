/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _UIVelocityIntegrator, _UIDragDestinationControllerSessionState, UICollectionView, _UIDragMovementCadenceSettings;

@interface _UIDragDestinationControllerReorderingState : NSObject {

	BOOL _supportsLocalSessionReordering;
	BOOL _hasStartedInteractiveReorder;
	_UIVelocityIntegrator* _velocityIntegrator;
	long long _reorderCount;
	_UIDragDestinationControllerSessionState* _sessionState;
	UICollectionView* _collectionView;
	double _reorderBecamePossibleTime;
	long long _dragMovementPhase;
	_UIDragMovementCadenceSettings* _reorderCadenceSettings;

}

@property (nonatomic,retain) _UIDragDestinationControllerSessionState * sessionState;              //@synthesize sessionState=_sessionState - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * collectionView;                             //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) _UIVelocityIntegrator * velocityIntegrator;                           //@synthesize velocityIntegrator=_velocityIntegrator - In the implementation block
@property (assign,nonatomic) long long reorderCount;                                               //@synthesize reorderCount=_reorderCount - In the implementation block
@property (assign,nonatomic) double reorderBecamePossibleTime;                                     //@synthesize reorderBecamePossibleTime=_reorderBecamePossibleTime - In the implementation block
@property (assign,nonatomic) long long dragMovementPhase;                                          //@synthesize dragMovementPhase=_dragMovementPhase - In the implementation block
@property (nonatomic,retain) _UIDragMovementCadenceSettings * reorderCadenceSettings;              //@synthesize reorderCadenceSettings=_reorderCadenceSettings - In the implementation block
@property (assign,nonatomic) BOOL hasStartedInteractiveReorder;                                    //@synthesize hasStartedInteractiveReorder=_hasStartedInteractiveReorder - In the implementation block
@property (assign,nonatomic) BOOL supportsLocalSessionReordering;                                  //@synthesize supportsLocalSessionReordering=_supportsLocalSessionReordering - In the implementation block
@property (nonatomic,readonly) BOOL hasPerformedReordering; 
-(BOOL)supportsLocalSessionReordering;
-(BOOL)hasPerformedReordering;
-(long long)reorderCount;
-(void)didEndInteractiveReorder;
-(void)setHasStartedInteractiveReorder:(BOOL)arg1 ;
-(void)setVelocityIntegrator:(_UIVelocityIntegrator *)arg1 ;
-(id)initWithSessionState:(id)arg1 collectionView:(id)arg2 ;
-(void)setSupportsLocalSessionReordering:(BOOL)arg1 ;
-(_UIVelocityIntegrator *)velocityIntegrator;
-(_UIDragMovementCadenceSettings *)reorderCadenceSettings;
-(long long)dragMovementPhase;
-(void)setReorderCadenceSettings:(_UIDragMovementCadenceSettings *)arg1 ;
-(BOOL)hasEnoughTimeElapsedSizeReorderingBecamePossibleForInterval:(double)arg1 ;
-(void)reorderingDidBecomePossible;
-(id)_reorderCadenceSettings;
-(void)velocityExceededThreshold;
-(void)setReorderCount:(long long)arg1 ;
-(_UIDragDestinationControllerSessionState *)sessionState;
-(void)setSessionState:(_UIDragDestinationControllerSessionState *)arg1 ;
-(void)didBeginInteractiveReorder;
-(void)reorderResetToStartingLocation;
-(BOOL)hasStartedInteractiveReorder;
-(void)setReorderBecamePossibleTime:(double)arg1 ;
-(void)didReorder;
-(void)setDragMovementPhase:(long long)arg1 ;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(double)reorderBecamePossibleTime;
@end
