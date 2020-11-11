/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TPSEventsProviderDelegate.h>

@protocol TPSDEventsProviderManagerDelegate;
@class TPSDuetEventsProvider, TPSPortraitEventsProvider, TPSContentStatusEventsProvider, NSString;

@interface TPSEventsProviderManager : NSObject <TPSEventsProviderDelegate> {

	TPSDuetEventsProvider* _duetEventsProvider;
	TPSPortraitEventsProvider* _portraitEventsProvider;
	TPSContentStatusEventsProvider* _contentStatusEventsProvider;
	id<TPSDEventsProviderManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TPSDEventsProviderManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultManager;
-(long long)_dataTypeForDataProvider:(id)arg1 ;
-(id)init;
-(id<TPSDEventsProviderManagerDelegate>)delegate;
-(void)setDelegate:(id<TPSDEventsProviderManagerDelegate>)arg1 ;
-(void)registerWakingCallbackForEvents:(id)arg1 type:(long long)arg2 clientIdentifier:(id)arg3 ;
-(void)queryEvents:(id)arg1 type:(long long)arg2 ;
-(void)dataProvider:(id)arg1 didReceiveCallbackWithResult:(id)arg2 ;
-(void)dataProvider:(id)arg1 didFinishQueryWithResults:(id)arg2 ;
-(void)registerCallbackForEvents:(id)arg1 type:(long long)arg2 ;
@end
