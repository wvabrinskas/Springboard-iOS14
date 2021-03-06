/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomePubSub/BPSPublisher.h>

@class BPSPublisher;

@interface BPSMap : BPSPublisher {

	BPSPublisher* _upstream;
	/*^block*/id _transform;

}

@property (nonatomic,readonly) BPSPublisher * upstream;              //@synthesize upstream=_upstream - In the implementation block
@property (nonatomic,copy) id transform;                             //@synthesize transform=_transform - In the implementation block
-(id)bookmarkableUpstreams;
-(id)initWithUpstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(void)setTransform:(id)arg1 ;
-(id)init;
-(id)transform;
-(void)subscribe:(id)arg1 ;
-(BPSPublisher *)upstream;
-(id)initWithUpstream:(id)arg1 transform:(/*^block*/id)arg2 ;
@end

