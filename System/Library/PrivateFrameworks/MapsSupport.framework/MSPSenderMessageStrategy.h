/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSupport/MSPSenderStrategy.h>

@protocol MSPSenderMessageStrategyDelegate;
@class NSMutableSet;

@interface MSPSenderMessageStrategy : MSPSenderStrategy {

	id<MSPSenderMessageStrategyDelegate> _delegate;
	NSMutableSet* _messagesParticipants;

}

@property (nonatomic,retain) NSMutableSet * messagesParticipants;                               //@synthesize messagesParticipants=_messagesParticipants - In the implementation block
@property (assign,nonatomic,__weak) id<MSPSenderMessageStrategyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setState:(id)arg1 ;
-(id<MSPSenderMessageStrategyDelegate>)delegate;
-(void)setDelegate:(id<MSPSenderMessageStrategyDelegate>)arg1 ;
-(void)addParticipants:(id)arg1 ;
-(id)participants;
-(void)removeParticipants:(id)arg1 ;
-(void)sendMessageIfNeeded;
-(void)_addMessagesParticipants:(id)arg1 ;
-(void)_removeMessagesParticipants:(id)arg1 ;
-(NSMutableSet *)messagesParticipants;
-(void)setMessagesParticipants:(NSMutableSet *)arg1 ;
@end

