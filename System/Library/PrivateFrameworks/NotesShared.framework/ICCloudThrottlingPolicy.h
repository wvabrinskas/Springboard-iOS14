/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSDate, NSTimer, ICCloudThrottlingLevel;

@interface ICCloudThrottlingPolicy : NSObject {

	NSArray* _throttlingLevels;
	double _resetInterval;
	unsigned long long _currentBatchCount;
	unsigned long long _currentLevelIndex;
	NSDate* _policyStartDate;
	NSTimer* _policyResetTimer;

}

@property (assign,nonatomic) unsigned long long currentBatchCount;                 //@synthesize currentBatchCount=_currentBatchCount - In the implementation block
@property (nonatomic,retain) NSArray * throttlingLevels;                           //@synthesize throttlingLevels=_throttlingLevels - In the implementation block
@property (assign,nonatomic) unsigned long long currentLevelIndex;                 //@synthesize currentLevelIndex=_currentLevelIndex - In the implementation block
@property (nonatomic,readonly) ICCloudThrottlingLevel * currentLevel; 
@property (assign) double resetInterval;                                           //@synthesize resetInterval=_resetInterval - In the implementation block
@property (retain) NSDate * policyStartDate;                                       //@synthesize policyStartDate=_policyStartDate - In the implementation block
@property (retain) NSTimer * policyResetTimer;                                     //@synthesize policyResetTimer=_policyResetTimer - In the implementation block
@property (nonatomic,readonly) double batchInterval; 
+(void)resetSavedPolicyState;
-(ICCloudThrottlingLevel *)currentLevel;
-(void)savePolicyState;
-(id)init;
-(void)incrementBatchCount;
-(void)setPolicyStartDate:(NSDate *)arg1 ;
-(double)batchInterval;
-(void)setPolicyResetTimer:(NSTimer *)arg1 ;
-(NSTimer *)policyResetTimer;
-(void)resetPolicy;
-(void)setThrottlingLevels:(NSArray *)arg1 ;
-(unsigned long long)currentBatchCount;
-(void)startPolicyResetTimer;
-(NSDate *)policyStartDate;
-(void)setCurrentLevelIndex:(unsigned long long)arg1 ;
-(void)setCurrentBatchCount:(unsigned long long)arg1 ;
-(id)initWithThrottlingLevels:(id)arg1 resetInterval:(double)arg2 ;
-(void)changeLevelIfNecessary;
-(unsigned long long)currentLevelIndex;
-(double)resetInterval;
-(void)loadSavedPolicyState;
-(NSArray *)throttlingLevels;
-(void)dealloc;
-(void)setResetInterval:(double)arg1 ;
@end

