/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface HAPBTLEReachabilityScanTuple : HMFObject {

	/*^block*/id _completion;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _identifier;

}

@property (nonatomic,copy) id completion;                                     //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
+(id)reachabilityScanTupleWithCompletion:(/*^block*/id)arg1 workQueue:(id)arg2 identifier:(id)arg3 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end

