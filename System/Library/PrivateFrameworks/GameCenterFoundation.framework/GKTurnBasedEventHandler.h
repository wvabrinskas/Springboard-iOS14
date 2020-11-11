/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GKTurnBasedEventHandlerDelegate, OS_dispatch_queue;
@class NSObject;

@interface GKTurnBasedEventHandler : NSObject {

	BOOL _didBecomeActive;
	NSObject*<GKTurnBasedEventHandlerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _lookForEventQueue;

}

@property (assign,nonatomic) BOOL didBecomeActive;                                                    //@synthesize didBecomeActive=_didBecomeActive - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> lookForEventQueue;                          //@synthesize lookForEventQueue=_lookForEventQueue - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<GKTurnBasedEventHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedTurnBasedEventHandler;
-(id)init;
-(NSObject*<GKTurnBasedEventHandlerDelegate>)delegate;
-(void)setDelegate:(NSObject*<GKTurnBasedEventHandlerDelegate>)arg1 ;
-(BOOL)didBecomeActive;
-(void)lookForEvent;
-(void)callTurnEventForMatch:(id)arg1 userTapped:(BOOL)arg2 ;
-(void)setDidBecomeActive:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)lookForEventQueue;
-(void)setLookForEventQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
