/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UICubicTimingParameters, UISpringTimingParameters;


@protocol UITimingCurveProvider <NSCoding,NSCopying>
@property (nonatomic,readonly) long long timingCurveType; 
@property (nonatomic,readonly) UICubicTimingParameters * cubicTimingParameters; 
@property (nonatomic,readonly) UISpringTimingParameters * springTimingParameters; 
@required
-(UICubicTimingParameters *)cubicTimingParameters;
-(long long)timingCurveType;
-(UISpringTimingParameters *)springTimingParameters;

@end

