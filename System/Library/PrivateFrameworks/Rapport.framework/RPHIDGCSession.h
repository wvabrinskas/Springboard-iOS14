/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, RPMessageable;
#import <Rapport/Rapport-Structs.h>
@class NSObject, NSDictionary;

@interface RPHIDGCSession : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSDictionary* _options;
	id<RPMessageable> _messenger;

}

@property (nonatomic,retain) id<RPMessageable> messenger;              //@synthesize messenger=_messenger - In the implementation block
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidate;
-(void)invalidate;
-(void)sendGCEvent:(RPHIDGCEvent*)arg1 destinationID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<RPMessageable>)messenger;
-(void)setMessenger:(id<RPMessageable>)arg1 ;
@end
