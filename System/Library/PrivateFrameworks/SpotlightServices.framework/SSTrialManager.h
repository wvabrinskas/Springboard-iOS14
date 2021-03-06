/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TRIClient, NSString, NSDictionary;

@interface SSTrialManager : NSObject {

	TRIClient* _trialClient;
	NSString* _namespaceName;
	NSDictionary* _cachedValuesForFactor;
	BOOL _hasActiveExperiment;
	BOOL _hasDefaultValues;
	BOOL _hasRollout;
	BOOL _client_exclusive;
	BOOL _in_allocation;
	NSString* _spotlightNamespace;
	NSString* _experimentId;
	NSString* _rolloutId;

}

@property (nonatomic,readonly) NSString * spotlightNamespace;              //@synthesize spotlightNamespace=_spotlightNamespace - In the implementation block
@property (nonatomic,readonly) NSString * experimentId;                    //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) NSString * rolloutId;                       //@synthesize rolloutId=_rolloutId - In the implementation block
+(id)sharedPolicyTrialManager;
+(id)sharedModelTrialManager;
+(void)loadFactorsForAllSharedTrialManagers;
+(id)getTTRLogs;
+(id)currentTrialManager;
+(id)sharedUITrialManager;
+(id)sharedTrialClient;
+(id)sharedRankingTrialManager;
-(id)getFilePathForFactor:(id)arg1 ;
-(BOOL)hasActiveRollout;
-(long long)getLongValueForFactor:(id)arg1 ;
-(void)reloadAllFactors;
-(id)getLevelForFactor:(id)arg1 ;
-(NSString *)experimentId;
-(BOOL)hasActiveExperiment;
-(id)getStringValueForFactor:(id)arg1 ;
-(BOOL)getBooleanValueForFactor:(id)arg1 ;
-(NSString *)rolloutId;
-(id)description;
-(id)initWithNameSpace:(unsigned)arg1 loadDefaultValues:(BOOL)arg2 ;
-(NSString *)spotlightNamespace;
-(BOOL)getInReservedAllocationForExperiment;
-(void)refreshTrackingId;
-(double)getDoubleValueForFactor:(id)arg1 ;
-(id)getTreatmentId;
-(BOOL)getClientOnlyExperiment;
-(id)getFactorDictionary;
@end

