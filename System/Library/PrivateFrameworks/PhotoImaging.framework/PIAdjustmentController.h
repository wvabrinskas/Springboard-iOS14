/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoImaging/PhotoImaging-Structs.h>
@class NSMutableDictionary, NUIdentifier, NUAdjustment, NSDictionary, NSString, NSArray;

@interface PIAdjustmentController : NSObject {

	NSMutableDictionary* _changes;
	NUIdentifier* _identifier;
	NUAdjustment* _adjustment;

}

@property (nonatomic,readonly) NSDictionary * settings; 
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,retain) NUIdentifier * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NUAdjustment * adjustment;               //@synthesize adjustment=_adjustment - In the implementation block
@property (nonatomic,readonly) NSArray * inputKeys; 
@property (nonatomic,readonly) NSArray * displayInputKeys; 
@property (nonatomic,readonly) BOOL canBeEnabled; 
+(id)autoKey;
+(id)enabledKey;
-(BOOL)enabled;
-(NSArray *)inputKeys;
-(BOOL)isAuto;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(unsigned long long)hash;
-(NUAdjustment *)adjustment;
-(void)setEnabled:(BOOL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)debugDescription;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NUIdentifier *)identifier;
-(BOOL)isEqual:(id)arg1 forKeys:(id)arg2 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)settings;
-(BOOL)isEqual:(id)arg1 visualChangesOnly:(BOOL)arg2 ;
-(void)setIdentifier:(NUIdentifier *)arg1 ;
-(BOOL)canHaveAuto;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)settingForKey:(id)arg1 ;
-(BOOL)_isDefault;
-(void)setIsAuto:(BOOL)arg1 ;
-(BOOL)canBeEnabled;
-(void)setFromAdjustment:(id)arg1 ;
-(id)initWithAdjustment:(id)arg1 ;
-(BOOL)isSettingEqual:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)displayInputKeys;
-(BOOL)hasInputKey:(id)arg1 ;
-(BOOL)hasAutoKeyInSchema;
-(id)valuesForArrayInputKey:(id)arg1 ;
-(void)interpolateFromStart:(id)arg1 toEnd:(id)arg2 progress:(double)arg3 ;
-(SCD_Struct_PI7)timeFromInputKey:(id)arg1 timescaleKey:(id)arg2 ;
-(id)visualInputKeys;
-(BOOL)isEqualToAdjustmentController:(id)arg1 ;
-(void)_setPrimitiveValue:(id)arg1 forKey:(id)arg2 ;
-(id)_primitiveValueForKey:(id)arg1 ;
@end

