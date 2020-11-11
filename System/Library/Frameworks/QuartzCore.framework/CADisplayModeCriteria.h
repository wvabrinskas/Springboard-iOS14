/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <QuartzCore/QuartzCore-Structs.h>
@class NSString;

@interface CADisplayModeCriteria : NSObject {

	CADisplayModeCriteriaPriv* _priv;

}

@property (assign) CGSize resolution; 
@property (assign) double refreshRate; 
@property (copy) NSString * hdrMode; 
-(double)refreshRate;
-(NSString *)hdrMode;
-(id)init;
-(CGSize)resolution;
-(void)setResolution:(CGSize)arg1 ;
-(void)setHdrMode:(NSString *)arg1 ;
-(void)setRefreshRate:(double)arg1 ;
-(void)dealloc;
@end
