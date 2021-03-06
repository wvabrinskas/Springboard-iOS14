/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ENRegionMonitorDataSource <NSObject>
@property (assign,nonatomic,__weak) NSObject*<ENRegionMonitorSourceDelegate> delegate; 
@required
-(NSObject*<ENRegionMonitorSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)stopMonitoring;
-(void)startMonitoring;
-(id)currentRegionVisit;

@end

