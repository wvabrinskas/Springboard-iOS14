/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface _CDInteractionStoreNotificationReceiver : NSObject {

	int _notifierToken;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)postPackedMechanisms:(unsigned long long)arg1 ;
-(void)dealloc;
@end
