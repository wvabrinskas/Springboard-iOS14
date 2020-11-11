/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SNSystemAudioAnalyzerProtocol.h>

@protocol SNSystemAudioAnalyzerProtocol, OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface SNSystemAudioAnalyzerRemote : NSObject <SNSystemAudioAnalyzerProtocol> {

	NSMutableDictionary* _registeredRequests;
	id<SNSystemAudioAnalyzerProtocol> _analyzer;
	/*^block*/id _generator;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)connectionLostError;
-(void)removeAllRequests;
-(void)start;
-(id)init;
-(id)initWithClient:(id)arg1 queue:(id)arg2 ;
-(BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(void)stop;
-(void)removeRequest:(id)arg1 ;
-(void)_removeAllRequests;
-(void)_removeRequest:(id)arg1 ;
-(id)initWithRemoteAnalyzerGenerator:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_invalidateAnalyzer:(id)arg1 ;
-(void)_invalidateActiveAnalyzer;
-(id)_acquireSystemAudioAnalyzer;
-(void)_addRequest:(id)arg1 withObserver:(id)arg2 ;
-(void)invalidateActiveAnalyzer;
@end
