/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIFoundation/UIFoundation-Structs.h>
@interface NSStorage : NSObject {

	id _storage;
	long long _hintCapacity;
	unsigned long long _reserved[4];

}
+(void)initialize;
-(void)addElement:(void*)arg1 ;
-(void)insertElements:(void*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)replaceElementAtIndex:(unsigned long long)arg1 withElement:(void*)arg2 ;
-(id)init;
-(void)setHintCapacity:(unsigned long long)arg1 ;
-(unsigned long long)capacity;
-(unsigned long long)count;
-(id)initWithElementSize:(unsigned long long)arg1 capacity:(unsigned long long)arg2 ;
-(void)insertElement:(void*)arg1 atIndex:(unsigned long long)arg2 ;
-(id)description;
-(unsigned long long)elementSize;
-(void)removeElementsInRange:(NSRange)arg1 ;
-(void)removeElementAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hintCapacity;
-(void)enumerateElementsUsingBlock:(/*^block*/id)arg1 ;
-(void*)elementAtIndex:(unsigned long long)arg1 ;
-(void*)pointerToElement:(unsigned long long)arg1 directlyAccessibleElements:(NSRange*)arg2 ;
-(void)dealloc;
@end
