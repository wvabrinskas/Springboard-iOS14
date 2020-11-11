/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@interface ODIPointIterator : NSObject
+(id)pointsForSpecification:(id)arg1 startingPoint:(id)arg2 isLast:(BOOL)arg3 ;
+(id)processAttributes:(id)arg1 startingPoint:(id)arg2 isLast:(BOOL)arg3 ;
+(void)processSelfAxisFromPoint:(id)arg1 state:(ODIPointIteratorState*)arg2 ;
+(void)processChildAxisFromPoint:(id)arg1 state:(ODIPointIteratorState*)arg2 ;
+(void)processFollowingSiblingAxisFromPoint:(id)arg1 state:(ODIPointIteratorState*)arg2 ;
+(BOOL)isDoneForState:(ODIPointIteratorState*)arg1 ;
+(BOOL)isPoint:(id)arg1 ofType:(int)arg2 ;
+(BOOL)addPoint:(id)arg1 state:(ODIPointIteratorState*)arg2 ;
@end
