/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface RBProcessMap : NSObject <NSCopying> {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _valueMap;

}
-(void)removeIdentity:(id)arg1 ;
-(id)allValue;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(void)removeAllObjects;
-(id)init;
-(id)setValue:(id)arg1 forIdentity:(id)arg2 ;
-(unsigned long long)count;
-(id)valueForIdentity:(id)arg1 ;
-(id)dictionary;
-(id)removeValueForIdentity:(id)arg1 withPredicate:(/*^block*/id)arg2 ;
-(BOOL)containsIdentity:(id)arg1 ;
-(id)removeValueForIdentity:(id)arg1 ;
-(id)allIdentities;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addIdentity:(id)arg1 ;
@end

