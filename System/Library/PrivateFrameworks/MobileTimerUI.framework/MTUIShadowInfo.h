/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MobileTimerUI/MobileTimerUI-Structs.h>
@class UIColor;

@interface MTUIShadowInfo : NSObject {

	UIColor* _color;
	double _radius;
	double _scale;
	CGSize _offset;

}

@property (nonatomic,copy) UIColor * color;              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double radius;              //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) CGSize offset;              //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) double scale;               //@synthesize scale=_scale - In the implementation block
-(void)setRadius:(double)arg1 ;
-(double)radius;
-(CGSize)offset;
-(void)setColor:(UIColor *)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setOffset:(CGSize)arg1 ;
-(UIColor *)color;
-(double)scale;
-(id)initWithColor:(id)arg1 radius:(double)arg2 offset:(CGSize)arg3 scale:(double)arg4 ;
@end
