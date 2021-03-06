/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VNPoint : NSObject <NSCopying, NSSecureCoding> {

	double _x;
	double _y;

}

@property (readonly) CGPoint location; 
@property (x,readonly) double x;                    //@synthesize x=_x - In the implementation block
@property (y,readonly) double y;                    //@synthesize y=_y - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)zeroPoint;
+(id)pointByApplyingVector:(id)arg1 toPoint:(id)arg2 ;
+(double)distanceBetweenPoint:(id)arg1 point:(id)arg2 ;
-(double)y;
-(id)init;
-(id)initWithLocation:(CGPoint)arg1 ;
-(double)x;
-(unsigned long long)hash;
-(CGPoint)location;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithX:(double)arg1 y:(double)arg2 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)distanceToPoint:(id)arg1 ;
@end

