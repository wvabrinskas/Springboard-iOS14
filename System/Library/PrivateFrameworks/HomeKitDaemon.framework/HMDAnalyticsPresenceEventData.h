/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@interface HMDAnalyticsPresenceEventData : HMFObject {

	int _presenceEventGranularity;
	int _presenceEventType;

}

@property (assign,nonatomic) int presenceEventGranularity;              //@synthesize presenceEventGranularity=_presenceEventGranularity - In the implementation block
@property (assign,nonatomic) int presenceEventType;                     //@synthesize presenceEventType=_presenceEventType - In the implementation block
-(int)presenceEventType;
-(void)setPresenceEventType:(int)arg1 ;
-(int)presenceEventGranularity;
-(void)setPresenceEventGranularity:(int)arg1 ;
@end

