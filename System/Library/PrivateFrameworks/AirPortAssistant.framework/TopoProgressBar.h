/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <QuartzCore/CALayer.h>

@interface TopoProgressBar : CALayer {

	id _owningView;
	float _progressValue;

}

@property (assign,nonatomic) id owningView; 
@property (assign,nonatomic) float progressValue;              //@synthesize progressValue=_progressValue - In the implementation block
+(int)initImageCache;
+(void)deallocImageCache;
-(void)layoutSublayers;
-(void)setOwningView:(id)arg1 ;
-(CGSize)preferredFrameSize;
-(id)owningView;
-(float)progressValue;
-(id)initWithOwningView:(id)arg1 ;
-(void)setProgressValue:(float)arg1 ;
-(void)dealloc;
-(CGImageRef)composeProgressBar;
@end

