/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFActionUserInterface.h>
#import <libobjc.A.dylib/WFChooseFromListActionUserInterface.h>
#import <libobjc.A.dylib/WFChooseImageViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class NSString;

@interface WFChooseFromListActionUIKitUserInterface : WFActionUserInterface <WFChooseFromListActionUserInterface, WFChooseImageViewControllerDelegate, UIPopoverPresentationControllerDelegate> {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completionHandler;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showImagesWithPrompt:(id)arg1 canSelectAll:(BOOL)arg2 canSelectMultiple:(BOOL)arg3 inputItems:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)finishWithContent:(id)arg1 error:(id)arg2 ;
-(void)chooseImageController:(id)arg1 didSelectItems:(id)arg2 ;
-(void)chooseImageControllerDidCancel:(id)arg1 ;
@end
