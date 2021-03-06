/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <HealthAlgorithms/HealthAlgorithms-Structs.h>
@interface HAMenstrualAlgorithmsDayStreamProcessor : NSObject {

	unique_ptr<Nightingale::ngt_DayStreamProcessor, std::__1::default_delete<Nightingale::ngt_DayStreamProcessor> >* _dayStreamProcessor;
	optional<unsigned int> _julianDayOfLastInput;

}
-(id)init;
-(id)analyze;
-(id)initWithConfig:(id)arg1 ;
-(id)analyzeWithMostRecentMenstrualFlowJulianDayUpdated:(unsigned)arg1 ;
-(void)appendDay:(id)arg1 ;
@end

