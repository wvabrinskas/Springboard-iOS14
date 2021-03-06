/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SGXPCActivityManagerProtocol
@required
-(BOOL)setState:(id)arg1 state:(long long)arg2;
-(id)activityForActivityId:(int)arg1;
-(BOOL)shouldDefer:(id)arg1;
-(long long)getState:(id)arg1;
-(id)copyCriteria:(id)arg1;
-(void)registerActivitiesWithSystem;
-(void)registerForActivity:(int)arg1 handler:(/*^block*/id)arg2;
-(void)setCriteria:(id)arg1 criteria:(id)arg2 forActivity:(int)arg3;

@end

