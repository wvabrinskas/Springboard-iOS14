/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, CADisplayLink;

@interface UIScrollTestToBottomParameters : NSObject {

	int _iterations;
	int _delta;
	int _scrollLength;
	float _startOffset;
	NSString* _currentTest;
	unsigned long long _axis;
	CADisplayLink* _displayLink;

}

@property (assign,nonatomic) int iterations;                           //@synthesize iterations=_iterations - In the implementation block
@property (assign,nonatomic) int delta;                                //@synthesize delta=_delta - In the implementation block
@property (assign,nonatomic) int scrollLength;                         //@synthesize scrollLength=_scrollLength - In the implementation block
@property (assign,nonatomic) float startOffset;                        //@synthesize startOffset=_startOffset - In the implementation block
@property (nonatomic,readonly) float endOffset; 
@property (assign,nonatomic) unsigned long long axis;                  //@synthesize axis=_axis - In the implementation block
@property (nonatomic,retain) NSString * currentTest;                   //@synthesize currentTest=_currentTest - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
-(unsigned long long)axis;
-(void)setAxis:(unsigned long long)arg1 ;
-(float)endOffset;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(float)startOffset;
-(int)iterations;
-(void)setCurrentTest:(NSString *)arg1 ;
-(NSString *)currentTest;
-(CADisplayLink *)displayLink;
-(void)setStartOffset:(float)arg1 ;
-(int)delta;
-(void)dealloc;
-(void)setDelta:(int)arg1 ;
-(void)setIterations:(int)arg1 ;
-(int)scrollLength;
-(id)initWithName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 startOffset:(float)arg5 scrollAxis:(unsigned long long)arg6 ;
-(void)setScrollLength:(int)arg1 ;
@end

