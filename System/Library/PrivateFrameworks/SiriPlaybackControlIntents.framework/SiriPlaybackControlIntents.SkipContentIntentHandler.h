/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SkipContentIntentHandling.h>

@interface SiriPlaybackControlIntents.SkipContentIntentHandler : NSObject <SkipContentIntentHandling> {

	 playbackController;
	 deviceSelector;
	 analyticsService;

}
-(id)init;
-(void)handleSkipContent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveDevicesForSkipContent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmSkipContent:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
