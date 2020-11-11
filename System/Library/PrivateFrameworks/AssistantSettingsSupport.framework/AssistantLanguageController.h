/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSListItemsController.h>

@class NSDate, AssistantSettingsSignalEmitter;

@interface AssistantLanguageController : PSListItemsController {

	NSDate* _startDate;
	AssistantSettingsSignalEmitter* _signalEmitter;

}
+(id)bundle;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)languageCodeDidChange:(id)arg1 ;
-(void)_signalDidSelectVoice;
@end
