/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber;

@interface _DPPrivacyBudgetProperties : NSObject {

	NSString* _name;
	NSNumber* _interval;
	NSNumber* _intervalBudgetValue;
	NSNumber* _refillInterval;
	NSNumber* _refillAmount;

}

@property (nonatomic,copy,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSNumber * interval;                         //@synthesize interval=_interval - In the implementation block
@property (nonatomic,retain) NSNumber * intervalBudgetValue;              //@synthesize intervalBudgetValue=_intervalBudgetValue - In the implementation block
@property (nonatomic,retain) NSNumber * refillInterval;                   //@synthesize refillInterval=_refillInterval - In the implementation block
@property (nonatomic,retain) NSNumber * refillAmount;                     //@synthesize refillAmount=_refillAmount - In the implementation block
+(id)allBudgetPropertiesKeys;
+(id)budgetPropertiesForKey:(id)arg1 ;
+(id)budgetMaintenanceSchedule;
+(id)budgetPropertiesFromFile:(id)arg1 ;
+(id)budgetPropertiesFromDictionary:(id)arg1 ;
+(void)initializeAllBudgetProperties;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)interval;
-(NSString *)name;
-(id)description;
-(void)setInterval:(NSNumber *)arg1 ;
-(NSNumber *)refillInterval;
-(NSNumber *)refillAmount;
-(NSNumber *)intervalBudgetValue;
-(void)setIntervalBudgetValue:(NSNumber *)arg1 ;
-(void)setRefillInterval:(NSNumber *)arg1 ;
-(void)setRefillAmount:(NSNumber *)arg1 ;
@end
