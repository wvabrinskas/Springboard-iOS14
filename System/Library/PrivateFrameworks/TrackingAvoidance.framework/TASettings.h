/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TAFilterGeneralSettings, TAFilterVisitsSettings, TAFilterSingleVisitSettings, TAEventBufferSettings, TAVisitStateSettings, TADeviceRecordSettings, TAScanRequestSettings, TATrackingAvoidanceServiceSettings, TAPersistenceManagerSettings, TAAnalyticsManagerSettings;

@interface TASettings : NSObject {

	BOOL _trackingAvoidanceEnabled;
	BOOL _peopleDensityEnabled;
	unsigned long long _maximumDailyScans;
	unsigned long long _notificationThrottleHours;
	unsigned long long _notificationThrottleMaxPerPeriod;
	double _persistenceInterval;
	TAFilterGeneralSettings* _filterGeneralSettings;
	TAFilterVisitsSettings* _filterVisitsSettings;
	TAFilterSingleVisitSettings* _filterSingleVisitSettings;
	TAEventBufferSettings* _eventBufferSettings;
	TAVisitStateSettings* _visitStateSettings;
	TADeviceRecordSettings* _deviceRecordSettings;
	TAScanRequestSettings* _scanRequestSettings;
	TATrackingAvoidanceServiceSettings* _serviceSettings;
	TAPersistenceManagerSettings* _persistenceManagerSettings;
	TAAnalyticsManagerSettings* _analyticsManagerSettings;

}

@property (assign,nonatomic) BOOL trackingAvoidanceEnabled;                                          //@synthesize trackingAvoidanceEnabled=_trackingAvoidanceEnabled - In the implementation block
@property (assign,nonatomic) BOOL peopleDensityEnabled;                                              //@synthesize peopleDensityEnabled=_peopleDensityEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long maximumDailyScans;                                   //@synthesize maximumDailyScans=_maximumDailyScans - In the implementation block
@property (assign,nonatomic) unsigned long long notificationThrottleHours;                           //@synthesize notificationThrottleHours=_notificationThrottleHours - In the implementation block
@property (assign,nonatomic) unsigned long long notificationThrottleMaxPerPeriod;                    //@synthesize notificationThrottleMaxPerPeriod=_notificationThrottleMaxPerPeriod - In the implementation block
@property (assign,nonatomic) double persistenceInterval;                                             //@synthesize persistenceInterval=_persistenceInterval - In the implementation block
@property (nonatomic,retain) TAFilterGeneralSettings * filterGeneralSettings;                        //@synthesize filterGeneralSettings=_filterGeneralSettings - In the implementation block
@property (nonatomic,retain) TAFilterVisitsSettings * filterVisitsSettings;                          //@synthesize filterVisitsSettings=_filterVisitsSettings - In the implementation block
@property (nonatomic,retain) TAFilterSingleVisitSettings * filterSingleVisitSettings;                //@synthesize filterSingleVisitSettings=_filterSingleVisitSettings - In the implementation block
@property (nonatomic,retain) TAEventBufferSettings * eventBufferSettings;                            //@synthesize eventBufferSettings=_eventBufferSettings - In the implementation block
@property (nonatomic,retain) TAVisitStateSettings * visitStateSettings;                              //@synthesize visitStateSettings=_visitStateSettings - In the implementation block
@property (nonatomic,retain) TADeviceRecordSettings * deviceRecordSettings;                          //@synthesize deviceRecordSettings=_deviceRecordSettings - In the implementation block
@property (nonatomic,retain) TAScanRequestSettings * scanRequestSettings;                            //@synthesize scanRequestSettings=_scanRequestSettings - In the implementation block
@property (nonatomic,retain) TATrackingAvoidanceServiceSettings * serviceSettings;                   //@synthesize serviceSettings=_serviceSettings - In the implementation block
@property (nonatomic,retain) TAPersistenceManagerSettings * persistenceManagerSettings;              //@synthesize persistenceManagerSettings=_persistenceManagerSettings - In the implementation block
@property (nonatomic,retain) TAAnalyticsManagerSettings * analyticsManagerSettings;                  //@synthesize analyticsManagerSettings=_analyticsManagerSettings - In the implementation block
+(id)getIntegerSettingsKeys;
+(id)getStringSettingsKeys;
+(id)getArraySettingsKeys;
+(id)getBooleanSettingsKeys;
+(id)getDoubleSettingsKeys;
+(id)convertEnabledLoiTypesValueContentToNSNumberType:(id)arg1 ;
+(id)getUnsignedIntegerSettingsKeys;
-(void)setFilterSingleVisitSettings:(TAFilterSingleVisitSettings *)arg1 ;
-(unsigned long long)maximumDailyScans;
-(void)setDeviceRecordSettings:(TADeviceRecordSettings *)arg1 ;
-(void)setServiceSettings:(TATrackingAvoidanceServiceSettings *)arg1 ;
-(TADeviceRecordSettings *)deviceRecordSettings;
-(BOOL)trackingAvoidanceEnabled;
-(id)initWithSettings:(id)arg1 ;
-(TAAnalyticsManagerSettings *)analyticsManagerSettings;
-(void)setAnalyticsManagerSettings:(TAAnalyticsManagerSettings *)arg1 ;
-(void)setSettings:(id)arg1 ;
-(id)init;
-(void)setPersistenceManagerSettings:(TAPersistenceManagerSettings *)arg1 ;
-(double)persistenceInterval;
-(BOOL)peopleDensityEnabled;
-(void)setEventBufferSettings:(TAEventBufferSettings *)arg1 ;
-(void)setScanRequestSettings:(TAScanRequestSettings *)arg1 ;
-(TAFilterVisitsSettings *)filterVisitsSettings;
-(id)description;
-(TAScanRequestSettings *)scanRequestSettings;
-(TAPersistenceManagerSettings *)persistenceManagerSettings;
-(void)setPersistenceInterval:(double)arg1 ;
-(void)setPeopleDensityEnabled:(BOOL)arg1 ;
-(void)setNotificationThrottleMaxPerPeriod:(unsigned long long)arg1 ;
-(void)setFilterGeneralSettings:(TAFilterGeneralSettings *)arg1 ;
-(void)setMaximumDailyScans:(unsigned long long)arg1 ;
-(TAEventBufferSettings *)eventBufferSettings;
-(void)setFilterVisitsSettings:(TAFilterVisitsSettings *)arg1 ;
-(void)setTrackingAvoidanceEnabled:(BOOL)arg1 ;
-(TAFilterSingleVisitSettings *)filterSingleVisitSettings;
-(TATrackingAvoidanceServiceSettings *)serviceSettings;
-(TAVisitStateSettings *)visitStateSettings;
-(unsigned long long)notificationThrottleHours;
-(unsigned long long)notificationThrottleMaxPerPeriod;
-(void)setVisitStateSettings:(TAVisitStateSettings *)arg1 ;
-(void)setNotificationThrottleHours:(unsigned long long)arg1 ;
-(TAFilterGeneralSettings *)filterGeneralSettings;
@end

