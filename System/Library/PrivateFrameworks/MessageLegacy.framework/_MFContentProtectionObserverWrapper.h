/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class MFWeakReferenceHolder, NSObject;

@interface _MFContentProtectionObserverWrapper : NSObject {

	MFWeakReferenceHolder* _observerReference;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) id<MFContentProtectionObserver> observer; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
-(id<MFContentProtectionObserver>)observer;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithObserver:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
@end
