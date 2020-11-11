/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>
#import <libobjc.A.dylib/CKPluginEntryViewController.h>

@protocol CKTranscriptBalloonPluginController;
@class IMBalloonPluginDataSource, UIViewController, CKBalloonView, IMBalloonPlugin, UIContextMenuInteraction, NSString;

@interface CKDefaultPluginEntryViewController : UIViewController <UIContextMenuInteractionDelegate, CKPluginEntryViewController> {

	IMBalloonPluginDataSource* _datasource;
	UIViewController*<CKTranscriptBalloonPluginController> _pluginBubbleViewController;
	CKBalloonView* _balloonView;
	IMBalloonPlugin* _plugin;
	UIContextMenuInteraction* _contextMenuInteraction;

}

@property (nonatomic,retain) IMBalloonPluginDataSource * datasource;                                                         //@synthesize datasource=_datasource - In the implementation block
@property (nonatomic,retain) UIViewController*<CKTranscriptBalloonPluginController> pluginBubbleViewController;              //@synthesize pluginBubbleViewController=_pluginBubbleViewController - In the implementation block
@property (nonatomic,retain) CKBalloonView * balloonView;                                                                    //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,retain) IMBalloonPlugin * plugin;                                                                       //@synthesize plugin=_plugin - In the implementation block
@property (nonatomic,retain) UIContextMenuInteraction * contextMenuInteraction;                                              //@synthesize contextMenuInteraction=_contextMenuInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CKPluginEntryViewControllerDelegate> entryViewDelegate; 
@property (readonly) BOOL wantsClearButton; 
@property (readonly) BOOL wantsEdgeToEdgeLayout; 
@property (readonly) BOOL loadedContentView; 
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(UIContextMenuInteraction *)contextMenuInteraction;
-(void)viewDidLayoutSubviews;
-(void)setContextMenuInteraction:(UIContextMenuInteraction *)arg1 ;
-(IMBalloonPlugin *)plugin;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidLoad;
-(IMBalloonPluginDataSource *)datasource;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)performHostAppResume;
-(void)performHostAppSuspend;
-(void)loadView;
-(void)payloadWillSend;
-(void)setPlugin:(IMBalloonPlugin *)arg1 ;
-(CKBalloonView *)balloonView;
-(void)setDatasource:(IMBalloonPluginDataSource *)arg1 ;
-(UIViewController*<CKTranscriptBalloonPluginController>)pluginBubbleViewController;
-(void)setPluginBubbleViewController:(UIViewController*<CKTranscriptBalloonPluginController>)arg1 ;
-(id)_copyActionForImageBalloonView;
-(id)_saveActionForImageBalloonView;
-(void)_loadBalloonView;
-(void)didFinishAnimatedBoundsChange;
-(id)_imageBalloon;
-(id)_transcriptPluginBalloon;
-(id)initWithDataSource:(id)arg1 entryViewDelegate:(id)arg2 ;
-(void)payloadWillClear;
-(BOOL)wantsClearButton;
-(BOOL)wantsEdgeToEdgeLayout;
-(BOOL)loadedContentView;
-(id)initWithDataSource:(id)arg1 entryViewDelegate:(id)arg2 andPlugin:(id)arg3 ;
-(void)setBalloonView:(CKBalloonView *)arg1 ;
-(void)dealloc;
@end
