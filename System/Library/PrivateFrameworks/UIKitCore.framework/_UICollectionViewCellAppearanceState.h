/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _UICollectionViewCellAppearanceState : NSObject {

	BOOL _hasLifted;
	BOOL _hasBeganCancelling;
	int _dragState;

}

@property (assign,nonatomic) int dragState;                                       //@synthesize dragState=_dragState - In the implementation block
@property (assign,nonatomic) BOOL hasLifted;                                      //@synthesize hasLifted=_hasLifted - In the implementation block
@property (assign,nonatomic) BOOL hasBeganCancelling;                             //@synthesize hasBeganCancelling=_hasBeganCancelling - In the implementation block
@property (nonatomic,readonly) long long appearance; 
@property (nonatomic,readonly) BOOL hasBeganDroppingInto; 
@property (nonatomic,readonly) BOOL enrouteToOrReachedTerminalState; 
-(void)didEnd;
-(void)didMove;
-(id)init;
-(BOOL)hasLifted;
-(void)setDragState:(int)arg1 ;
-(id)description;
-(long long)appearance;
-(BOOL)hasBeganDroppingInto;
-(void)setHasLifted:(BOOL)arg1 ;
-(BOOL)hasBeganCancelling;
-(void)didCompleteCancelling;
-(void)willBeginCancelling;
-(void)didCompleteDropping;
-(void)didBeginCancelling;
-(void)didBeginDroppingInto;
-(void)didBeginDropping;
-(void)didCompleteLift;
-(BOOL)enrouteToOrReachedTerminalState;
-(void)setHasBeganCancelling:(BOOL)arg1 ;
-(void)didBeginLift;
-(int)dragState;
@end
