/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SpeakTypingManager : NSObject {

	BOOL _registeredForAppNotifications;

}

@property (assign,getter=isRegisteredForAppNotifications,nonatomic) BOOL registeredForAppNotifications;              //@synthesize registeredForAppNotifications=_registeredForAppNotifications - In the implementation block
+(id)sharedInstance;
+(void)initializeMonitoring;
-(void)_registerForWordFeedbackAXSettingsUpdate;
-(void)updateForCurrentTypingFeedbackStatus;
-(void)_installSpeakTypingSafeCategoriesIfNeeded;
-(void)updateForCurrentWordFeedbackStatus;
-(void)_registerForQuickTypePredictionFeedbackAXSettingsUpdate;
-(void)setRegisteredForAppNotifications:(BOOL)arg1 ;
-(void)updateForCurrentQuickTypeFeedbackStatus;
-(BOOL)isRegisteredForAppNotifications;
-(void)_registerForPhoneticFeedbackAXSettingsUpdate;
-(void)_registerForLetterFeedbackAXSettingsUpdate;
@end
