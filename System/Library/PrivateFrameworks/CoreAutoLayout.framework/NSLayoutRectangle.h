/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreAutoLayout/NSLayoutRect.h>

@class NSLayoutPoint;

@interface NSLayoutRectangle : NSLayoutRect

@property (copy,readonly) NSLayoutPoint * centerPoint; 
+(id)rectangleWithLeading:(id)arg1 top:(id)arg2 width:(id)arg3 height:(id)arg4 ;
+(id)rectangleWithLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4 ;
+(id)rectangleWithCenter:(id)arg1 width:(id)arg2 height:(id)arg3 ;
-(id)rectangleByInsettingTop:(double)arg1 leading:(double)arg2 bottom:(double)arg3 trailing:(double)arg4 ;
-(id)rectangleByInsettingTopByDimension:(id)arg1 leadingByDimension:(id)arg2 bottomByDimension:(id)arg3 trailingByDimension:(id)arg4 ;
-(id)rectangleBySlicingWithDistance:(double)arg1 fromEdge:(long long)arg2 ;
-(id)rectangleBySlicingWithDimension:(id)arg1 fromEdge:(long long)arg2 ;
-(id)rectangleBySlicingWithProportion:(double)arg1 fromEdge:(long long)arg2 ;
-(id)constraintsEqualToRectangle:(id)arg1 ;
-(id)constraintsContainingWithinRectangle:(id)arg1 ;
-(id)rectangleWithName:(id)arg1 ;
-(NSLayoutPoint *)centerPoint;
@end
