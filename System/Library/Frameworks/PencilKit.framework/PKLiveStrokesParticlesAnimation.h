/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PencilKit/PencilKit-Structs.h>
@class NSArray;

@interface PKLiveStrokesParticlesAnimation : NSObject {

	NSArray* _strokes;
	double _startTime;
	double _duration;
	CGRect _destinationFrame;
	CGRect _bounds;

}

@property (nonatomic,readonly) NSArray * strokes;                    //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,readonly) double startTime;                     //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double duration;                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) CGRect destinationFrame;              //@synthesize destinationFrame=_destinationFrame - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                        //@synthesize bounds=_bounds - In the implementation block
-(NSArray *)strokes;
-(double)startTime;
-(CGRect)bounds;
-(void)_calculateBounds;
-(double)duration;
-(id)initWithStrokes:(id)arg1 startTime:(double)arg2 duration:(double)arg3 destinationFrame:(CGRect)arg4 ;
-(BOOL)isDoneAtTime:(double)arg1 ;
-(CGRect)destinationFrame;
@end
