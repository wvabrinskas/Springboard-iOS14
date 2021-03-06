/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoFoundation/PFMulticaster.h>

@class PFDispatchQueue;

@interface PFAsyncDispatchMulticaster : PFMulticaster {

	PFDispatchQueue* _sendQueue;

}
+(void)initialize;
-(id)init;
-(void)suspend;
-(void)resume;
-(void)distributeSelector:(SEL)arg1 toReceivers:(id)arg2 distributionBlock:(/*^block*/id)arg3 ;
-(id)_defaultDistributionQueue;
-(void)flushMessagesAndNotify:(/*^block*/id)arg1 ;
-(void)_distributeAsyncDispatchSelector:(SEL)arg1 to:(id)arg2 distributionBlock:(/*^block*/id)arg3 ;
@end

