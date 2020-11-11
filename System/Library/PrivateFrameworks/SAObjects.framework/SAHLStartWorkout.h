/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>

@class SAHLWorkoutGoal, SAHLWorkoutType, NSString;

@interface SAHLStartWorkout : SADomainCommand

@property (assign,nonatomic) BOOL isOpenGoal; 
@property (assign,nonatomic) BOOL skipActivitySetup; 
@property (nonatomic,retain) SAHLWorkoutGoal * workoutGoal; 
@property (nonatomic,retain) SAHLWorkoutType * workoutType; 
@property (nonatomic,copy) NSString * workoutUserMode; 
+(id)startWorkout;
+(id)startWorkoutWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(SAHLWorkoutType *)workoutType;
-(SAHLWorkoutGoal *)workoutGoal;
-(void)setWorkoutType:(SAHLWorkoutType *)arg1 ;
-(BOOL)isOpenGoal;
-(void)setIsOpenGoal:(BOOL)arg1 ;
-(BOOL)skipActivitySetup;
-(void)setSkipActivitySetup:(BOOL)arg1 ;
-(void)setWorkoutGoal:(SAHLWorkoutGoal *)arg1 ;
-(NSString *)workoutUserMode;
-(void)setWorkoutUserMode:(NSString *)arg1 ;
@end
