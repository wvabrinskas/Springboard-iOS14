/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DASDaemon.framework/DASDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface _DASLogConditionHistory : NSObject {

	NSMutableArray* _conditions;
	NSMutableArray* _intervals;

}

@property (nonatomic,retain) NSMutableArray * conditions;              //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,retain) NSMutableArray * intervals;               //@synthesize intervals=_intervals - In the implementation block
+(id)condition:(id)arg1 fromDate:(id)arg2 ;
-(NSMutableArray *)conditions;
-(id)description;
-(NSMutableArray *)intervals;
-(void)setIntervals:(NSMutableArray *)arg1 ;
-(void)setConditions:(NSMutableArray *)arg1 ;
-(id)initWithCondition:(id)arg1 fromDate:(id)arg2 ;
-(void)addCondition:(id)arg1 atDate:(id)arg2 ;
-(id)idealIntervals;
@end
