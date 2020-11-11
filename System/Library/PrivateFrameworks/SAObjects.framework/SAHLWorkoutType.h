/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAHLWorkoutType : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * swimmingLocationType; 
@property (nonatomic,copy) NSString * workoutCategory; 
@property (nonatomic,copy) NSString * workoutLocationType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)workoutType;
+(id)workoutTypeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setSwimmingLocationType:(NSString *)arg1 ;
-(NSString *)swimmingLocationType;
-(id)encodedClassName;
-(NSString *)workoutLocationType;
-(void)setWorkoutLocationType:(NSString *)arg1 ;
-(NSString *)workoutCategory;
-(void)setWorkoutCategory:(NSString *)arg1 ;
@end
