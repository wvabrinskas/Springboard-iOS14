/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>
#import <libobjc.A.dylib/_SFPageFormatMenuItemController.h>

@protocol _SFPageFormatMenuItemControllerDelegate, _SFBrowserDocument;
@class _SFSettingsAlertItem, MCProfileConnection, UIViewController, NSString;

@interface _SFPageFormatMenuPrivacyReportController : NSObject <MCProfileConnectionObserver, _SFPageFormatMenuItemController> {

	MCProfileConnection* _profileConnection;
	UIViewController* _enableTrackerProtectionViewController;
	id<_SFPageFormatMenuItemControllerDelegate> _delegate;
	id<_SFBrowserDocument> _document;

}

@property (nonatomic,readonly) id<_SFBrowserDocument> document;                                        //@synthesize document=_document - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _SFSettingsAlertItem * alertItem; 
@property (assign,nonatomic,__weak) id<_SFPageFormatMenuItemControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id<_SFPageFormatMenuItemControllerDelegate>)delegate;
-(id<_SFBrowserDocument>)document;
-(_SFSettingsAlertItem *)alertItem;
-(void)setDelegate:(id<_SFPageFormatMenuItemControllerDelegate>)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(void)_presentPrivacyReport;
-(void)_presentPromptToEnableTrackerProtection;
-(void)_enableTrackerProtection;
-(void)_initializeManagedProfileConnection;
-(void)_dismissPromptIfTrackerProtectionEnabled;
-(void)dealloc;
@end
