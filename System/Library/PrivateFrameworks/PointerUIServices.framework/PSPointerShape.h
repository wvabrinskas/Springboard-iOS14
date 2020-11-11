/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PointerUIServices.framework/PointerUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PointerUIServices/PointerUIServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PSPointerShape : NSObject <NSCopying, NSSecureCoding> {

	CGPathRef _path;
	BOOL _usesEvenOddFillRule;
	long long _shapeType;
	double _cornerRadius;
	NSString* _cornerCurve;
	CGRect _bounds;

}

@property (nonatomic,readonly) long long shapeType;                      //@synthesize shapeType=_shapeType - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGRect bounds;                            //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) double cornerRadius;                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,copy,readonly) NSString * cornerCurve;              //@synthesize cornerCurve=_cornerCurve - In the implementation block
@property (nonatomic,readonly) const CGPathRef path;                     //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL usesEvenOddFillRule;                 //@synthesize usesEvenOddFillRule=_usesEvenOddFillRule - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)systemShape;
+(id)customShapeWithPath:(CGPathRef)arg1 usesEvenOddFillRule:(BOOL)arg2 ;
+(id)circleWithBounds:(CGRect)arg1 ;
+(id)roundedRectWithBounds:(CGRect)arg1 cornerRadius:(double)arg2 cornerCurve:(id)arg3 ;
+(id)roundedRectWithBounds:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(id)circleWithSize:(CGSize)arg1 ;
+(id)roundedRectWithSize:(CGSize)arg1 cornerRadius:(double)arg2 ;
+(id)customShapeWithPath:(CGPathRef)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(CGSize)size;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)cornerCurve;
-(double)cornerRadius;
-(BOOL)usesEvenOddFillRule;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)bounds;
-(CGPathRef)_createMutablePathByDecodingData:(id)arg1 ;
-(const CGPathRef)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(long long)shapeType;
-(id)_initWithShapeType:(long long)arg1 bounds:(CGRect)arg2 ;
@end
