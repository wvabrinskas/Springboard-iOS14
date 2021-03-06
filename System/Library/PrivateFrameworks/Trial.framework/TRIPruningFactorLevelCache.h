/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TRIFactorLevelCaching.h>

@class _PASLock, _PASSimpleCoalescingTimer;

@interface TRIPruningFactorLevelCache : NSObject <TRIFactorLevelCaching> {

	_PASLock* _lock;
	_PASSimpleCoalescingTimer* _pruningTimer;
	double _pruningDelaySeconds;

}
-(id)init;
-(void)pruneSynchronously;
-(void)_populateCacheForRequiredKey:(id)arg1 guardedData:(id)arg2 ;
-(void)enumerateFactorLevelsUsingBlock:(/*^block*/id)arg1 ;
-(id)factorLevelCurrentlyCachedForFactorName:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)initWithPruningDelaySeconds:(double)arg1 loadFactorLevels:(/*^block*/id)arg2 ;
@end

