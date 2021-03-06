/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSArray, NSMapTable, NSObject;

@interface VCDaemonXPCEventHandler : NSObject {

	NSArray* _streams;
	NSMapTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSMapTable * observers;                          //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * streams;                          //@synthesize streams=_streams - In the implementation block
-(void)removeObserver:(id)arg1 ;
-(void)handleEvent:(id)arg1 fromStream:(id)arg2 ;
-(NSMapTable *)observers;
-(id)initWithStreams:(id)arg1 queue:(id)arg2 ;
-(NSArray *)streams;
-(id)initWithStreams:(id)arg1 ;
-(void)resume;
-(void)removeObserver:(id)arg1 name:(id)arg2 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end

