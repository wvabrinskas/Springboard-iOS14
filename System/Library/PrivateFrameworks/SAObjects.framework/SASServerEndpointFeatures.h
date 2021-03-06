/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SASServerEndpointFeatures : SABaseClientBoundCommand

@property (assign,nonatomic) double eosLikelihood; 
@property (assign,nonatomic) long long numOfWords; 
@property (nonatomic,copy) NSArray * pauseCounts; 
@property (assign,nonatomic) long long processedAudioDurationMs; 
@property (assign,nonatomic) double silenceProbability; 
@property (nonatomic,copy) NSString * taskName; 
@property (assign,nonatomic) long long trailingSilenceDuration; 
+(id)serverEndpointFeatures;
+(id)serverEndpointFeaturesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)taskName;
-(void)setNumOfWords:(long long)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(long long)numOfWords;
-(double)eosLikelihood;
-(void)setEosLikelihood:(double)arg1 ;
-(NSArray *)pauseCounts;
-(void)setPauseCounts:(NSArray *)arg1 ;
-(long long)processedAudioDurationMs;
-(void)setProcessedAudioDurationMs:(long long)arg1 ;
-(double)silenceProbability;
-(void)setSilenceProbability:(double)arg1 ;
-(void)setTaskName:(NSString *)arg1 ;
-(long long)trailingSilenceDuration;
-(void)setTrailingSilenceDuration:(long long)arg1 ;
@end

