/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTService.h>

@class NWPathEvaluator;

@interface RTReachabilityManager : RTService {

	BOOL _observingReachabilityChanges;
	NWPathEvaluator* _pathEvaluator;
	unsigned long long _currentReachability;

}

@property (nonatomic,retain) NWPathEvaluator * pathEvaluator;                     //@synthesize pathEvaluator=_pathEvaluator - In the implementation block
@property (assign,nonatomic) unsigned long long currentReachability;              //@synthesize currentReachability=_currentReachability - In the implementation block
+(id)reachabilityToString:(unsigned long long)arg1 ;
-(void)_shutdown;
-(NWPathEvaluator *)pathEvaluator;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCurrentReachability:(unsigned long long)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(id)init;
-(void)_fetchCurrentReachability:(/*^block*/id)arg1 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)fetchCurrentReachability:(/*^block*/id)arg1 ;
-(unsigned long long)reachability;
-(id)initWithPathEvaluator:(id)arg1 ;
-(void)setPathEvaluator:(NWPathEvaluator *)arg1 ;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)currentReachabilityString;
-(unsigned long long)currentReachability;
-(void)dealloc;
-(void)_processReachabilityChange:(id)arg1 ;
@end
