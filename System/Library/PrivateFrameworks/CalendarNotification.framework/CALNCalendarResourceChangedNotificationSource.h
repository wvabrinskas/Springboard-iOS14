/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CALNNotificationSource.h>

@protocol CALNCalendarResourceChangedNotificationDataSource, CALNNotificationManager, CALNCalendarIconIdentifierProvider, CALNSourceEventRepresentationProvider, CalDateProvider;
@class NSString, NSArray;

@interface CALNCalendarResourceChangedNotificationSource : NSObject <CALNNotificationSource> {

	id<CALNCalendarResourceChangedNotificationDataSource> _dataSource;
	id<CALNNotificationManager> _notificationManager;
	id<CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;
	id<CALNSourceEventRepresentationProvider> _sourceEventRepresentationProvider;
	id<CalDateProvider> _dateProvider;

}

@property (nonatomic,readonly) id<CALNCalendarResourceChangedNotificationDataSource> dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,__weak,readonly) id<CALNNotificationManager> notificationManager;                                   //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,readonly) id<CALNCalendarIconIdentifierProvider> iconIdentifierProvider;                            //@synthesize iconIdentifierProvider=_iconIdentifierProvider - In the implementation block
@property (nonatomic,readonly) id<CALNSourceEventRepresentationProvider> sourceEventRepresentationProvider;              //@synthesize sourceEventRepresentationProvider=_sourceEventRepresentationProvider - In the implementation block
@property (nonatomic,readonly) id<CalDateProvider> dateProvider;                                                         //@synthesize dateProvider=_dateProvider - In the implementation block
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) NSArray * categories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)categories;
-(id<CalDateProvider>)dateProvider;
-(id<CALNNotificationManager>)notificationManager;
-(void)refreshNotifications:(id)arg1 ;
-(id<CALNCalendarIconIdentifierProvider>)iconIdentifierProvider;
-(id)contentForNotificationWithSourceClientIdentifier:(id)arg1 ;
-(id<CALNCalendarResourceChangedNotificationDataSource>)dataSource;
-(id)contentForNotificationWithInfo:(id)arg1 ;
-(void)didReceiveResponse:(id)arg1 ;
-(NSString *)sourceIdentifier;
-(id<CALNSourceEventRepresentationProvider>)sourceEventRepresentationProvider;
-(id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3 sourceEventRepresentationProvider:(id)arg4 dateProvider:(id)arg5 ;
@end

