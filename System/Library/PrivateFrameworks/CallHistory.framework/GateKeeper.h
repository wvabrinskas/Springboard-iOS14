/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CallHistory/CHLogger.h>

@interface GateKeeper : CHLogger {

	BOOL _hasDeviceBeenUnlockedSinceBoot;

}

@property (assign) BOOL hasDeviceBeenUnlockedSinceBoot;              //@synthesize hasDeviceBeenUnlockedSinceBoot=_hasDeviceBeenUnlockedSinceBoot - In the implementation block
+(id)instance;
-(void)setupMobileKeyBag;
-(id)init;
-(void)reFetch;
-(BOOL)hasDeviceBeenUnlockedSinceBoot;
-(void)cacheUnlockSinceBootState;
-(void)setHasDeviceBeenUnlockedSinceBoot:(BOOL)arg1 ;
@end

