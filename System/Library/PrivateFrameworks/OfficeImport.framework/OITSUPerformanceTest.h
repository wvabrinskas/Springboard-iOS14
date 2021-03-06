/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface OITSUPerformanceTest : NSObject {

	NSString* mName;
	SEL mSelector;
	id mTarget;
	double mGoalTime;
	double mPrecision;
	BOOL mQuiet;
	TSUOpstat_s mTiming;
	BOOL mPassed;

}

@property (nonatomic,readonly) NSString * name; 
@property (assign,nonatomic) TSUOpstat_s timing; 
@property (assign,nonatomic) double goalTime; 
@property (assign,nonatomic) double precision; 
@property (assign,nonatomic) BOOL quiet; 
@property (nonatomic,readonly) BOOL passed; 
+(id)csvHeader;
-(double)precision;
-(void)setPrecision:(double)arg1 ;
-(void)run;
-(BOOL)quiet;
-(NSString *)name;
-(TSUOpstat_s)timing;
-(BOOL)passed;
-(void)setTiming:(TSUOpstat_s)arg1 ;
-(void)report;
-(void)dealloc;
-(void)setQuiet:(BOOL)arg1 ;
-(id)csvString;
-(id)initWithName:(id)arg1 selector:(SEL)arg2 target:(id)arg3 goalTime:(double)arg4 ;
-(double)goalTime;
-(void)setGoalTime:(double)arg1 ;
@end

