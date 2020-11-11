/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFActionUserInterface.h>
#import <libobjc.A.dylib/WFShareActionUserInterface.h>

@class NSString;

@interface WFShareActionUIKitUserInterface : WFActionUserInterface <WFShareActionUserInterface> {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)excludedActivityTypes;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showWithItems:(id)arg1 usesExtensionItems:(BOOL)arg2 isContentManaged:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)presentItems:(id)arg1 isContentManaged:(BOOL)arg2 ;
-(void)finishWithExtensionItems:(id)arg1 error:(id)arg2 ;
-(void)prewarmInput:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
