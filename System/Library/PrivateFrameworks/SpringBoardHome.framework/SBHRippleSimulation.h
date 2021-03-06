/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:44:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SpringBoardHome/SpringBoardHome-Structs.h>
@interface SBHRippleSimulation : NSObject {

	unsigned long long _rippleWidth;
	unsigned long long _rippleHeight;
	double* _positionBuffer;
	double* _velocityBuffer;
	BOOL _settled;

}

@property (assign,getter=isSettled,nonatomic) BOOL settled;              //@synthesize settled=_settled - In the implementation block
-(void)clear;
-(void)step:(double)arg1 ;
-(void)setSettled:(BOOL)arg1 ;
-(BOOL)isSettled;
-(CGPoint)convertGridToRippleCoordinate:(CGPoint)arg1 ;
-(id)initWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 ;
-(void)createRippleAtGridCoordinate:(CGPoint)arg1 ;
-(double)zPositionForGridCoordinate:(CGPoint)arg1 ;
-(CATransform3D)transformForGridCoordinate:(CGPoint)arg1 ;
-(void)dealloc;
@end

