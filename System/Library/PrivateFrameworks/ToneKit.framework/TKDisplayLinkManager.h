/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CADisplayLink, NSMutableDictionary;

@interface TKDisplayLinkManager : NSObject {

	CADisplayLink* _displayLink;
	NSMutableDictionary* _activeObservers;
	NSMutableDictionary* _updatedObservers;
	BOOL _hasUpdatedObservers;
	BOOL _isHandlingDisplayRefresh;
	unsigned long long _warmUpModeRequirementsCount;

}

@property (getter=isPaused,nonatomic,readonly) BOOL paused; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double timestamp; 
+(void)_releaseCurrentDisplayLinkManager;
+(id)currentDisplayLinkManager;
-(id)init;
-(id)_displayLink;
-(BOOL)isPaused;
-(void)_setDisplayLink:(id)arg1 ;
-(void)_displayDidRefresh:(id)arg1 ;
-(void)beginRequiringWarmUpMode;
-(void)endRequiringWarmUpMode;
-(double)duration;
-(double)timestamp;
-(void)dealloc;
-(void)removeObserverWithToken:(id)arg1 ;
-(id)addObserverForFrameInterval:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)_prepareUpdatedObserversForModification;
-(void)_didAddFirstObserver;
-(void)_didRemoveLastObserver;
-(BOOL)_isWarmUpModeEnabled;
-(id)addObserverWithHandler:(/*^block*/id)arg1 ;
@end

