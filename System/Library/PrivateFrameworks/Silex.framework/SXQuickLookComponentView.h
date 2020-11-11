/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentView.h>

@protocol SXQuickLookModule, SXQuickLookComponentFileProvider;
@class NFStateMachine, NFStateMachineState, UIActivityIndicatorView, UITapGestureRecognizer, UILabel, SXQuickLookViewController;

@interface SXQuickLookComponentView : SXComponentView {

	id<SXQuickLookModule> _quickLookModule;
	id<SXQuickLookComponentFileProvider> _fileProvider;
	NFStateMachine* _stateMachine;
	NFStateMachineState* _idleState;
	NFStateMachineState* _loadingState;
	NFStateMachineState* _presentingState;
	NFStateMachineState* _errorState;
	UIActivityIndicatorView* _loadingIndicator;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UILabel* _errorLabel;
	SXQuickLookViewController* _quickLookViewController;

}

@property (nonatomic,readonly) id<SXQuickLookModule> quickLookModule;                          //@synthesize quickLookModule=_quickLookModule - In the implementation block
@property (nonatomic,readonly) id<SXQuickLookComponentFileProvider> fileProvider;              //@synthesize fileProvider=_fileProvider - In the implementation block
@property (nonatomic,readonly) NFStateMachine * stateMachine;                                  //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) NFStateMachineState * idleState;                                //@synthesize idleState=_idleState - In the implementation block
@property (nonatomic,readonly) NFStateMachineState * loadingState;                             //@synthesize loadingState=_loadingState - In the implementation block
@property (nonatomic,readonly) NFStateMachineState * presentingState;                          //@synthesize presentingState=_presentingState - In the implementation block
@property (nonatomic,readonly) NFStateMachineState * errorState;                               //@synthesize errorState=_errorState - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * loadingIndicator;                     //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapGestureRecognizer;                  //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILabel * errorLabel;                                             //@synthesize errorLabel=_errorLabel - In the implementation block
@property (nonatomic,retain) SXQuickLookViewController * quickLookViewController;              //@synthesize quickLookViewController=_quickLookViewController - In the implementation block
-(void)configure;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(NFStateMachine *)stateMachine;
-(NFStateMachineState *)presentingState;
-(UIActivityIndicatorView *)loadingIndicator;
-(void)discardContents;
-(void)layout;
-(NFStateMachineState *)errorState;
-(NFStateMachineState *)loadingState;
-(void)renderContents;
-(void)presentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(UILabel *)errorLabel;
-(id)createLoadingState;
-(id)createErrorState;
-(void)setErrorLabel:(UILabel *)arg1 ;
-(void)layoutErrorView;
-(void)layoutLoadingIndicator;
-(void)layoutWebView;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 fileProvider:(id)arg5 quickLookModule:(id)arg6 ;
-(void)handleTap;
-(id)createIdleState;
-(id)createPresentingState;
-(NFStateMachineState *)idleState;
-(SXQuickLookViewController *)quickLookViewController;
-(void)setQuickLookViewController:(SXQuickLookViewController *)arg1 ;
-(id<SXQuickLookComponentFileProvider>)fileProvider;
-(id<SXQuickLookModule>)quickLookModule;
@end
