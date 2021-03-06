/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CoreTelephonyClient, NSMutableDictionary;

@interface SUCarrierDownloadPolicyProperties : NSObject <NSSecureCoding> {

	CoreTelephonyClient* _client;
	NSMutableDictionary* _keyMap;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)_numberForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(unsigned long long)_unsignedIntegerForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(void)dealloc;
-(long long)_longLongForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(BOOL)_isValidHour:(long long)arg1 ;
-(BOOL)isDownloadFree;
-(BOOL)isDownloadAllowable;
-(BOOL)isDownloadAllowableOver2G;
-(BOOL)isAutoDownloadAllowable;
-(long long)maximumDownloadSizeInBytes;
-(unsigned long long)numberOfDaysToWaitForCellularDownload;
-(long long)peakStartHour;
-(long long)peakEndHour;
-(BOOL)allowInexpensiveHDMUnlimited;
@end

