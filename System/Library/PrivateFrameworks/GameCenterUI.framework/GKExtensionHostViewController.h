/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/GKSocialGamingHostInterface.h>
#import <libobjc.A.dylib/GKSocialGamingExtensionInterface.h>

@protocol GKExtensionHostViewControllerDelegate, GKSocialGamingHostInterface;
@class UIViewController, NSMapTable, NSString;

@interface GKExtensionHostViewController : _UIRemoteViewController <GKSocialGamingHostInterface, GKSocialGamingExtensionInterface> {

	id<GKExtensionHostViewControllerDelegate> _delegate;
	UIViewController*<GKSocialGamingHostInterface> _hostViewController;
	NSMapTable* _targetForSelector;

}

@property (nonatomic,retain) NSMapTable * targetForSelector;                                                        //@synthesize targetForSelector=_targetForSelector - In the implementation block
@property (assign,nonatomic,__weak) id<GKExtensionHostViewControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<GKSocialGamingHostInterface> hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<GKExtensionHostViewControllerDelegate>)delegate;
-(id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2 ;
-(void)setDelegate:(id<GKExtensionHostViewControllerDelegate>)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)addTarget:(id)arg1 forProtocol:(id)arg2 toLookup:(id)arg3 ;
-(void)setTargetForSelector:(NSMapTable *)arg1 ;
-(NSMapTable *)targetForSelector;
-(void)buildLookupForHost:(id)arg1 ;
-(oneway void)finishExtension;
-(oneway void)extensionWillFinish;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setHostViewController:(UIViewController*<GKSocialGamingHostInterface>)arg1 ;
-(UIViewController*<GKSocialGamingHostInterface>)hostViewController;
-(void)forwardInvocation:(id)arg1 ;
@end

