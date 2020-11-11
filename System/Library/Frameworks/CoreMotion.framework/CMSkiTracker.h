/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CMSkiTrackerInternal;

@interface CMSkiTracker : NSObject {

	CMSkiTrackerInternal* _internal;

}

@property (nonatomic,readonly) CMSkiTrackerInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isAvailable;
-(void)querySkiUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)init;
-(void)stopUpdates;
-(void)startUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(CMSkiTrackerInternal *)_internal;
@end
