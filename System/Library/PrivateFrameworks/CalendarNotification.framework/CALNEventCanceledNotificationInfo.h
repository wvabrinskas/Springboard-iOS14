/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL, NSDate, EKCalendarEventInvitationNotification, NSDictionary;

@interface CALNEventCanceledNotificationInfo : NSObject {

	BOOL _isDelegate;
	NSString* _sourceClientIdentifier;
	NSURL* _launchURL;
	NSDate* _expirationDate;
	EKCalendarEventInvitationNotification* _eventInvitationNotification;
	NSDictionary* _eventRepresentationDictionary;
	NSString* _sourceTitle;
	NSString* _sourceIdentifier;

}

@property (nonatomic,copy,readonly) NSString * sourceClientIdentifier;                                           //@synthesize sourceClientIdentifier=_sourceClientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * launchURL;                                                           //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                                                     //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) EKCalendarEventInvitationNotification * eventInvitationNotification;              //@synthesize eventInvitationNotification=_eventInvitationNotification - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * eventRepresentationDictionary;                                //@synthesize eventRepresentationDictionary=_eventRepresentationDictionary - In the implementation block
@property (nonatomic,readonly) BOOL isDelegate;                                                                  //@synthesize isDelegate=_isDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceTitle;                                                      //@synthesize sourceTitle=_sourceTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceIdentifier;                                                 //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
-(NSString *)sourceClientIdentifier;
-(EKCalendarEventInvitationNotification *)eventInvitationNotification;
-(NSString *)sourceTitle;
-(BOOL)isDelegate;
-(NSURL *)launchURL;
-(id)description;
-(NSDictionary *)eventRepresentationDictionary;
-(NSString *)sourceIdentifier;
-(NSDate *)expirationDate;
-(id)initWithSourceClientIdentifier:(id)arg1 launchURL:(id)arg2 expirationDate:(id)arg3 eventInvitationNotification:(id)arg4 eventRepresentationDictionary:(id)arg5 isDelegate:(BOOL)arg6 sourceTitle:(id)arg7 sourceIdentifier:(id)arg8 ;
@end
