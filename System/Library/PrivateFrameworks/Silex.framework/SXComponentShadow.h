/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>

@class SXConvertiblePoint, UIColor;

@interface SXComponentShadow : SXJSONObject

@property (nonatomic,readonly) SXConvertibleValue radius; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) SXConvertiblePoint * offset; 
@property (nonatomic,readonly) UIColor * color; 
-(UIColor *)color;
-(SXConvertiblePoint *)offset;
-(double)opacity;
-(SXConvertibleValue)radius;
@end
