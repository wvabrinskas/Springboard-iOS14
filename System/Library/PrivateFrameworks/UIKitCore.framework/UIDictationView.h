/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SUICFlamesViewDelegate.h>

@protocol UIDictationViewDisplayDelegate;
@class UIKeyboardDicationBackground, UIButton, SUICFlamesView, NSString;

@interface UIDictationView : UIView <SUICFlamesViewDelegate> {

	UIKeyboardDicationBackground* _background;
	UIButton* _endpointButton;
	UIButton* _endpointButtonLandscape;
	int _state;
	BOOL _keyboardInTransition;
	BOOL _automaticAppearanceWasEnabled;
	SUICFlamesView* _flamesView;
	BOOL _showLanguageLabel;
	BOOL _switchingLanguage;
	id<UIDictationViewDisplayDelegate> _displayDelegate;

}

@property (assign,nonatomic) BOOL showLanguageLabel;                                          //@synthesize showLanguageLabel=_showLanguageLabel - In the implementation block
@property (assign,nonatomic) BOOL switchingLanguage;                                          //@synthesize switchingLanguage=_switchingLanguage - In the implementation block
@property (assign,nonatomic) id<UIDictationViewDisplayDelegate> displayDelegate;              //@synthesize displayDelegate=_displayDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(Class)dictationViewClass;
+(CGSize)viewSize;
+(id)activeInstance;
+(CGSize)layoutSize;
-(void)show;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)visible;
-(void)setState:(int)arg1 ;
-(BOOL)switchingLanguage;
-(void)setShowLanguageLabel:(BOOL)arg1 ;
-(void)highlightEndpointButton;
-(void)setDisplayDelegate:(id<UIDictationViewDisplayDelegate>)arg1 ;
-(float)audioLevelForFlamesView:(id)arg1 ;
-(BOOL)isShowing;
-(void)finishReturnToKeyboard;
-(BOOL)drawsOwnBackground;
-(void)prepareForReturnToKeyboard;
-(id)endpointButton;
-(CGSize)currentScreenSize;
-(void)applicationEnteredBackground;
-(CGPoint)positionForShow;
-(void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 location:(CGPoint)arg3 ;
-(CGPoint)backgroundOffset;
-(void)keyboardDidShow:(id)arg1 ;
-(void)endpointButtonPressed;
-(id<UIDictationViewDisplayDelegate>)displayDelegate;
-(BOOL)showLanguageLabel;
-(void)applicationWillResignActive;
-(CGPoint)contentOffset;
-(void)setSwitchingLanguage:(BOOL)arg1 ;
-(void)returnToKeyboard;
-(void)dealloc;
@end

