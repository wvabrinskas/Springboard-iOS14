/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface LikelyAVFlowDetails : NSObject {

	int _matchScore;
	NSString* _owner;
	double _relevantThroughput;

}

@property (nonatomic,retain) NSString * owner;                       //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) int matchScore;                         //@synthesize matchScore=_matchScore - In the implementation block
@property (assign,nonatomic) double relevantThroughput;              //@synthesize relevantThroughput=_relevantThroughput - In the implementation block
-(void)setOwner:(NSString *)arg1 ;
-(NSString *)owner;
-(id)description;
-(int)matchScore;
-(void)setMatchScore:(int)arg1 ;
-(double)relevantThroughput;
-(void)setRelevantThroughput:(double)arg1 ;
@end

