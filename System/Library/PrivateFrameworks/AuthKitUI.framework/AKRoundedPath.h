/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AuthKitUI/AuthKitUI-Structs.h>
@class NSMutableArray;

@interface AKRoundedPath : NSObject {

	CGPathRef _CGPath;
	NSMutableArray* _points;

}

@property (nonatomic,retain) NSMutableArray * points;              //@synthesize points=_points - In the implementation block
@property (retain) CGPathRef CGPath;                               //@synthesize CGPath=_CGPath - In the implementation block
+(id)pathWithRect:(CGRect)arg1 ;
+(id)pathWithEllipseInRect:(CGRect)arg1 ;
+(id)pathWithRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
-(CGPathRef)CGPath;
-(CGRect)boundingRect;
-(void)addContinuousCornerToPath:(CGPathRef)arg1 trueCorner:(CGPoint)arg2 cornerRadius:(CGSize)arg3 corners:(unsigned long long)arg4 portion:(unsigned long long)arg5 clockwise:(BOOL)arg6 fullRadius:(BOOL)arg7 ;
-(id)initWithPoints:(CGPoint*)arg1 count:(long long)arg2 ;
-(void)addLineToPointX:(double)arg1 y:(double)arg2 ;
-(void)closeSubpath;
-(void)setCGPath:(CGPathRef)arg1 ;
-(NSMutableArray *)points;
-(void)setPoints:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)initWithRect:(CGRect)arg1 cornerRadii:(id)arg2 smoothPillShapes:(BOOL)arg3 ;
@end
