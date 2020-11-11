/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLPXObservable.h>
#import <libobjc.A.dylib/QLPXMutableNumberFilter.h>

@class NSString;

@interface QLPXNumberFilter : QLPXObservable <QLPXMutableNumberFilter> {

	struct {
		BOOL output;
	}  _needsUpdateFlags;
	double _input;
	double _time;
	double _output;
	double _lastTime;

}

@property (assign,setter=_setOutput:,nonatomic) double output;              //@synthesize output=_output - In the implementation block
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) double lastTime;                             //@synthesize lastTime=_lastTime - In the implementation block
@property (nonatomic,readonly) double input;                                //@synthesize input=_input - In the implementation block
@property (assign,nonatomic) double time;                                   //@synthesize time=_time - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)output;
-(void)setInput:(double)arg1 ;
-(double)initialOutputForInput:(double)arg1 ;
-(double)currentTime;
-(id)init;
-(double)input;
-(void)_updateIfNeeded;
-(double)lastTime;
-(id)initWithInput:(double)arg1 ;
-(double)updatedOutput;
-(void)invalidateOutput;
-(void)_invalidateOutput;
-(void)_updateOutputIfNeeded;
-(void)setTime:(double)arg1 ;
-(id)mutableChangeObject;
-(void)didPerformChanges;
-(double)time;
-(BOOL)_needsUpdate;
-(void)_setOutput:(double)arg1 ;
-(void)_setLastTime:(double)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)_setNeedsUpdate;
@end
