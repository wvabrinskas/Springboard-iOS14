/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomePubSub/BPSPublisher.h>
#import <libobjc.A.dylib/BPSPublisher.h>

@class BPSPublisher, NSString;

@interface BPSScan : BPSPublisher <BPSPublisher> {

	BPSPublisher* _upstream;
	id _initialResult;
	/*^block*/id _nextPartialResult;

}

@property (nonatomic,readonly) BPSPublisher * upstream;                //@synthesize upstream=_upstream - In the implementation block
@property (nonatomic,readonly) id initialResult;                       //@synthesize initialResult=_initialResult - In the implementation block
@property (nonatomic,copy,readonly) id nextPartialResult;              //@synthesize nextPartialResult=_nextPartialResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bookmarkableUpstreams;
-(id)initWithUpstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStorePassThroughValueInBookmark;
-(BOOL)canStoreInternalStateInBookmark;
-(void)subscribe:(id)arg1 ;
-(id)nextPartialResult;
-(BPSPublisher *)upstream;
-(id)initialResult;
-(id)initWithUpstream:(id)arg1 initialResult:(id)arg2 nextPartialResult:(/*^block*/id)arg3 ;
@end

