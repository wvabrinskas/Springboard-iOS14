/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_DKKnowledgeQuerying.h>

@protocol OS_dispatch_queue, _DKKnowledgeQuerying;
@class _DKContentProviderCache, NSObject, _DKKnowledgeContentProvider;

@interface _DKQueryDispatcher : NSObject <_DKKnowledgeQuerying> {

	_DKContentProviderCache* _contentProviderCache;
	NSObject*<OS_dispatch_queue> _queryQueue;
	NSObject*<OS_dispatch_queue> _defaultResponseQueue;
	id<_DKKnowledgeQuerying> _knowledgeStore;
	_DKKnowledgeContentProvider* _knowledgeContentProvider;

}

@property (nonatomic,retain) _DKContentProviderCache * contentProviderCache;              //@synthesize contentProviderCache=_contentProviderCache - In the implementation block
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)initWithKnowledgeStore:(id)arg1 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 ;
-(void)setContentProviderCache:(_DKContentProviderCache *)arg1 ;
-(id)executeQuery:(id)arg1 error:(id*)arg2 ;
-(_DKContentProviderCache *)contentProviderCache;
@end
