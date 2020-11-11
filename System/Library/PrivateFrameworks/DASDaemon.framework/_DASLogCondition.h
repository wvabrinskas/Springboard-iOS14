/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DASDaemon.framework/DASDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSObject;

@interface _DASLogCondition : NSObject {

	BOOL _isIdeal;
	NSObject* _condition;

}

@property (nonatomic,retain) NSObject * condition;              //@synthesize condition=_condition - In the implementation block
@property (assign,nonatomic) BOOL isIdeal;                      //@synthesize isIdeal=_isIdeal - In the implementation block
+(id)withCondition:(id)arg1 ;
-(NSObject *)condition;
-(id)description;
-(void)setCondition:(NSObject *)arg1 ;
-(BOOL)isIdeal;
-(void)setIsIdeal:(BOOL)arg1 ;
@end
