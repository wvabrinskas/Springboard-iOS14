/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BNConsidering <NSObject>
@property (assign,nonatomic,__weak) id<BNConsideringDelegate> delegate; 
@optional
-(id<BNConsideringDelegate>)delegate;
-(void)setDelegate:(id)arg1;

@required
-(long long)shouldOverlapPresentable:(id)arg1 withPresentable:(id)arg2;
-(long long)shouldPresentPresentable:(id)arg1 withPresentedPresentables:(id)arg2 responsiblePresentable:(out id*)arg3;

@end
