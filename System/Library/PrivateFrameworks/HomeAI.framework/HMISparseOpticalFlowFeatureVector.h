/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@interface HMISparseOpticalFlowFeatureVector : HMFObject {

	long long _eventType;
	CGPoint _origin;
	CGVector _motion;

}

@property (readonly) CGPoint origin;                 //@synthesize origin=_origin - In the implementation block
@property (readonly) CGPoint target; 
@property (readonly) CGPoint midpoint; 
@property (readonly) CGVector motion;                //@synthesize motion=_motion - In the implementation block
@property (assign) long long eventType;              //@synthesize eventType=_eventType - In the implementation block
-(CGPoint)target;
-(void)setEventType:(long long)arg1 ;
-(CGPoint)origin;
-(long long)eventType;
-(double)distance;
-(CGPoint)midpoint;
-(CGVector)motion;
-(id)initWithOrigin:(CGPoint)arg1 motion:(CGVector)arg2 ;
@end

