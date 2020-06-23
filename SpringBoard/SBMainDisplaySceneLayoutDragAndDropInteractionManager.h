//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSTransactionObserver-Protocol.h>
#import <SpringBoard/SBApplicationDropSessionSceneProviding-Protocol.h>
#import <SpringBoard/SBDragAndDropAppActivationWorkspaceTransactionDelegate-Protocol.h>
#import <SpringBoard/UIDragInteractionDelegate_ForWebKitOnly-Protocol.h>
#import <SpringBoard/UIDragInteractionDelegate_Private-Protocol.h>
#import <SpringBoard/UIDropInteractionDelegate_Private-Protocol.h>

@class NSMapTable, NSString, SBDragAndDropAppActivationWorkspaceTransaction, SBFluidSwitcherViewController, SBMainDisplaySceneLayoutViewController, SBWindowDragInteraction, UIDropInteraction;
@protocol SBMainDisplaySceneLayoutDragAndDropInteractionManagerDelegate, UIDragSession;

@interface SBMainDisplaySceneLayoutDragAndDropInteractionManager : NSObject <BSTransactionObserver, SBApplicationDropSessionSceneProviding, UIDropInteractionDelegate_Private, UIDragInteractionDelegate_Private, UIDragInteractionDelegate_ForWebKitOnly, SBDragAndDropAppActivationWorkspaceTransactionDelegate>
{
    _Bool _windowDragHandledByDruid;
    SBFluidSwitcherViewController *_mainSwitcherContentController;
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
    id <SBMainDisplaySceneLayoutDragAndDropInteractionManagerDelegate> _delegate;
    UIDropInteraction *_dropInteraction;
    SBDragAndDropAppActivationWorkspaceTransaction *_activeTransaction;
    NSMapTable *_activeDropSessions;
    SBWindowDragInteraction *_windowDragInteraction;
    id <UIDragSession> _windowDragSession;
    CDUnknownBlockType _windowDragSessionPrepareCompletionBlock;
    NSString *_windowDragSceneIdentifier;
}


// Remaining properties
@property(retain, nonatomic) NSMapTable *activeDropSessions; // @synthesize activeDropSessions=_activeDropSessions;
@property(retain, nonatomic) SBDragAndDropAppActivationWorkspaceTransaction *activeTransaction; // @synthesize activeTransaction=_activeTransaction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) __weak id <SBMainDisplaySceneLayoutDragAndDropInteractionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak SBFluidSwitcherViewController *mainSwitcherContentController; // @synthesize mainSwitcherContentController=_mainSwitcherContentController;
@property(readonly, nonatomic) __weak SBMainDisplaySceneLayoutViewController *sceneLayoutViewController; // @synthesize sceneLayoutViewController=_sceneLayoutViewController;
@property(readonly) Class superclass;
@property(nonatomic) _Bool windowDragHandledByDruid; // @synthesize windowDragHandledByDruid=_windowDragHandledByDruid;
@property(retain, nonatomic) SBWindowDragInteraction *windowDragInteraction; // @synthesize windowDragInteraction=_windowDragInteraction;
@property(retain, nonatomic) NSString *windowDragSceneIdentifier; // @synthesize windowDragSceneIdentifier=_windowDragSceneIdentifier;
@property(retain, nonatomic) id <UIDragSession> windowDragSession; // @synthesize windowDragSession=_windowDragSession;
@property(copy, nonatomic) CDUnknownBlockType windowDragSessionPrepareCompletionBlock; // @synthesize windowDragSessionPrepareCompletionBlock=_windowDragSessionPrepareCompletionBlock;
@end
