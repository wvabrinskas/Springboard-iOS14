/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface APAnalytics : NSObject
+(void)_sendEvent:(id)arg1 payload:(id)arg2 ;
+(void)sendEvent:(id)arg1 ;
+(void)_analyticsSendEvent:(id)arg1 eventPayload:(id)arg2 ;
+(void)sendEventTimed:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 message:(id)arg4 ;
+(void)sendEventError:(long long)arg1 message:(id)arg2 ;
+(void)sendEvent:(id)arg1 valueInt:(long long)arg2 ;
+(void)sendEvent:(id)arg1 valueFloat:(float)arg2 ;
@end

