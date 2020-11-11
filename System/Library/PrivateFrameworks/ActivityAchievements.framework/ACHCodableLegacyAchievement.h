/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActivityAchievements/ActivityAchievements-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface ACHCodableLegacyAchievement : PBCodable <NSCopying> {

	long long _achievementType;
	double _completedDate;
	double _doubleValue;
	long long _intValue;
	long long _workoutActivityType;
	NSString* _definitionIdentifier;
	NSData* _uuid;
	BOOL _alerted;
	SCD_Struct_AC6 _has;

}

@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasAchievementType; 
@property (assign,nonatomic) long long achievementType;                    //@synthesize achievementType=_achievementType - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedDate; 
@property (assign,nonatomic) double completedDate;                         //@synthesize completedDate=_completedDate - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                           //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) BOOL hasIntValue; 
@property (assign,nonatomic) long long intValue;                           //@synthesize intValue=_intValue - In the implementation block
@property (assign,nonatomic) BOOL hasAlerted; 
@property (assign,nonatomic) BOOL alerted;                                 //@synthesize alerted=_alerted - In the implementation block
@property (nonatomic,readonly) BOOL hasDefinitionIdentifier; 
@property (nonatomic,retain) NSString * definitionIdentifier;              //@synthesize definitionIdentifier=_definitionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasWorkoutActivityType; 
@property (assign,nonatomic) long long workoutActivityType;                //@synthesize workoutActivityType=_workoutActivityType - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setUuid:(NSData *)arg1 ;
-(BOOL)alerted;
-(unsigned long long)hash;
-(BOOL)hasDoubleValue;
-(BOOL)hasUuid;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(double)doubleValue;
-(id)dictionaryRepresentation;
-(void)setAlerted:(BOOL)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)uuid;
-(void)copyTo:(id)arg1 ;
-(double)completedDate;
-(void)setCompletedDate:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setIntValue:(long long)arg1 ;
-(void)setHasIntValue:(BOOL)arg1 ;
-(BOOL)hasIntValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWorkoutActivityType:(long long)arg1 ;
-(long long)workoutActivityType;
-(long long)intValue;
-(void)setDefinitionIdentifier:(NSString *)arg1 ;
-(NSString *)definitionIdentifier;
-(void)setAchievementType:(long long)arg1 ;
-(void)setHasAchievementType:(BOOL)arg1 ;
-(BOOL)hasAchievementType;
-(void)setHasCompletedDate:(BOOL)arg1 ;
-(BOOL)hasCompletedDate;
-(void)setHasAlerted:(BOOL)arg1 ;
-(BOOL)hasAlerted;
-(BOOL)hasDefinitionIdentifier;
-(void)setHasWorkoutActivityType:(BOOL)arg1 ;
-(BOOL)hasWorkoutActivityType;
-(long long)achievementType;
@end
