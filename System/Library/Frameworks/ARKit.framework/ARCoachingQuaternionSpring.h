/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ARKit/ARKit-Structs.h>
@class NSArray;

@interface ARCoachingQuaternionSpring : NSObject {

	NSArray* _springs;
	double _response;
	double _dampingRatio;

}

@property (nonatomic,readonly) NSArray * springs; 
@property (assign,nonatomic) SCD_Struct_AR10 value; 
@property (assign,nonatomic) SCD_Struct_AR10 target; 
@property (assign,nonatomic) SCD_Struct_AR10 velocity; 
@property (assign,nonatomic) double response; 
@property (assign,nonatomic) double dampingRatio; 
-(SCD_Struct_AR10)target;
-(id)init;
-(double)dampingRatio;
-(void)setVelocity:(SCD_Struct_AR10)arg1 ;
-(void)setDampingRatio:(double)arg1 ;
-(void)setTarget:(SCD_Struct_AR10)arg1 ;
-(SCD_Struct_AR10)velocity;
-(void)setResponse:(double)arg1 ;
-(SCD_Struct_AR10)value;
-(NSArray *)springs;
-(void)setValue:(SCD_Struct_AR10)arg1 ;
-(double)response;
-(void)stepWithDeltaTime:(double)arg1 ;
@end

