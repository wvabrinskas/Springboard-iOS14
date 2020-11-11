/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol UICoordinateSpace;
@interface _UIBoundingPath : NSObject <NSSecureCoding> {

	id<UICoordinateSpace> _coordinateSpace;

}

@property (assign,nonatomic,__weak) id<UICoordinateSpace> coordinateSpace;              //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (nonatomic,readonly) BOOL isNonRectangular; 
+(BOOL)supportsSecureCoding;
-(id)debugQuickLookObject;
-(CGRect)_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingRect:(CGRect)arg2 withSize:(double)arg3 minimumPadding:(double)arg4 ;
-(void)setCoordinateSpace:(id<UICoordinateSpace>)arg1 ;
-(CGRect)_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingPathAndRect:(CGRect)arg2 withSize:(double)arg3 cornerRadii:(UIRectCornerRadii)arg4 minimumPadding:(double)arg5 ;
-(id)initWithCoordinateSpace:(id)arg1 ;
-(CGRect)_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingPathAndRect:(CGRect)arg2 withSize:(CGSize)arg3 cornerRadii:(UIRectCornerRadii)arg4 minimumPadding:(double)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)_largestInscribedRectInBoundingPathAndRect:(CGRect)arg1 withCenter:(CGPoint)arg2 aspectRatio:(double)arg3 ;
-(BOOL)isNonRectangular;
-(id)boundingPathForCoordinateSpace:(id)arg1 withCornerRadii:(UIRectCornerRadii)arg2 orientation:(long long)arg3 scale:(double)arg4 ;
-(CGRect)_inscribedRectInBoundingRect:(CGRect)arg1 byInsettingRect:(CGRect)arg2 onEdges:(unsigned long long)arg3 ;
-(id<UICoordinateSpace>)coordinateSpace;
-(CGRect)_largestInscribedRectInBoundingRect:(CGRect)arg1 withCenter:(CGPoint)arg2 aspectRatio:(double)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)boundingPathForCoordinateSpace:(id)arg1 ;
-(CGRect)_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingRect:(CGRect)arg2 withSize:(CGSize)arg3 minimumPadding:(double)arg4 ;
-(id)_imageRepresentation;
-(BOOL)validateForCoordinateSpace;
-(CGRect)_inscribedRectInBoundingPathAndRect:(CGRect)arg1 byInsettingRect:(CGRect)arg2 onEdges:(unsigned long long)arg3 withOptions:(unsigned long long)arg4 ;
@end
