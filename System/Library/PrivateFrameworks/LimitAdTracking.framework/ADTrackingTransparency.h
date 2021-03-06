/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LimitAdTracking.framework/LimitAdTracking
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ADTrackingTransparency : NSObject

@property (nonatomic,readonly) BOOL crossAppTrackingAllowedSwitchEnabled; 
@property (assign,nonatomic) BOOL crossAppTrackingAllowed; 
@property (nonatomic,readonly) BOOL personalizedAdsSwitchEnabled; 
@property (assign,nonatomic) BOOL personalizedAds; 
-(BOOL)crossAppTrackingAllowedSwitchEnabled;
-(BOOL)_userAllowedToChangeSettings;
-(BOOL)personalizedAdsSwitchEnabled;
-(id)personalizedXPCConnection:(/*^block*/id)arg1 withInvalidation:(/*^block*/id)arg2 ;
-(id)personalizedAdsProxy:(id)arg1 ;
-(BOOL)crossAppTrackingAllowed;
-(void)setCrossAppTrackingAllowed:(BOOL)arg1 ;
-(BOOL)personalizedAds;
-(void)setPersonalizedAds:(BOOL)arg1 ;
@end

