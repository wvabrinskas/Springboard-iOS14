/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SiriUISuggestionsViewDelegate.h>
#import <libobjc.A.dylib/SUICFlamesViewDelegate.h>
#import <libobjc.A.dylib/VSRecognitionSessionDelegate.h>
#import <libobjc.A.dylib/VSSpeechSynthesizerDelegate.h>

@protocol SBVoiceControlViewControllerDelegate;
@class NSString, UIView, NSTimer, SUICFlamesView, NSDictionary, VSRecognitionSession, SBVoiceControlPresentationSource, UILabel, SiriUISuggestionsView, NSArray;

@interface SBVoiceControlViewController : UIViewController <SiriUISuggestionsViewDelegate, SUICFlamesViewDelegate, VSRecognitionSessionDelegate, VSSpeechSynthesizerDelegate> {

	NSString* _avAudioRouteName;
	NSString* _avAudioRouteUID;
	UIView* _contentView;
	NSTimer* _delayedConfirmationActionTimer;
	SUICFlamesView* _flamesView;
	BOOL _hasConfiguredRouting;
	NSDictionary* _localizationKeys;
	BOOL _isHeadsetButtonPressedDown;
	BOOL _prefersProximityDetectionEnabled;
	VSRecognitionSession* _session;
	SBVoiceControlPresentationSource* _source;
	long long _startingKeywordIndex;
	UILabel* _subtitleLabel;
	SiriUISuggestionsView* _suggestionsView;
	UILabel* _titleLabel;
	BOOL _wasRecognizing;
	BOOL _shouldAllowSensitiveActions;
	BOOL _shouldDisableHandlerActions;
	BOOL _shouldDisableVoiceControlForBluetoothRequests;
	BOOL _voiceControlLoggingEnabled;
	NSArray* _nextRecognitionAudioInputPaths;
	id<SBVoiceControlViewControllerDelegate> _voiceControlDelegate;

}

@property (nonatomic,copy) NSArray * nextRecognitionAudioInputPaths;                                            //@synthesize nextRecognitionAudioInputPaths=_nextRecognitionAudioInputPaths - In the implementation block
@property (nonatomic,readonly) BOOL prefersProximityDetectionEnabled;                                           //@synthesize prefersProximityDetectionEnabled=_prefersProximityDetectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowSensitiveActions;                                                  //@synthesize shouldAllowSensitiveActions=_shouldAllowSensitiveActions - In the implementation block
@property (assign,nonatomic) BOOL shouldDisableHandlerActions;                                                  //@synthesize shouldDisableHandlerActions=_shouldDisableHandlerActions - In the implementation block
@property (assign,nonatomic) BOOL shouldDisableVoiceControlForBluetoothRequests;                                //@synthesize shouldDisableVoiceControlForBluetoothRequests=_shouldDisableVoiceControlForBluetoothRequests - In the implementation block
@property (assign,getter=isVoiceControlLoggingEnabled,nonatomic) BOOL voiceControlLoggingEnabled;               //@synthesize voiceControlLoggingEnabled=_voiceControlLoggingEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<SBVoiceControlViewControllerDelegate> voiceControlDelegate;              //@synthesize voiceControlDelegate=_voiceControlDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleHomeButtonPress;
-(void)recognitionSessionDidBeginAction:(id)arg1 ;
-(BOOL)recognitionSessionWillBeginAction:(id)arg1 ;
-(id)recognitionSession:(id)arg1 openURL:(id)arg2 ;
-(void)recognitionSession:(id)arg1 didCompleteActionWithError:(id)arg2 ;
-(void)recognitionSession:(id)arg1 didFinishSpeakingFeedbackStringWithError:(id)arg2 ;
-(void)_setSession:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithSource:(id)arg1 ;
-(void)_requestDismissal;
-(void)_setStatusText:(id)arg1 ;
-(float)audioLevelForFlamesView:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_resetSession;
-(id)_localizedStringForKey:(id)arg1 ;
-(void)dealloc;
-(CGRect)_flamesViewFrame;
-(id)nextSuggestionsForSuggestionsView:(id)arg1 maxSuggestions:(unsigned long long)arg2 ;
-(void)_setTitleText:(id)arg1 ;
-(BOOL)prefersProximityDetectionEnabled;
-(void)resetSessionWithSource:(id)arg1 ;
-(void)handleHeadsetButtonUpFromButtonDownSource:(BOOL)arg1 ;
-(void)setNextRecognitionAudioInputPaths:(NSArray *)arg1 ;
-(void)setVoiceControlDelegate:(id<SBVoiceControlViewControllerDelegate>)arg1 ;
-(BOOL)isVoiceControlLoggingEnabled;
-(void)setVoiceControlLoggingEnabled:(BOOL)arg1 ;
-(void)setShouldDisableHandlerActions:(BOOL)arg1 ;
-(void)setShouldDisableVoiceControlForBluetoothRequests:(BOOL)arg1 ;
-(void)setShouldAllowSensitiveActions:(BOOL)arg1 ;
-(double)_titleBaseline;
-(double)_subtitleBaseline;
-(void)performDismissalTransitionAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performPresentationTransitionAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)nextRecognitionAudioInputPaths;
-(BOOL)shouldAllowSensitiveActions;
-(BOOL)shouldDisableHandlerActions;
-(BOOL)shouldDisableVoiceControlForBluetoothRequests;
-(id<SBVoiceControlViewControllerDelegate>)voiceControlDelegate;
-(void)_setPrefersProximityDetectionEnabled:(BOOL)arg1 ;
-(void)_setAVAudioRouteUID:(id)arg1 ;
-(void)_deviceProximityStateDidChangeNotification:(id)arg1 ;
-(void)_setFeedbackVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_newRecognitionSession;
-(void)_startSession;
-(void)_performNoMatchFound;
-(void)_handleButtonUpCancel;
-(void)_configureRoutingIfNeeded;
-(void)_speakFeedbackText;
-(void)_continueWithRecognitionAction;
-(BOOL)_openDialRequest:(id)arg1 ;
-(void)_continueRecognitionAction;
-(id)_currentPreferredRouteDictionary;
-(void)_setNeedsRoutingUpdate;
-(void)_avSystemControllerPickableRoutesDidChangeNotification:(id)arg1 ;
-(void)_avSystemControllerHeadphoneJackIsConnectedDidChangeNotification:(id)arg1 ;
-(id)_popNextRecognitionAudioInputPath;
-(void)_performConfirmationAction;
-(id)_availableRouteDictionaries;
-(id)_preferredRouteDictionaryWithAvailableRouteDictionaries:(id)arg1 preferredAVAudioRouteName:(id)arg2 preferredAVAudioRouteUID:(id)arg3 shouldPreferBluetooth:(BOOL)arg4 ;
-(BOOL)_hasPickableBluetoothDevice;
-(void)_speakText:(id)arg1 ;
-(void)_recognitionSessionKeywordsDidChangeNotification:(id)arg1 ;
@end
