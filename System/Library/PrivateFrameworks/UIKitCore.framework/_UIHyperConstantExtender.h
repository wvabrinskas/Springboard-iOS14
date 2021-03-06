/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIHyperExtender_Internal.h>
#import <UIKitCore/_UIHyperExtender.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UIHyperConstantExtender : NSObject <_UIHyperExtender_Internal, _UIHyperExtender, NSSecureCoding, NSCopying> {

	unsigned long long __dimensions;
	double __maximumDistance;

}

@property (assign,setter=_setMaximumDistance:,nonatomic) double _maximumDistance;              //@synthesize _maximumDistance=__maximumDistance - In the implementation block
@property (nonatomic,readonly) unsigned long long _dimensions;                                 //@synthesize _dimensions=__dimensions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingSelf;
-(id)initWithDimensions:(unsigned long long)arg1 ;
-(unsigned long long)_dimensions;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(double)_maximumDistance;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setMaximumDistance:(double)arg1 ;
-(void)_extentVector:(double*)arg1 forUnconstrainedPoint:(const double*)arg2 closestPoint:(const double*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

