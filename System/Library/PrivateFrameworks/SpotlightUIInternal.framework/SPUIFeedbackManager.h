/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SPUIFeedbackManager : NSObject
+(id)feedbackListener;
+(void)didDisappearWithReason:(unsigned long long)arg1 withQueryId:(unsigned long long)arg2 ;
+(void)flushFeedbackWithCompletion:(/*^block*/id)arg1 ;
+(void)didAppearFromSource:(unsigned long long)arg1 withQueryId:(unsigned long long)arg2 queryString:(id)arg3 ;
+(void)didClearInputWithEvent:(unsigned long long)arg1 withQueryId:(unsigned long long)arg2 ;
+(void)cardViewDidDisappearWithEvent:(unsigned long long)arg1 withQueryId:(unsigned long long)arg2 ;
@end

