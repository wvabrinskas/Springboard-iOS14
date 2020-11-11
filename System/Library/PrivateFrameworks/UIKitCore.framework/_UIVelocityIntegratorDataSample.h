/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIVelocityIntegratorDataSample : NSObject {

	double _timestamp;
	CGVector _translation;
	CGPoint _point;

}

@property (assign,nonatomic) double timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) CGVector translation;              //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) CGPoint point;                     //@synthesize point=_point - In the implementation block
-(BOOL)isSampleDistinctEnoughFromTouchLocation:(CGPoint)arg1 minimumRequiredMovement:(double)arg2 ;
-(CGVector)translation;
-(void)updateTimeToNow;
-(id)description;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setTranslation:(CGVector)arg1 ;
@end
