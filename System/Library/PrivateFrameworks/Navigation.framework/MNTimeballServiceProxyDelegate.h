/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MNTimeballServiceProxyDelegate <NSObject>
@required
-(void)invokeHandlerWithID:(id)arg1 forDestination:(id)arg2 update:(id)arg3 error:(id)arg4;
-(void)completedUpdateForHandlerID:(id)arg1;
-(void)didReceiveError:(id)arg1 forDestination:(id)arg2;
-(void)didReceiveUpdate:(id)arg1 forDestination:(id)arg2;

@end

