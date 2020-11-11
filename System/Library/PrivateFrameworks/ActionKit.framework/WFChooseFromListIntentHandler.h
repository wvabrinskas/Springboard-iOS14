/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFChooseFromListIntentHandling.h>

@class NSString;

@interface WFChooseFromListIntentHandler : NSObject <WFChooseFromListIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)provideChosenItemsOptionsForChooseFromList:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)handleChooseFromList:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolvePromptForChooseFromList:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveChosenItemsForChooseFromList:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end
