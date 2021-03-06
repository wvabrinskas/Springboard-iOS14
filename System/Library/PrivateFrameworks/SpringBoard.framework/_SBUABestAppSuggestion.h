/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBBestAppSuggestion.h>

@class UABestAppSuggestion;

@interface _SBUABestAppSuggestion : SBBestAppSuggestion {

	UABestAppSuggestion* _appSuggestion;

}
-(id)activityType;
-(id)lastUpdateTime;
-(id)originatingDeviceIdentifier;
-(unsigned long long)hash;
-(id)originatingDeviceType;
-(id)originatingDeviceName;
-(id)bundleIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isLocationBasedSuggestion;
-(id)uniqueIdentifier;
-(BOOL)isLocallyGeneratedSuggestion;
-(BOOL)isCallContinuitySuggestion;
-(BOOL)isNotificationSuggestion;
-(BOOL)isOpenURLSuggestion;
-(BOOL)isHandoff;
@end

