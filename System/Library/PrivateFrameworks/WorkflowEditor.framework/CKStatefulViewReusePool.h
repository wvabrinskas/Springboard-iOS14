/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WorkflowEditor/WorkflowEditor-Structs.h>
@interface CKStatefulViewReusePool : NSObject {

	unordered_map<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem, PoolKeyHasher, std::__1::equal_to<std::__1::pair<__unsafe_unretained Class, id> >, std::__1::allocator<std::__1::pair<const std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem> > >* _pool;
	unordered_map<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem, PoolKeyHasher, std::__1::equal_to<std::__1::pair<__unsafe_unretained Class, id> >, std::__1::allocator<std::__1::pair<const std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem> > >* _pendingPool;
	BOOL _enqueuedPendingPurge;
	BOOL _pendingReusePoolEnabled;

}

@property (assign,nonatomic) BOOL pendingReusePoolEnabled;              //@synthesize pendingReusePoolEnabled=_pendingReusePoolEnabled - In the implementation block
+(id)sharedPool;
-(void)enqueueStatefulView:(id)arg1 forControllerClass:(Class)arg2 context:(id)arg3 mayRelinquishBlock:(/*^block*/id)arg4 ;
-(id)dequeueStatefulViewForControllerClass:(Class)arg1 preferredSuperview:(id)arg2 context:(id)arg3 ;
-(void)purgePendingPool;
-(BOOL)pendingReusePoolEnabled;
-(void)setPendingReusePoolEnabled:(BOOL)arg1 ;
@end

