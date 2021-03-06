/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface EFMeasuredObject : NSObject {

	id _object;
	double _measure;

}

@property (nonatomic,retain) id object;                   //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) double measure;              //@synthesize measure=_measure - In the implementation block
+(id)object:(id)arg1 withMeasure:(double)arg2 ;
+(id)reverseSortedObjects:(id)arg1 limit:(unsigned long long)arg2 ;
+(id)max:(id)arg1 ;
-(id)initWithObject:(id)arg1 measure:(double)arg2 ;
-(void)setMeasure:(double)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(double)measure;
-(id)description;
-(id)object;
@end

