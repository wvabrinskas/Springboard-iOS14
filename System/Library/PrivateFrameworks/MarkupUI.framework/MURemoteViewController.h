/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/MURemoteViewProtocol.h>

@class NSString;

@interface MURemoteViewController : _UIRemoteViewController <MURemoteViewProtocol> {

	BOOL _shouldResignFirstResponder;
	/*^block*/id _finishedWithResultsCompletionBlock;
	long long _sandboxExtensionHandle;

}

@property (assign) long long sandboxExtensionHandle;                           //@synthesize sandboxExtensionHandle=_sandboxExtensionHandle - In the implementation block
@property (assign) BOOL shouldResignFirstResponder;                            //@synthesize shouldResignFirstResponder=_shouldResignFirstResponder - In the implementation block
@property (nonatomic,copy) id finishedWithResultsCompletionBlock;              //@synthesize finishedWithResultsCompletionBlock=_finishedWithResultsCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)canResignFirstResponder;
-(long long)sandboxExtensionHandle;
-(void)setSandboxExtensionHandle:(long long)arg1 ;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)serviceDidFinishwithResults:(id)arg1 andSandboxExtension:(id)arg2 ;
-(void)setShouldResignFirstResponder:(BOOL)arg1 ;
-(BOOL)shouldResignFirstResponder;
-(id)finishedWithResultsCompletionBlock;
-(void)beginDismissWithInfo:(id)arg1 ;
-(void)setFinishedWithResultsCompletionBlock:(id)arg1 ;
@end
