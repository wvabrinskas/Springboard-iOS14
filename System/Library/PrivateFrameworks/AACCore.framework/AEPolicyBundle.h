/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AACCore.framework/AACCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, AEPolicyStore, AEPerformancePrimitives;
@class NSObject, NSArray;

@interface AEPolicyBundle : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<AEPolicyStore> _policyStore;
	NSArray* _activations;
	id<AEPerformancePrimitives> _performancePrimitives;

}
-(void)activateSessionWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithPolicyStore:(id)arg1 performancePrimitives:(id)arg2 activations:(id)arg3 ;
-(id)recoverySession;
@end

