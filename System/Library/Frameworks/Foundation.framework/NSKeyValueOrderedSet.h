/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSOrderedSet.h>
#import <libobjc.A.dylib/NSKeyValueProxyCaching.h>

@class NSObject, NSString, NSKeyValueNonmutatingOrderedSetMethodSet;

@interface NSKeyValueOrderedSet : NSOrderedSet <NSKeyValueProxyCaching> {

	NSObject* _container;
	NSString* _key;
	NSKeyValueNonmutatingOrderedSetMethodSet* _methods;

}
+(id)_proxyShare;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)_proxyNonGCFinalize;
-(void)dealloc;
-(SCD_Struct_NS37)_proxyLocator;
@end

