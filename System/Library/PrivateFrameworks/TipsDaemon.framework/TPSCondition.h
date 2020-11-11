/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TipsCore/TPSSerializableObject.h>
#import <libobjc.A.dylib/TPSValidatable.h>

@class NSArray, NSString;

@interface TPSCondition : TPSSerializableObject <TPSValidatable> {

	NSArray* _validations;
	NSString* _identifier;
	NSArray* _values;
	NSString* _valueType;
	long long _type;
	unsigned long long _joinType;

}

@property (nonatomic,copy) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * values;                                    //@synthesize values=_values - In the implementation block
@property (nonatomic,copy) NSString * valueType;                                //@synthesize valueType=_valueType - In the implementation block
@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long joinType;                       //@synthesize joinType=_joinType - In the implementation block
@property (nonatomic,readonly) NSArray * targetingValidations; 
@property (nonatomic,readonly) unsigned long long defaultJoinType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)typeFromConditionDictionary:(id)arg1 ;
+(id)conditionFromDictionary:(id)arg1 ;
-(NSString *)valueType;
-(void)setValueType:(NSString *)arg1 ;
-(void)setJoinType:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)debugDescription;
-(void)setValues:(NSArray *)arg1 ;
-(NSString *)identifier;
-(void)setType:(long long)arg1 ;
-(NSArray *)values;
-(long long)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)joinType;
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)defaultJoinType;
-(id)_valuesFromValuesArray:(id)arg1 ;
-(NSArray *)targetingValidations;
@end
