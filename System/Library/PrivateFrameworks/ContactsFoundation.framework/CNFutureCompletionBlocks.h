/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface CNFutureCompletionBlocks : NSObject {

	NSMutableArray* _completionBlocks;
	BOOL _shouldCallImmediately;

}
-(id)init;
-(void)addCompletionBlock:(/*^block*/id)arg1 orCallWithFutureResult:(id)arg2 ;
-(BOOL)shouldCallImmediately;
-(void)setShouldCallImmediately:(BOOL)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 orCallWithFutureResult:(id)arg2 ;
-(void)addFailureBlock:(/*^block*/id)arg1 orCallWithFutureResult:(id)arg2 ;
-(void)flushCompletionBlocksWithFutureResult:(id)arg1 ;
@end

