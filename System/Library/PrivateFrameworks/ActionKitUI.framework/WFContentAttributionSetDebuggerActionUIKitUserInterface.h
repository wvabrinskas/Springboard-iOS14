/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFActionUserInterface.h>
#import <libobjc.A.dylib/WFContentAttributionSetDebuggerActionUserInterface.h>

@class NSString;

@interface WFContentAttributionSetDebuggerActionUIKitUserInterface : WFActionUserInterface <WFContentAttributionSetDebuggerActionUserInterface> {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)done;
-(void)finish;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showWithInput:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

