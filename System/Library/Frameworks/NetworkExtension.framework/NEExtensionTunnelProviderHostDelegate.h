/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NEExtensionTunnelProviderHostDelegate <NEExtensionProviderHostDelegate>
@required
-(void)extension:(id)arg1 didRequestSocket:(BOOL)arg2 interface:(id)arg3 local:(id)arg4 remote:(id)arg5 effectivePID:(int)arg6 completionHandler:(/*^block*/id)arg7;
-(void)extension:(id)arg1 didSetStatus:(long long)arg2;
-(void)extension:(id)arg1 didSetTunnelConfiguration:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)extensionDidDetachIPC:(id)arg1;

@end
