/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKTSDBrushStroke.h>

@class UIColor, NSString;

@interface AKTSDMutableBrushStroke : AKTSDBrushStroke {

	int join;
	UIColor* color;
	double width;
	double miterLimit;
	NSString* strokeName;

}

@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) int join; 
@property (assign,nonatomic) double miterLimit; 
@property (nonatomic,copy) NSString * strokeName; 
-(void)setWidth:(double)arg1 ;
-(int)join;
-(double)width;
-(void)setColor:(UIColor *)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(UIColor *)color;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)strokeName;
-(void)setJoin:(int)arg1 ;
-(void)setStrokeName:(NSString *)arg1 ;
@end

