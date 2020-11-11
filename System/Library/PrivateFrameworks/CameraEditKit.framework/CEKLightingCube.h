/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CameraEditKit/CameraEditKit-Structs.h>
@interface CEKLightingCube : NSObject {

	[8 _world];
	[6 _normals];
	CGPoint _screen[8];
	long long _points[8];
	long long _planes[6];

}
-(void)points:(CGPoint*)arg1 forOutlineWithSize:(CGSize)arg2 ;
-(void)points:(CGPoint*)arg1 forPlane:(long long)arg2 size:(CGSize)arg3 ;
-(id)initWithRotationAngle:(double)arg1 ;
-(const CGPathRef)pathForOutlineWithSize:(CGSize)arg1 cornerRadius:(double)arg2 ;
-(const CGPathRef)centerShadowPathWithSize:(CGSize)arg1 width:(double)arg2 ;
-(const CGPathRef)centerPathWithSize:(CGSize)arg1 ;
-(const CGPathRef)pathForPlane:(long long)arg1 size:(CGSize)arg2 ;
-(double)intensityForPlane:(long long)arg1 ;
@end
