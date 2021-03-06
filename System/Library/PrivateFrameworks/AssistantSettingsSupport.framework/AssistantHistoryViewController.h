/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSListController.h>

@protocol AssistantHistoryDelegate;
@class AFSettingsConnection, PSDeleteButtonCell, UIActivityIndicatorView;

@interface AssistantHistoryViewController : PSListController {

	AFSettingsConnection* _settingsConnection;
	PSDeleteButtonCell* _deleteButtonCell;
	UIActivityIndicatorView* _indicatorView;
	id<AssistantHistoryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AssistantHistoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)specifiers;
-(id)init;
-(id<AssistantHistoryDelegate>)delegate;
-(void)setDelegate:(id<AssistantHistoryDelegate>)arg1 ;
-(long long)_getDataSharingOptInStatus;
-(void)_presentPrivacySheet;
-(void)_handleDeleteSiriHistoryButtonPress;
-(void)_deleteSiriHistory;
-(void)_startIndicatorViewSpinning;
-(void)_endIndicatorViewSpinning;
-(void)_presentErrorAlert;
-(void)_animateSpinnerIn;
-(id)_deletionResponseAlertForFailure;
@end

