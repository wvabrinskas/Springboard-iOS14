/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol EFScheduler <NSObject>
@required
-(id)performCancelableBlock:(/*^block*/id)arg1;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2;
-(void)performSyncBlock:(/*^block*/id)arg1;
-(void)performSyncBarrierBlock:(/*^block*/id)arg1;
-(void)performBlock:(/*^block*/id)arg1;
-(void)performVoucherPreservingBlock:(/*^block*/id)arg1;
-(id)performWithObject:(id)arg1;

@end

