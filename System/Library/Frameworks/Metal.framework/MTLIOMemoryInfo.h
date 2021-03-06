/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Metal/Metal-Structs.h>
@class MTLIOAccelResource;

@interface MTLIOMemoryInfo : NSObject {

	void* memlist_key;
	MTLIOAccelResource* fResourceListHead;
	os_unfair_lock_s _memoryInfoLock;

}
+(id)initialize;
-(void)shutdown;
-(void)lock;
-(void)unlock;
-(id)init;
-(void*)addDataSource:(/*^block*/id)arg1 ;
-(void)removeResourceFromList:(id)arg1 ;
-(void)removeDataSource:(void*)arg1 ;
-(void)addResourceToList:(id)arg1 ;
-(CFArrayRef)annotationList;
-(void)dealloc;
@end

