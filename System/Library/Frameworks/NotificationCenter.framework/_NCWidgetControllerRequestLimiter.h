/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface _NCWidgetControllerRequestLimiter : NSObject {

	NSDate* _lastRequestDate;
	BOOL _isThrottled;
	long long _requestCount;

}
+(id)sharedInstance;
-(BOOL)isRequestPermitted;
@end

