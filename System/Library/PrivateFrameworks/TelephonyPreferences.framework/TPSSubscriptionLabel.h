/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface TPSSubscriptionLabel : NSObject {

	NSString* _localizedBadgeLabel;
	NSString* _localizedLongLabel;
	NSString* _unlocalizedLongLabel;

}

@property (nonatomic,readonly) NSString * localizedBadgeLabel;               //@synthesize localizedBadgeLabel=_localizedBadgeLabel - In the implementation block
@property (nonatomic,readonly) NSString * localizedLongLabel;                //@synthesize localizedLongLabel=_localizedLongLabel - In the implementation block
@property (nonatomic,readonly) NSString * unlocalizedLongLabel;              //@synthesize unlocalizedLongLabel=_unlocalizedLongLabel - In the implementation block
+(id)labelsFromUnlocalizedLabels:(id)arg1 localizedLongLabels:(id)arg2 localizedBadgeLabels:(id)arg3 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)localizedBadgeLabel;
-(id)initWithUnlocalizedLabel:(id)arg1 localizedLongLabel:(id)arg2 localizedBadgeLabel:(id)arg3 ;
-(NSString *)localizedLongLabel;
-(NSString *)unlocalizedLongLabel;
-(BOOL)isEqualToSubscriptionLabel:(id)arg1 ;
@end

