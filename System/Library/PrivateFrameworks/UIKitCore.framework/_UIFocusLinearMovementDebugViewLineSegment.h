/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UIBezierPath;

@interface _UIFocusLinearMovementDebugViewLineSegment : NSObject {

	_UIFocusLinearMovementDebugViewLineSegment* _previousSegment;
	UIBezierPath* _stemPath;
	UIBezierPath* _arrowHeadPath;
	CGRect _startRect;
	CGRect _endRect;

}

@property (nonatomic,readonly) CGRect startRect;              //@synthesize startRect=_startRect - In the implementation block
@property (nonatomic,readonly) CGRect endRect;                //@synthesize endRect=_endRect - In the implementation block
@property (nonatomic,readonly) long long type; 
-(void)_subdivideBezier:(id)arg1 startPoint:(CGPoint)arg2 controlPoint1:(CGPoint)arg3 controlPoint2:(CGPoint)arg4 endPoint:(CGPoint)arg5 ;
-(CGRect)startRect;
-(void)_calculatePaths;
-(id)_flattenedBezierPathFromBezierPath:(id)arg1 ;
-(id)_calculateStemPathFrom:(CGRect)arg1 to:(CGRect)arg2 startPoint:(CGPoint*)arg3 endPoint:(CGPoint*)arg4 ;
-(id)_pathElementsFromPath:(id)arg1 ;
-(id)_calculateArrowHeadPath;
-(id)initWithStartRect:(CGRect)arg1 endRect:(CGRect)arg2 previousSegment:(id)arg3 ;
-(long long)type;
-(void)drawInRect:(CGRect)arg1 ;
-(CGRect)endRect;
@end

