/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBSStatusBarStyleOverridesCoordinatorDelegate.h>

@protocol _SFMediaRecordingDocument;
@class SBSStatusBarStyleOverridesAssertion, SBSStatusBarStyleOverridesCoordinator, NSString;

@interface _SFMediaCaptureStatusBarManager : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate> {

	BOOL _hasStatusBarOverride;
	id<_SFMediaRecordingDocument> _recordingDocument;
	SBSStatusBarStyleOverridesAssertion* _statusBarStyleOverride;
	SBSStatusBarStyleOverridesCoordinator* _coordinator;
	NSString* _statusFormatString;

}

@property (getter=isRecording,nonatomic,readonly) BOOL recording; 
@property (nonatomic,readonly) NSString * statusFormatString;                  //@synthesize statusFormatString=_statusFormatString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(BOOL)isRecording;
-(void)setRecordingDocument:(id)arg1 ;
-(void)_acquireStatusBarOverrideWithAudioOnly:(BOOL)arg1 ;
-(void)_releaseStatusBarOverride;
-(void)_cleanUpStatusBarOverride;
-(int)overrideStyleForAudioOnly:(BOOL)arg1 ;
-(void)_didInvalideStatusBarOverride;
-(NSString *)statusFormatString;
-(void)_didAcquireStatusBarOverrideSuccessfully:(BOOL)arg1 ;
-(void)activateApp;
-(void)recordingDocumentDidBeginMediaCapture:(id)arg1 audioOnly:(BOOL)arg2 ;
-(void)recordingDocumentDidEndMediaCapture:(id)arg1 ;
-(void)cancelStatusBarOverride;
-(void)_acquireStatusBarOverride;
-(BOOL)statusBarCoordinator:(id)arg1 receivedTapWithContext:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)statusBarCoordinator:(id)arg1 invalidatedRegistrationWithError:(id)arg2 ;
@end

