/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MFContactsSearchConsumer <NSObject>
@optional
-(void)finishedSearchingForCorecipients;
-(void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
-(void)finishedTaskWithID:(id)arg1;
-(void)finishedSearchingForAutocompleteResults;
-(void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;

@end

