/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NUInterstitialAdManagerDelegate, NUPage, NUAdProvider, FCNewsAppConfigurationManager, NUAdLayoutOptionsFactory;
@interface NUInterstitialAdManager : NSObject {

	BOOL _enabled;
	id<NUInterstitialAdManagerDelegate> _delegate;
	id<NUPage> _activePage;
	id<NUAdProvider> _adProvider;
	id<FCNewsAppConfigurationManager> _appConfigurationManager;
	id<NUAdLayoutOptionsFactory> _layoutOptionsFactory;

}

@property (nonatomic,readonly) id<NUAdProvider> adProvider;                                            //@synthesize adProvider=_adProvider - In the implementation block
@property (nonatomic,readonly) id<FCNewsAppConfigurationManager> appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
@property (nonatomic,readonly) id<NUAdLayoutOptionsFactory> layoutOptionsFactory;                      //@synthesize layoutOptionsFactory=_layoutOptionsFactory - In the implementation block
@property (assign,nonatomic,__weak) id<NUInterstitialAdManagerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<NUPage> activePage;                                                    //@synthesize activePage=_activePage - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                            //@synthesize enabled=_enabled - In the implementation block
-(id<NUInterstitialAdManagerDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)cancelTimer;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(void)setDelegate:(id<NUInterstitialAdManagerDelegate>)arg1 ;
-(id<NUAdLayoutOptionsFactory>)layoutOptionsFactory;
-(BOOL)isEnabled;
-(void)dealloc;
-(id<NUAdProvider>)adProvider;
-(void)setActivePage:(id<NUPage>)arg1 ;
-(id)initWithAdProvider:(id)arg1 appConfigurationManager:(id)arg2 layoutOptionsFactory:(id)arg3 ;
-(void)triggerTimerChangesForActivePage:(id)arg1 ;
-(id<NUPage>)activePage;
-(void)loadInterstitial;
-(void)restartTimer;
@end

