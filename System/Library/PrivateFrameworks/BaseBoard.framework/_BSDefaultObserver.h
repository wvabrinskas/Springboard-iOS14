/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDefaultObserver.h>

@protocol OS_dispatch_queue;
@class BSAbstractDefaultDomain, NSObject, NSArray, NSString;

@interface _BSDefaultObserver : NSObject <BSDefaultObserver> {

	BSAbstractDefaultDomain* _defaults;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _defaultsToObserve;
	/*^block*/id _fireBlock;
	BOOL _invalidated;
	AI _debounceCounter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)invalidate;
-(void)dealloc;
@end

