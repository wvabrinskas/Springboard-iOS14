/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/REMLExplanation.h>

@class RECondition;

@interface _REMLConditionExplanation : REMLExplanation {

	RECondition* _condition;
	unsigned long long _type;

}
-(id)initWithCondition:(id)arg1 ;
-(id)explanationByCombiningWithExplanation:(id)arg1 ;
-(id)explanationWithStyle:(unsigned long long)arg1 ;
-(long long)_rankExplanationToSimilarExplanation:(id)arg1 ;
-(id)_constantConditionExplanationWithStyle:(unsigned long long)arg1 ;
-(id)_probabilityExplanation:(id)arg1 withStyle:(unsigned long long)arg2 ;
-(id)_featureRuleExplanation:(id)arg1 withStyle:(unsigned long long)arg2 ;
-(id)_valueExplanation:(id)arg1 withStyle:(unsigned long long)arg2 ;
-(id)_hasFeatureExplanation:(id)arg1 withStyle:(unsigned long long)arg2 ;
@end

