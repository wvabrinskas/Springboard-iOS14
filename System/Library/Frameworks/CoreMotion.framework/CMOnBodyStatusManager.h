/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMOnBodyStatusManager : NSObject {

	CLConnectionClient* fLocationdConnection;
	BOOL fSubscribedToOnBodyStatusDetection;
	NSObject*<OS_dispatch_queue> fOnBodyStatusQueue;
	/*^block*/id fOnBodyStatusHandler;
	NSObject*<OS_dispatch_queue> fPrivateQueue;

}
+(id)sharedOnBodyStatusManager;
+(BOOL)isOnBodyStatusDetectionAvailable;
-(void)connect;
-(void)disconnect;
-(void)setPropertiesWithDictionary:(id)arg1 ;
-(id)init;
-(void)startOnBodyStatusDetectionPrivateToQueue:(id)arg1 withParameters:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)stopOnBodyStatusDetection;
-(void)stopOnBodyStatusDetectionPrivate;
-(void)startOnBodyStatusDetectionToQueue:(id)arg1 withParameters:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

